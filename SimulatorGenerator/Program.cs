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

            List<DataFile> files = new List<DataFile>();

            foreach (var file in Directory.GetFiles("ToGenerate"))
            {
                files.Add(new DataFile(file));
            }

            ExternalHeaderWriter.Write(files);
            InternalHeaderWriter.Write(files);
            SrcFileWriter.Write(files);
            DefFileWriter.Write(files);
        }
    }
}
