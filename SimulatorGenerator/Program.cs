using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimulatorGenerator
{
    class Program
    {
        static void Main(string[] args)
        {
            /*
            var fileLines = File.ReadAllLines("ntcore.def");

            var missingLines = File.ReadAllLines("MissingHALSymbols.txt");

            List<string> newLines = new List<string>();

            foreach (var newLine in fileLines)
            {
                bool foundMissingLine = false;
                foreach (var missingLine in missingLines)
                {
                    if (newLine.Contains(missingLine))
                    {
                        foundMissingLine = true;
                        break;
                    }
                }
                if (!foundMissingLine) newLines.Add(newLine);
            }

            newLines.Add("\n\n;Missing Symbols\n");

            foreach (var missingLine in missingLines)
            {
                newLines.Add(";" + missingLine);
            }


            File.WriteAllLines("newntcore.def", newLines);

            //return;
            */


            List<DataFile> files = new List<DataFile>();

            foreach (var file in Directory.GetFiles("ToGenerate"))
            {
                files.Add(new DataFile(file));
            }

            ExternalHeaderWriter.Write(files);
            InternalHeaderWriter.Write(files);
            SrcFileWriter.Write(files);
            DefFileWriter.Write(files);
            JavaClassGen.Write(files);
            JniGen.Write(files);

            CSharpClassGenerator.Write(files);
        }
    }
}
