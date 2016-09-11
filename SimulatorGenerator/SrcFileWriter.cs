using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimulatorGenerator
{
    static class SrcFileWriter
    {
        private static Dictionary<string, string> make = new Dictionary<string, string>
        {
            ["HAL_Bool"] = "&MakeBoolean(",
            ["int32_t"] = "&MakeInt(",
            ["int64_t"] = "&MakeLong(",
            ["double"] = "&MakeDouble("
        };

        public static void Write(List<DataFile> files)
        {
            const string folder = "SRC";
            if (!Directory.Exists(folder))
            {
                Directory.CreateDirectory(folder);
            }

            foreach (var dataFile in files)
            {
                string nameWithoutData = dataFile.Name.Replace("Data", "");

                StringBuilder builder = new StringBuilder();
                builder.AppendLine($"#include \"{dataFile.Name}Internal.h\"\n");
                builder.AppendLine("#include \"NotifyCallbackHelpers.h\"");
                builder.AppendLine("#include \"../PortsInternal.h\"\n");

                builder.AppendLine("using namespace hal;\n");

                builder.AppendLine($"std::unique_ptr<std::shared_ptr<{dataFile.Name}>[]> hal::Sim{dataFile.Name} = std::make_unique<std::shared_ptr<{dataFile.Name}>[]>(SIZEINHERE);");

                builder.AppendLine($"void {dataFile.Name}::ResetData() {{");
                foreach (var variable in dataFile.Variables)
                {
                    string nameWithLowerCase = "m_" + variable.Name[0].ToString().ToLower() + variable.Name.Substring(1);

                    builder.AppendLine($"  {nameWithLowerCase} = {variable.DefaultValue};");
                    builder.AppendLine($"  {nameWithLowerCase}Callbacks = nullptr;");
                }
                if (dataFile.Base == "NotifyDataBase")
                {
                    //builder.AppendLine("  NotifyDataBase::ResetData();");
                }

                builder.AppendLine("}\n");

                foreach (var variable in dataFile.Variables)
                {
                    string nameWithLowerCase = variable.Name[0].ToString().ToLower() + variable.Name.Substring(1);
                    string nameWithM_ = "m_" + variable.Name[0].ToString().ToLower() + variable.Name.Substring(1);
                    string propChangedMaker = "&MakeEnum(";
                    if (make.ContainsKey(variable.RetType)) propChangedMaker = make[variable.RetType];

                    string copyCallbacks =
                        $"  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*{nameWithM_}Callbacks);";

                    builder.AppendLine(
                        $"int32_t {dataFile.Name}::Register{variable.Name}Callback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {{");

                    builder.AppendLine("  HAL_Value* value = nullptr;");
                    builder.AppendLine($"  if (initialNotify) value = {propChangedMaker}Get{variable.Name}());");
                    builder.AppendLine("  int32_t newUid = 0;");
                    builder.AppendLine(
                        $"  auto newCallbacks = RegisterCallback({nameWithM_}Callbacks, \"{variable.Name}\", callback, param, value, &newUid);");
                    builder.AppendLine("  if (newCallbacks == nullptr) return newUid;");
                    builder.AppendLine($"  {nameWithM_}Callbacks = newCallbacks;");
                    builder.AppendLine("  return newUid;\n}\n");


                    builder.AppendLine(
                        $"void {dataFile.Name}::Cancel{variable.Name}Callback(int32_t uid) {{");
                    builder.AppendLine($"  m_activeCallbacks = CancelCallback({nameWithM_}Callbacks, uid);\n}}\n");

                    builder.AppendLine(
                        $"void {dataFile.Name}::Invoke{variable.Name}Callback(const HAL_Value* value) {{");
                    builder.AppendLine($"  InvokeCallback({nameWithM_}Callbacks, \"{variable.Name}\", value);\n}}\n");

                    builder.AppendLine($"{variable.RetType} {dataFile.Name}::Get{variable.Name}() {{");
                    builder.AppendLine($"  return {nameWithM_};");
                    builder.AppendLine("}\n");


                    builder.AppendLine(
                        $"void {dataFile.Name}::Set{variable.Name}({variable.RetType} {nameWithLowerCase}) {{");
                    builder.AppendLine($"  {variable.RetType} oldValue = {nameWithM_}.exchange({nameWithLowerCase});");
                    builder.AppendLine($"  if (oldValue != {nameWithLowerCase}) {{");
                    


                    builder.AppendLine($"    Invoke{variable.Name}Callback({propChangedMaker}{nameWithLowerCase}));");
                    builder.AppendLine("  }\n}\n");
                }

                builder.AppendLine("extern \"C\" {");

                foreach (var variable in dataFile.Variables)
                {
                    string nameWithLowerCase = variable.Name[0].ToString().ToLower() + variable.Name.Substring(1);
                    builder.AppendLine(
                        $"int32_t HALSIM_Register{nameWithoutData}{variable.Name}Callback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {{");
                    builder.AppendLine(
                        $"  return Sim{dataFile.Name}[index]->Register{variable.Name}Callback(callback, param, initialNotify);");
                    builder.AppendLine("}\n");

                    builder.AppendLine(
                        $"void HALSIM_Cancel{nameWithoutData}{variable.Name}Callback(int32_t index, int32_t uid) {{");
                    builder.AppendLine(
                        $"  Sim{dataFile.Name}[index]->Cancel{variable.Name}Callback(uid);");
                    builder.AppendLine("}\n");

                    builder.AppendLine($"{variable.RetType} HALSIM_Get{nameWithoutData}{variable.Name}(int32_t index) {{");
                    builder.AppendLine($"  return Sim{dataFile.Name}[index]->Get{variable.Name}();");
                    builder.AppendLine("}\n");



                    if (variable.In)
                    {
                        builder.AppendLine(
                            $"void HALSIM_Set{nameWithoutData}{variable.Name}(int32_t index, {variable.RetType} {nameWithLowerCase}) {{");
                        builder.AppendLine($"  Sim{dataFile.Name}[index]->Set{variable.Name}({nameWithLowerCase});");
                        builder.AppendLine("}\n");
                    }
                }

                builder.AppendLine("}");


                File.WriteAllText($"{folder}{Path.DirectorySeparatorChar}{dataFile.Name}.cpp", builder.ToString());
            }
        }
    }
}
