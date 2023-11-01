using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231101C_
{
    public abstract class Cat : Animal // Animal을 상속받는다
    {
        public Cat() { born(); }
        public void meow()
        {
            Console.WriteLine("야옹");
        }

        public void brushHair()
        {
            Console.WriteLine("털정리중");
        }

        

        public override void wash()
        {
            base.wash(); // Animal에 있는 wash를 그대로 호출한다
            Console.WriteLine("물을 싫어해서 씻기기 힘들다.");
        }
    }

}
