using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimulatorGenerator
{
    class CSharpClassGenerator
    {
        static Dictionary<string, string> typeMap = new Dictionary<string, string>()
        {
            ["int32_t"] = "int",
            ["int64_t"] = "long",
            ["HAL_Bool"] = "bool",
            ["HAL_AccelerometerRange"] = "HAL_AccelerometerRange",
            ["double"] = "double",
        };

        public static void Write(List<DataFile> files)
        {
            const string folder = "CsSrc";
            if (!Directory.Exists(folder))
            {
                Directory.CreateDirectory(folder);
            }

            foreach (var dataFile in files)
            {
                string nameWithoutData = dataFile.Name.Replace("Data", "");
                string className = $"HALSim{dataFile.Name}";

                StringBuilder builder = new StringBuilder();
                builder.AppendLine("using System;");
                builder.AppendLine("using System.Collections.Concurrent;");
                builder.AppendLine("using System.Runtime.InteropServices;\nusing HAL.Base;\nusing HAL.NativeLoader;");
                builder.AppendLine("using static HAL.Base.HAL;\n");
                builder.AppendLine("namespace HAL.Simulator.Data\n{");
                builder.AppendLine($"public class {className}\n{{");

                builder.AppendLine(
                    $"static {className}()\n{{ NativeDelegateInitializer.SetupNativeDelegates<{className}>(LibraryLoaderHolder.NativeLoader);\n}}");

                builder.AppendLine("public int Index { get; }");
                builder.AppendLine($"public {className}(int index)\n{{\nIndex = index;\n}}");

                builder.AppendLine("[UnmanagedFunctionPointer(CallingConvention.Cdecl)]");
                builder.AppendLine($"internal delegate void HALSIM_Reset{dataFile.Name}Delegate(int index);");
                builder.AppendLine("[NativeDelegate]");
                builder.AppendLine(
                    $"internal static HALSIM_Reset{dataFile.Name}Delegate HALSIM_Reset{dataFile.Name};");

                builder.AppendLine($"public void ResetData()\n{{");
                foreach (var variable in dataFile.Variables)
                {
                    string nameWithM_ = "m_" + variable.Name[0].ToString().ToLower() + variable.Name.Substring(1);
                    builder.AppendLine($"{nameWithM_}Callbacks.Clear();");
                }
                builder.AppendLine($"HALSIM_Reset{dataFile.Name}(Index);\n}}");


                foreach (var variable in dataFile.Variables)
                {
                    builder.AppendLine("[UnmanagedFunctionPointer(CallingConvention.Cdecl)]");
                    builder.AppendLine($"internal delegate int HALSIM_Register{nameWithoutData}{variable.Name}CallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);");
                    builder.AppendLine("[NativeDelegate]");
                    builder.AppendLine(
                        $"internal static HALSIM_Register{nameWithoutData}{variable.Name}CallbackDelegate HALSIM_Register{nameWithoutData}{variable.Name}Callback;");

                    builder.AppendLine("[UnmanagedFunctionPointer(CallingConvention.Cdecl)]");
                    builder.AppendLine($"internal delegate void HALSIM_Cancel{nameWithoutData}{variable.Name}CallbackDelegate(int index, int uid);");
                    builder.AppendLine("[NativeDelegate]");
                    builder.AppendLine(
                        $"internal static HALSIM_Cancel{nameWithoutData}{variable.Name}CallbackDelegate HALSIM_Cancel{nameWithoutData}{variable.Name}Callback;");

                    builder.AppendLine("[UnmanagedFunctionPointer(CallingConvention.Cdecl)]");
                    builder.AppendLine($"internal delegate {typeMap[variable.RetType]} HALSIM_Get{nameWithoutData}{variable.Name}Delegate(int index);");
                    builder.AppendLine("[NativeDelegate]");
                    builder.AppendLine(
                        $"internal static HALSIM_Get{nameWithoutData}{variable.Name}Delegate HALSIM_Get{nameWithoutData}{variable.Name};");

                    string nameWithLowerCase = variable.Name[0].ToString().ToLower() + variable.Name.Substring(1);
                    if (variable.In)
                    {


                        builder.AppendLine("[UnmanagedFunctionPointer(CallingConvention.Cdecl)]");
                        builder.AppendLine($"internal delegate void HALSIM_Set{nameWithoutData}{variable.Name}Delegate(int index, {typeMap[variable.RetType]} {nameWithLowerCase});");
                        builder.AppendLine("[NativeDelegate]");
                        builder.AppendLine(
                            $"internal static HALSIM_Set{nameWithoutData}{variable.Name}Delegate HALSIM_Set{nameWithoutData}{variable.Name};");
                    }
                    string nameWithM_ = "m_" + variable.Name[0].ToString().ToLower() + variable.Name.Substring(1);

                    builder.AppendLine(
                        $"private readonly ConcurrentDictionary<int, HAL_NotifyCallback> {nameWithM_}Callbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();");

                    builder.AppendLine(
                        $"public int Register{nameWithoutData}{variable.Name}Callback(NotifyCallback callback, bool initialNotify)\n{{");
                    builder.AppendLine(
                        "HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>\n{");
                    builder.AppendLine(
                        "string varName = ReadUTF8String(namePtr);\ncallback?.Invoke(varName, ref value);\n};");
                    builder.AppendLine(
                        $"int uid = HALSIM_Register{nameWithoutData}{variable.Name}Callback(Index, modCallback, IntPtr.Zero, initialNotify);");
                    builder.AppendLine($"if (!{nameWithM_}Callbacks.TryAdd(uid, modCallback))\n{{");
                    builder.AppendLine($"HALSIM_Cancel{nameWithoutData}{variable.Name}Callback(Index, uid);");
                    builder.AppendLine(
                        "throw new ArgumentException(\"Key cannot be added multiple times to the dictionary\");\n}");
                    builder.AppendLine("return uid;");
                    builder.AppendLine("}");

                    builder.AppendLine(
                        $"public void Cancel{nameWithoutData}{variable.Name}Callback(int uid)\n{{");
                    builder.AppendLine($"HALSIM_Cancel{nameWithoutData}{variable.Name}Callback(Index, uid);");
                    builder.AppendLine("HAL_NotifyCallback cb = null;");
                    builder.AppendLine($"{nameWithM_}Callbacks.TryRemove(uid, out cb);");
                    builder.AppendLine("}");

                    builder.AppendLine(
                        $"public {typeMap[variable.RetType]} Get{variable.Name}() => HALSIM_Get{nameWithoutData}{variable.Name}(Index);");
                    if (variable.In)
                    {
                        builder.AppendLine(
                            $"public void Set{variable.Name}({typeMap[variable.RetType]} {nameWithLowerCase}) => HALSIM_Set{nameWithoutData}{variable.Name}(Index, {nameWithLowerCase});");
                    }


                }

                builder.AppendLine("}\n}");

                File.WriteAllText($"{folder}{Path.DirectorySeparatorChar}HALSim{dataFile.Name}.cs", builder.ToString());
            }
        }
    }
}
