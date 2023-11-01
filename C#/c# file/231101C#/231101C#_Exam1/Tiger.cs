using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231101C__Exam1
{
    public class Tiger : Cat
    {
        public override void eat()
        {
            Console.WriteLine("호랑이가 사냥");
        }

        public override void grooming()
        {
            Console.WriteLine("호랑이가 털정리중");
        }

        public override void hunt()
        {
            Console.WriteLine("호랑이가 사낭중");
        }

        public override void sleep()
        {
            Console.WriteLine("호랑이의 이름: "+ name);
            Console.WriteLine("호랑이가 자는중");
            Console.WriteLine(age+"살 답게 잘 잡니다.");
        }
    }
}
