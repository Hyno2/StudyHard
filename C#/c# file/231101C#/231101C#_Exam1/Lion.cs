using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231101C__Exam1
{
    public class Lion : Cat
    {
        // 나이랑 이름 정보가 있고
        // 먹고 자고 털정리하고 사냥하는 기능이 있는 객체
        public override void eat()
        {
            Console.WriteLine("사자가 먹는다");
        }

        public override void grooming()
        {
            Console.WriteLine("사자가 털정리중");
        }

        public override void hunt()
        {
            Console.WriteLine("사자가 사냥중입니다");
        }

        public override void sleep()
        {
            Console.WriteLine("사자가 잠들었다");
        }
    }
}
