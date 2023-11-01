using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231101C_
{
    public abstract class Animal
    {
        public int age { get; set; }
        public static int count = 0;
        
        protected void born()   // protected 이니 Animal을 상속받은 객체만 호출해서 사용가능
        {
            Console.WriteLine("응애");
        }
        
        public void sleep()
        {
            Console.WriteLine("잠을잔다.");
        }
        public void eat()
        {
            Console.WriteLine("먹는다.");
        }

        // 하위 클래스에서 오버라이드를 할 메서드라면
        // virtual이라는 키워드를 써야한다
       public virtual void wash()
        {
            Console.WriteLine("동물을 씻깁니다.");
        }
    }
}
