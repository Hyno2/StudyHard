using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231030HelloC_3_WinForm_Class
{
    public class Animal
    {   // get set 
        // 1번째 방법
        public string Name { get; set; }
        public int age { get; set; }
        
        // 2번째 방법
        private int id;
        public int Id { get { return id; } set { id = value; } }

        // 3번째 방법
        private string species
        { get => species; set => species = value; }

        // java방법
        private string masterName;
        public string getMasterName()
        {
           return masterName;
        }
        //public string setMasterName(string masterName)
        //{
        //    this.masterName = masterName;
        //}
    }
}
