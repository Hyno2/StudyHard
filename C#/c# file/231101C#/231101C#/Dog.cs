using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231101C_
{
    public abstract class Dog : Animal
    {
        public string color { get; set; }


        public Dog() { born(); }

        public override void wash()
        {
            base.wash();
            Console.WriteLine("즐거워합니다.");
        }
        public void bark()
        {
            Console.WriteLine("멍멍");
        }
    }
}
