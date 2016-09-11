using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimulatorGenerator
{
    class DefFileWriter
    {
        public static void Write(List<DataFile> files)
        {


            StringBuilder defFile = new StringBuilder();

            defFile.AppendLine("; Start of Simulation Definitions\n");
            foreach (var dataFile in files)
            {
                string nameWithoutData = dataFile.Name.Replace("Data", "");

                defFile.AppendLine($"; {dataFile.Name} Definitions");

                defFile.AppendLine($"HALSIM_Reset{dataFile.Name}");

                foreach (Variable variable in dataFile.Variables)
                {
                    defFile.AppendLine($"HALSIM_Register{nameWithoutData}{variable.Name}Callback");
                    defFile.AppendLine($"HALSIM_Cancel{nameWithoutData}{variable.Name}Callback");

                    string nameWithLowerCase = variable.Name[0].ToString().ToLower() + variable.Name.Substring(1);
                    defFile.AppendLine($"HALSIM_Get{nameWithoutData}{variable.Name}");
                    if (variable.In)
                    {
                        defFile.AppendLine(
                            $"HALSIM_Set{nameWithoutData}{variable.Name}");
                    }
                }
                defFile.AppendLine();
            }

            File.WriteAllText($"SimFunctions.def", defFile.ToString());
        }
    }
}
