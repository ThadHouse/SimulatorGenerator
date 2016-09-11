using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimulatorGenerator
{
    static class ExternalHeaderWriter
    {
        public static void Write(List<DataFile> files)
        {
            const string folder = "ExternalHeaders";
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
                builder.AppendLine("#include \"HAL/HAL.h\"");
                builder.AppendLine("#include \"NotifyDataBase.h\"");
                builder.AppendLine();
                builder.AppendLine("#ifdef __cplusplus\nextern \"C\" {\n#endif\n");
                foreach (var variable in dataFile.Variables)
                {
                    // Write Register and cancel functions
                    builder.AppendLine($"int32_t HALSIM_Register{nameWithoutData}{variable.Name}Callback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);");
                    builder.AppendLine($"void HALSIM_Cancel{nameWithoutData}{variable.Name}Callback(int32_t index, int32_t uid);");

                    string nameWithLowerCase = variable.Name[0].ToString().ToLower() + variable.Name.Substring(1);
                    builder.AppendLine($"{variable.RetType} HALSIM_Get{nameWithoutData}{variable.Name}(int32_t index);");
                    if (variable.In)
                    {
                        builder.AppendLine(
                            $"void HALSIM_Set{nameWithoutData}{variable.Name}(int32_t index, {variable.RetType} {nameWithLowerCase});");
                    }
                    builder.AppendLine();
                }

                builder.AppendLine("#ifdef __cplusplus\n}\n#endif\n");
                
                File.WriteAllText($"{folder}{Path.DirectorySeparatorChar}{dataFile.Name}.h", builder.ToString());
            }
        }
    }
}
