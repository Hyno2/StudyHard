using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231108C__SingleTonePattern
{
    // Class1의 num속성에 이어 name 속성이 추가됨
    // ConsolePrint 라는 메소드 추가 됐고
    // print라는 메소드 오버라이드
    public class Class2 : Class1
    {
        public string name { get; set; } // 새로 추가 된 속성

        public void ConsolePrint(string msg)
        {
            Console.WriteLine(msg);
        }
        public override void print(string msg)
        {
            System.Windows.Forms.MessageBox.Show("Test" + msg);
        }

        // 싱글톤 : 인스턴스 하나만 만드는 것
        // 이유 : 특정 메소드 경우 오버라이드를 할수 있기때문ㅇ
        // 클래스 메소드의 경우 오버라이드가 안됨(상속 개념이 아니다)

        // 인스턴스 하나만 만드는 이유
        // 한 번만 호출한다든지 하나의 객체를 가지고 호출할 만한 것들은
        // 굳이 인스턴스를 여러개 만들 필요없다

        private static Class2 _instance = null;

        private Class2() // 생성자가 private이라 그냥 만들지는 못 함
        { }

        // C# STYLE~
        // public int n{get; set}의 get을 이용한 것
        public static Class2 getInstance // 변수 형태 + get을 쓰고있음
        {
            get
            {
                if (_instance == null)
                {
                    _instance = new Class2();
                }
                return _instance;
            }
        }



        // JAVA STYLE~
        public static Class2 _getinstance()
        {
            if (_instance == null)
            {
                _instance = new Class2();
            }
            return _instance;
        }
    }
}
