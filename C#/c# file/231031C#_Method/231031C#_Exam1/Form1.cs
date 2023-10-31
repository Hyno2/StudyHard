using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231031C__Exam1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            // 코드상에서 버튼 생성후
            // 그 버튼에 이벤트까지 추가해보기
            Button b = new Button();
            b.Location = new Point(200, 200);
            b.Text = "OK";
            b.Click += B_Click; // 클릭 이벤트 추가
            Controls.Add(b);

            // 기존에 있는 버튼에 새로운 이벤트도 추가해보기
            button1.Click += B_Click;

        }


        private void B_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Test: " + fibonacci(10));
        }

        // int 4byte
        // long 8byte
        // 피보나치 수열 Dictionary 사용
        Dictionary<int,long> memo = new Dictionary<int,long>();
        long fibonacci(int num)
        {
            if(num<=0)
            {
                return 0;
            }
            if(num == 1)
            {
                return 1;
            }

            if(memo.ContainsKey(num))
            {
                return memo[num];
            }
            else
            {
               long answer = fibonacci(num-2) + fibonacci(num-1);
                memo[num] = answer; 
                return memo[num];
            }

        }

        private void button1_Click(object sender, EventArgs e)
        {
            // 공백이있으면 오류난다
            //int num = int.Parse(textBox1.Text);

            // 공백이있어도 오류안나게 하려면
            // num이라는 변수가 선언이 되고 거기에 textBox1의 글자가 숫자로
            // 변환이 되어 들어가고 잘못된 값이 들어갈 경우 num =0이 된다
            int.TryParse(textBox1.Text, out int num);

            // vs 2015까지는 int.TryParse 할때
            // out int num이 안되고 int num으로 먼저 변수 선언후
            // out num 했어야했다
            int num2; // 2017 이전 버전 방법
            int.TryParse(textBox1.Text,out num2);

            label1.Text = fibonacci(num) + "";
        }

        // Enable = true 상태에서 Interval에 적힌 ms만큼 반복
        private void timer1_Tick(object sender, EventArgs e)
        {
            label2.Text = DateTime.Now.ToString("yyyy년MM월dd일 HH시mm분ss초");
        }
    }
}
