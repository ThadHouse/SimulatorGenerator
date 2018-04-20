using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimulatorGenerator
{
    static  class JavaOoClassGen
    {
        private static Dictionary<string, string> make = new Dictionary<string, string>
        {
            ["HAL_Bool"] = "boolean",
            ["int32_t"] = "int",
            ["int64_t"] = "long",
            ["double"] = "double",
            ["HAL_AccelerometerRange"] = "int"

        };

        public static void Write(List<DataFile> files)
        {
            const string folder = "JAVAOOSOURCE";

            if (!Directory.Exists(folder))
            {
                Directory.CreateDirectory(folder);
            }

            foreach (var dataFile in files)
            {
                string nameWithSim = dataFile.Name.Replace("Data", "Sim");
                string nameWithDataJNI = dataFile.Name.Replace("Data", "DataJNI");

                StringBuilder builder = new StringBuilder();
                builder.AppendLine("package edu.wpi.first.hal.sim;");
                builder.AppendLine();
                builder.AppendLine("import edu.wpi.first.hal.sim.NotifyCallback;");
                builder.AppendLine($"import edu.wpi.first.hal.sim.mockdata.{nameWithDataJNI};");

                builder.AppendLine();

                builder.AppendLine($"public class {nameWithSim} {{");
                builder.AppendLine("  private int m_index;");

                builder.AppendLine();
                builder.AppendLine($"  public {nameWithSim}(int index) {{");
                builder.AppendLine("    m_index = index;");
                builder.AppendLine("  }");
                builder.AppendLine();

                foreach (var variable in dataFile.Variables)
                {
                    string nameWithLowerCase = variable.Name[0].ToString().ToLower() + variable.Name.Substring(1);
                    builder.AppendLine($"  public int register{variable.Name}Callback(NotifyCallback callback, boolean initialNotify) {{");
                    builder.AppendLine($"    return {nameWithDataJNI}.register{variable.Name}Callback(m_index, callback, initialNotify);");
                    builder.AppendLine("  }");


                    builder.AppendLine($"  public void cancel{variable.Name}Callback(int uid) {{");
                    builder.AppendLine($"    {nameWithDataJNI}.cancel{variable.Name}Callback(m_index, uid);");
                    builder.AppendLine("  }");

                    string ret = variable.RetType;

                    if (make.ContainsKey(variable.RetType))
                    {
                        ret = make[variable.RetType];
                    }

                    builder.AppendLine($"  public {ret} get{variable.Name}() {{");
                    builder.AppendLine($"    return {nameWithDataJNI}.get{variable.Name}(m_index);");
                    builder.AppendLine("  }");
                    builder.AppendLine($"  public void set{variable.Name}({ret} {nameWithLowerCase}) {{");
                    builder.AppendLine($"    {nameWithDataJNI}.set{variable.Name}(m_index, {nameWithLowerCase});");
                    builder.AppendLine("  }");

                    builder.AppendLine();
                }

                builder.AppendLine("  public void resetData() {");
                builder.AppendLine($"    {nameWithDataJNI}.resetData(m_index);");
                builder.AppendLine("  }");
                builder.AppendLine("}");


                ;

                File.WriteAllText($"{folder}{Path.DirectorySeparatorChar}{nameWithSim}.java", builder.ToString());
            }
            ;
        }
    }
}
