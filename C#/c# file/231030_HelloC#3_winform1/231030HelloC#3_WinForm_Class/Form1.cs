using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231030HelloC_3_WinForm_Class
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            //인스턴스에 값을 넣는 방법
            // 첫번째 방법 = 직접 대입
            InitializeComponent();
            Product.companyName = "경북산업마트";
            Product p1 = new Product();
            p1.name = "마이크";
            p1.price = 90000;
            Product p2 = new Product();
            p2.name = "새콤달콤";
            p2.price = 500;
            Product p3 = new Product();
            p3.name = "새콤달콤";
            p3.price = 500;

            // 두번째 방법 = 선언과 동시에 값을 대입(생성자랑 관계없음)
            Product p4 = new Product() { name = "바디워시", price = 50000 };

            // 세번째 방법 = 생성자를 활용하는 방법(자바랑 동일함
            Student s1 = new Student(1, "이현오");
            
            // 그냥 f5로 실행해 출력부분을 보거나
            // 옵션을 건드려서 콘솔창이 나오게 하면 됨
            Console.WriteLine(p2 == p3); // ctrl f5 하면 출력안됨
            MessageBox.Show("Test"+(p2==p3)); // 메모리 위치 비교

            //Animal a = new Animal();
            //a.setMasterName("이현오");
            //Console.WriteLine(a.getMasterName());
            ////a.species = "개"; // "개" = value
            //Console.WriteLine(a.Id); // get으로 id를 리턴
            //a.Name = "구구";
            //a.age = 10;

            GameCharacter g1 = new GameCharacter();
            g1.Id = "핑크퐁퐁";
            GameCharacter g2 = new GameCharacter("레드");

            MessageBox.Show("캐릭터는" + GameCharacter.theNumberOfUser + "명");

            List<GameCharacter> list = new List<GameCharacter>();
            list.Add(g1);
            list.Add(g2);

            int i = 1;
            foreach (var item in list)
            {
                Label label = new Label();
                label.Text = item.Id;
                label.Location = new Point(10, 10 + (100 * i));
                i++;
                Controls.Add(label);

            }
            


        }
    }
}
