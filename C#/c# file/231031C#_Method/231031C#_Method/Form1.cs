using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231031C__Method
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            Product p = new Product();
            p.price = 0;
            // p.name = ??? private이라 불가능

            // HashMap 사용하는것  Dictionary<K,V>
           Dictionary<string,string> student = new Dictionary<string, string>();
            student["학번"] = "20110911";
            student["이름"] = "이현오";
            student["성별"] = "남성";
            student["탈모여부"] = "o";
            MessageBox.Show(student["학번"]);
            MessageBox.Show(student.ContainsKey("결혼여부")+"");
            MessageBox.Show(student.ContainsKey("탈모여부")+"");

            // List같은 경우 "인덱스"가 존재한다
            // 따지고보면 키가 숫자인 Dictionary라고 볼수있다
            List<string> n = new List<string>();
            n.Add("이현오");
            n.Add("장광수");
            n.Add("이동준");


            // ArrayList같은 경우 인덱스가 존재한다
            //다만 안에 들어가는 데이터의 타입을 제한하지않는다
            ArrayList obj = new ArrayList();
            obj.Add("유지웅");
            obj.Add(100);
            obj.Add(3.14);
            obj.Add(new Product());

            MessageBox.Show(obj[0]+"");
            MessageBox.Show(obj[1]+"");
            MessageBox.Show(obj[2]+"");

        }
        
        void change(int num)
        {
            // a값을 복사만 해왔을뿐
            // a와는 위치도 다르고 별개의 존재이다
            num = 1000;
        }

        
        void change(Product p)
        {
            p.price = 0;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int a = 10;
            int b = a;
            b = 200;
            // b가 값이 바뀌었다고 해서 a의 값이 바뀌지는 않는다
            label1.Text = "a = " + 10 + Environment.NewLine;
            label1.Text += "b = " + b + Environment.NewLine;
            change(a); // 이 메소드는 a의 값을 복사만 한 것. 원본이랑 관계없다
            label1.Text += "a = " + a + Environment.NewLine;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Product p = new Product();
            p.price = 100;
            // p2 에서도 p를 가르키기에 값 변경 된다
            Product p2 =p;
            p2.price = 999;
            label2.Text = "p의 price : " + p.price + "\n";
            // change 메서드에서 p.price 또한 같은곳을 가르키기에 값 변경이 된다
            change(p);
            label2.Text += "p의 price : " + p.price + "\n";
        }
        // ref 키워드 = 참조자
        // 해당 변수의 값뿐 만아니라 그 변수의 위치도 같이 가져오는 것
        // 따라서 swap에서 값이 바뀌면 swap밖에있는 원본의 값이 변경된다
        void swap(ref int a, ref int b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        private void button_Swap_Click(object sender, EventArgs e)
        {
            int a = int.Parse(textBox_1.Text); // 3
            int b = int.Parse(textBox_2.Text); // 5
            MessageBox.Show($"a = {a} b = {b}");
            swap(ref a, ref b);
            label_1.Text = a + ""; // 5
            label_2.Text = b + ""; // 3

        }
    }
}
