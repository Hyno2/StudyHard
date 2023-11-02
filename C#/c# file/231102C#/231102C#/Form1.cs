using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231102C_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            // 사번이 문자열일 경우 01 같은 숫자를 넣엇을때 01 출력되고
            Sawon<string> dj = new Sawon<string>();
            dj.number = textBox1.Text;
            label1.Text = "사번은" + dj.number + "입니다.";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            // 사번이 숫자일 경우 01같은 숫자를 넣으면 1로 나온다
            // 하지만 산술 연산이 필요한경우에는 정수형이 필요하다
            Sawon<int> ho = new Sawon<int>();
            int.TryParse(textBox2.Text, out int num); // 사번이 숫자라서 예외처리도 해줘야한다
            ho.number = num;
            label2.Text = "사번은" + ho.number + "입니다.";
        }

        // 비행기를 움직이는 메소드
        // 실행이되면서 out 키워드가 붙은건
        // 함수 밖에 있는 변수 인데 그것의 값이 바뀐다
        // 마치 C언어의 포인터랑 C#의 ref랑 마찬가지로 말이다
        // ref: 참조자, 함수에서 값이바뀌면 밖에서도 바뀜 대입문 필요없음
        // out: 참조자, 함수에서 값이바뀌면 밖에서도 바뀌지만 반드시 대입문이 필요하다
        // 즉 여기선 rx=0; ry=0; 이라도 넣어줘야한다

        void nextPosition(int x, int y, int vx, int vy, out int rx, out int ry)
        {
            // 대입문
            // 다음 위치 = 현재위치 + 현재속도
            rx = x + vx;
            ry = y + vy;
        }


        private void button3_Click(object sender, EventArgs e)
        {
            int x = 0;
            int y = 0;
            // Environment.NewLine 은 = "\n"이랑 같다
            string nowPos = $"현재위치: ({x},{y})" + Environment.NewLine;
            int movePos = int.Parse(textBox3.Text); // 몇칸 이동할건지
            nextPosition(x, y, movePos + 10, movePos + 20, out x, out y);
            nowPos += $"이동 후 위치: ({x},{y})" + Environment.NewLine;
            label3.Text = nowPos;


        }

        List<Product> products = new List<Product>();
        // 제품 추가 및 출력 버튼
        private void button4_Click(object sender, EventArgs e)
        {
            products.Add(new Product() { name = textBox4.Text }); // 제품명
            products.Last().price = int.Parse(textBox5.Text); // 가격


            string prices = "";
            foreach (var item in products)
            {
                prices += item + "\n";

            }
            label4.Text = prices;
        }

        // 제품을 가격순으로 출력할 버튼
        private void button5_Click(object sender, EventArgs e)
        {
            label4.Text = "";
            // 정렬(Sort)
            products.Sort(); // 가격순으로 정렬하는 sort
            foreach (var item in products)
            {
                label4.Text += item + "\n";
            }

            // 인터페이스도 다형성 적용
            // 추상클래스와 마찬가지로 단독으로 인스턴스 생성불가
            IComparable<Product> i = new Product();

        }


    }
}
