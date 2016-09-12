using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimulatorGenerator
{
    struct Variable
    {
        public string RetType { get; set; }
        public string Name { get; set; }
        public bool In { get; set; }
        public string DefaultValue { get; set; }
    }


    class DataFile
    {
        public string Base { get; private set; }
        public string Name { get; private set; }
        public string NumInstances { get; private set; }

        public List<Variable> Variables { get; } = new List<Variable>();

        public DataFile(string fileName)
        {
            string[] data = File.ReadAllLines(fileName);
            Base = data[1].Trim();
            Name = data[0].Trim();
            NumInstances = data[2].Trim();

            for (int i = 3; i < data.Length; i++)
            {
                if (string.IsNullOrWhiteSpace(data[i])) break;
                string[] split = data[i].Split(' ');
                Variable v = new Variable();
                v.RetType = split[0].Trim();
                v.Name = split[1].Trim();
                v.In = split[2] == "in";
                v.DefaultValue = split[3];
                Variables.Add(v);
            }
        }
    }
}
