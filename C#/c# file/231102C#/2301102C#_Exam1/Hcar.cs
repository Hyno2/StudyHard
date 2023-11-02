using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2301102C__Exam1
{
    public class Hcar : IConveyancable
    {
        private string brandName;
        public string name { get =>  brandName;  set => brandName = value;} // get return name set brandname = value; 랑같은의미
        public void fly()
        {
            
        }

        public void run()
        {
            
        }

        public void stop()
        {
            
        }
    }
}
