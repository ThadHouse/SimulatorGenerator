using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimulatorGenerator
{
    static class JniGen
    {
        private static Dictionary<string, string> make = new Dictionary<string, string>
        {
            ["HAL_Bool"] = "jboolean",
            ["int32_t"] = "jint",
            ["int64_t"] = "jlong",
            ["double"] = "jdouble",
            ["HAL_AccelerometerRange"] = "jint"

        };

        public static void Write(List<DataFile> files)
        {
            const string folder = "JNISRC";

            if (!Directory.Exists(folder))
            {
                Directory.CreateDirectory(folder);
            }

            foreach (var dataFile in files)
            {
                string nameWithSim = dataFile.Name.Replace("Data", "Sim");
                string nameWithoutData = dataFile.Name.Replace("Data", "");

                StringBuilder builder = new StringBuilder();
                builder.AppendLine($"#include \"edu_wpi_first_hal_sim_{nameWithSim}.h\"");
                builder.AppendLine($"#include \"MockData/{dataFile.Name}.h\"");
                builder.AppendLine("#include <jni.h>");
                builder.AppendLine("#include \"CallbackStore.h\"");
                builder.AppendLine();
                builder.AppendLine("extern \"C\" {");

                builder.AppendLine();
                foreach (var variable in dataFile.Variables)
                {
                    string nameWithLowerCase = variable.Name[0].ToString().ToLower() + variable.Name.Substring(1);

                    string ret = variable.RetType;

                    if (make.ContainsKey(variable.RetType))
                    {
                        ret = make[variable.RetType];
                    }
                    builder.AppendLine($"JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_{nameWithSim}_register{variable.Name}Callback");
                    builder.AppendLine("  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {");
                    builder.AppendLine($"  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_Register{nameWithoutData}{variable.Name}Callback);");
                    builder.AppendLine("}");
                    builder.AppendLine();

                    builder.AppendLine($"JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_{nameWithSim}_cancel{variable.Name}Callback");
                    builder.AppendLine("  (JNIEnv * env, jclass, jint index, jint handle) {");
                    builder.AppendLine($"  return sim::FreeCallback(env, handle, index, &HALSIM_Cancel{nameWithoutData}{variable.Name}Callback);");
                    builder.AppendLine("}");
                    builder.AppendLine();

                    builder.AppendLine($"JNIEXPORT {ret} JNICALL Java_edu_wpi_first_hal_sim_{nameWithSim}_get{variable.Name}");
                    builder.AppendLine("  (JNIEnv *, jclass, jint index) {");
                    builder.AppendLine($"  return HALSIM_Get{nameWithoutData}{variable.Name}(index);");
                    builder.AppendLine("}");
                    builder.AppendLine();

                    builder.AppendLine($"JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_{nameWithSim}_set{variable.Name}");
                    builder.AppendLine($"  (JNIEnv *, jclass, jint index, {ret} value) {{");
                    builder.AppendLine($"  HALSIM_Set{nameWithoutData}{variable.Name}(index, value);");
                    builder.AppendLine("}");
                    builder.AppendLine();
                }

                builder.AppendLine($"JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_{nameWithSim}_resetData");
                builder.AppendLine("  (JNIEnv*, jclass, jint index) {");
                builder.AppendLine($"  HALSIM_Reset{dataFile.Name.Replace("Data", "")}Data(index);");
                builder.AppendLine("}");
                builder.AppendLine();

                builder.AppendLine("}");


                ;

                File.WriteAllText($"{folder}{Path.DirectorySeparatorChar}{nameWithSim}.cpp", builder.ToString());
            }
            ;

        }
    }
}
