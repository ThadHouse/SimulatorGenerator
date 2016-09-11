using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimulatorGenerator
{
    static class InternalHeaderWriter
    {
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
                builder.AppendLine("#pragma once");
                builder.AppendLine();
                builder.AppendLine("#include <atomic>\n#include <memory>\n");
                builder.AppendLine($"#include \"MockData/{dataFile.Name}.h\"");
                builder.AppendLine($"#include \"MockData/{dataFile.Base}.h\"");
                builder.AppendLine();
                builder.AppendLine("namespace hal {");
                builder.AppendLine($"class {dataFile.Name} {{\n public:");
                foreach (var variable in dataFile.Variables)
                {
                    string nameWithLowerCase = variable.Name[0].ToString().ToLower() + variable.Name.Substring(1);
                    builder.AppendLine($"  int32_t Register{variable.Name}Callback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);");
                    builder.AppendLine($"  void Cancel{variable.Name}Callback(int32_t uid);");
                    builder.AppendLine($"  void Invoke{variable.Name}Callback(const HAL_Value* value);");

                    builder.AppendLine($"  {variable.RetType} Get{variable.Name}();");
                    builder.AppendLine($"  void Set{variable.Name}({variable.RetType} {nameWithLowerCase});");
                    builder.AppendLine();
                }

                builder.AppendLine("  virtual void ResetData();");

                builder.AppendLine(" private:");

                foreach (var variable in dataFile.Variables)
                {

                    string nameWithLowerCase = "m_" + variable.Name[0].ToString().ToLower() + variable.Name.Substring(1);
                    builder.AppendLine($"  std::atomic<{variable.RetType}> {nameWithLowerCase} = {variable.DefaultValue};");
                    builder.AppendLine($"  std::shared_ptr<UidVector<NotifyListener>> {nameWithLowerCase}Callbacks = nullptr;");
                }

                builder.AppendLine("};");

                builder.AppendLine($"extern std::unique_ptr<std::shared_ptr<{dataFile.Name}>[]> Sim{dataFile.Name};");

                builder.AppendLine("}");
                File.WriteAllText($"{folder}{Path.DirectorySeparatorChar}{dataFile.Name}Internal.h", builder.ToString());
            }
        }
    }
}
