using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimulatorGenerator
{
    static class CppOoGen
    {
        private static Dictionary<string, string> make = new Dictionary<string, string>
        {
            ["HAL_Bool"] = "bool",
            ["int32_t"] = "int",
            ["int64_t"] = "int64_t",
            ["double"] = "double",
            ["HAL_AccelerometerRange"] = "HAL_AccelerometerRange"

        };

        public static void Write(List<DataFile> files)
        {
            const string folder = "CPPOOSOURCE";

            if (!Directory.Exists(folder))
            {
                Directory.CreateDirectory(folder);
            }

            foreach (var dataFile in files)
            {
                string nameWithSim = dataFile.Name.Replace("Data", "Sim");
                string nameWithoutData = dataFile.Name.Replace("Data", "");

                StringBuilder builder = new StringBuilder();
                builder.AppendLine("#pragma once");
                builder.AppendLine();
                builder.AppendLine("#ifndef __FRC_ROBORIO__");
                builder.AppendLine();
                builder.AppendLine($"#include \"MockData/{dataFile.Name}.h\"");
                builder.AppendLine("#include <memory>");
                builder.AppendLine("#include \"CallbackStore.h\"");


                builder.AppendLine();

                builder.AppendLine("namespace frc {");
                builder.AppendLine("namespace sim {");

                builder.AppendLine($"class {nameWithSim} {{");
                builder.AppendLine(" public:");
                builder.AppendLine($"  {nameWithSim}(int index) {{");
                builder.AppendLine("    m_index = index;");
                builder.AppendLine("  }");
                builder.AppendLine();

                foreach (var variable in dataFile.Variables)
                {
                    string nameWithLowerCase = variable.Name[0].ToString().ToLower() + variable.Name.Substring(1);
                    builder.AppendLine($"  std::unique_ptr<CallbackStore> Register{variable.Name}Callback(NotifyCallback callback, bool initialNotify) {{");
                    builder.AppendLine($"    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_Cancel{nameWithoutData}{variable.Name}Callback);");
                    builder.AppendLine($"    store->setUid(HALSIM_Register{nameWithoutData}{variable.Name}Callback(m_index, &CallbackStoreThunk, store.get(), initialNotify));");
                    builder.AppendLine($"    return std::move(store);");
                    builder.AppendLine("  }");
                    //builder.AppendLine($"  int Register{variable.Name}Callback(HAL_NotifyCallback callback, void* param, bool initialNotify) {{");
                    //builder.AppendLine($"    return HALSIM_Register{nameWithoutData}{variable.Name}Callback(m_index, callback, param, initialNotify);");
                    //builder.AppendLine("  }");


                    //builder.AppendLine($"  void Cancel{variable.Name}Callback(int uid) {{");
                    //builder.AppendLine($"    HALSIM_Cancel{nameWithoutData}{variable.Name}Callback(m_index, uid);");
                    //builder.AppendLine("  }");

                    string ret = variable.RetType;

                    if (make.ContainsKey(variable.RetType))
                    {
                        ret = make[variable.RetType];
                    }

                    builder.AppendLine($"  {ret} Get{variable.Name}() {{");
                    builder.AppendLine($"    return HALSIM_Get{nameWithoutData}{variable.Name}(m_index);");
                    builder.AppendLine("  }");
                    builder.AppendLine($"  void Set{variable.Name}({ret} {nameWithLowerCase}) {{");
                    builder.AppendLine($"    HALSIM_Set{nameWithoutData}{variable.Name}(m_index, {nameWithLowerCase});");
                    builder.AppendLine("  }");

                    builder.AppendLine();
                }

                builder.AppendLine("  void ResetData() {");
                builder.AppendLine($"    HALSIM_Reset{nameWithoutData}Data(m_index);");
                builder.AppendLine("  }");
                builder.AppendLine(" private:");
                builder.AppendLine("  int m_index;");
                builder.AppendLine("};");

                builder.AppendLine("} // namespace sim");
                builder.AppendLine("} // namespace frc");
                builder.AppendLine("#endif // __FRC_ROBORIO__");


                ;

                File.WriteAllText($"{folder}{Path.DirectorySeparatorChar}{nameWithSim}.h", builder.ToString());
            }
            ;
        }
    }
}
