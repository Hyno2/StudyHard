using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231101C__Exam1
{
    public abstract class Animal
    {
        public string name { get; set; }
        public int age { get; set; }

        // 메소드의 구현은 하위클래스에게 맡긴다
        // 즉 하위클래스는 의무적으로 오버라이딩해야한다
        public abstract void sleep();
        public abstract void eat();
    }
}
