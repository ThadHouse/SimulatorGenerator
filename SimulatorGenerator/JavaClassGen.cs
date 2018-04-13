using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimulatorGenerator
{
    static class JavaClassGen
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
            const string folder = "JAVASRC";

            if (!Directory.Exists(folder))
            {
                Directory.CreateDirectory(folder);
            } 

            foreach (var dataFile in files)
            {
                string nameWithSim = dataFile.Name.Replace("Data", "Sim");

                StringBuilder builder = new StringBuilder();
                builder.AppendLine("package edu.wpi.first.hal.sim;");
                builder.AppendLine();
                builder.AppendLine("import edu.wpi.first.wpilibj.hal.JNIWrapper;");

                builder.AppendLine();

                builder.AppendLine($"public class {nameWithSim} extends JNIWrapper {{");
                foreach (var variable in dataFile.Variables)
                {
                    string nameWithLowerCase = variable.Name[0].ToString().ToLower() + variable.Name.Substring(1);
                    builder.AppendLine($"  public static native int register{variable.Name}Callback(int index, NotifyCallback callback, boolean initialNotify);");
                    builder.AppendLine($"  public static native void cancel{variable.Name}Callback(int index, int uid);");

                    string ret = variable.RetType;

                    if (make.ContainsKey(variable.RetType))
                    {
                        ret = make[variable.RetType];
                    }

                    builder.AppendLine($"  public static native {ret} get{variable.Name}(int index);");
                    builder.AppendLine($"  public static native void set{variable.Name}(int index, {ret} {nameWithLowerCase});");

                    builder.AppendLine();
                }

                builder.AppendLine("  public static native void resetData(int index);");
                builder.AppendLine("}");

                 
                ;

                File.WriteAllText($"{folder}{Path.DirectorySeparatorChar}{nameWithSim}.java", builder.ToString());
            }
            ;

        }
    }
}
