using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231101C__Exam1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            // 추상클래스의 특징
            // 불완전하므로 단독으로 인스턴스 만들수없다
            // ex Animal a = new Animal(); 불가능

            Lion l = new Lion();

            // 다형성에 의해서 왼쪽 추상 클래스
            // 오른쪽은 그걸 상속받는다
            Animal a = new Lion();
            Cat c = new Lion();

            l.sleep();
            l.eat();
            l.grooming();
            l.hunt();
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Tiger t = new Tiger();
            t.name = "춘식이";
            t.age = 5;
            t.sleep();
            t.eat();
            t.grooming();
            t.hunt();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            DomesticCat d = new DomesticCat();
            d.masterName = "이현오";
            d.name = "오레오";
            d.age = 5;
            d.sleep();
            d.eat();
            d.grooming();
            d.hunt();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            KoreanShortHairCat k = new KoreanShortHairCat();
            k.masterName = "집사";
            k.name = "깜둥이";
            k.age = 5;
            k.sleep();
            k.eat();
            k.grooming();
            k.hunt();
            
        }

        private void button5_Click(object sender, EventArgs e)
        {
            MyForm m = new MyForm();
            m.ShowDialog(); //모달(Modal)
            //MessageBox : 모달에 속함
            MessageBox.Show("Test");
        }

        private void circleButton1_Click(object sender, EventArgs e)
        {
            MyForm m = new MyForm();
            m.Show(); //모달리스(Modaless)
            MessageBox.Show("Test");
        }
    }
}
