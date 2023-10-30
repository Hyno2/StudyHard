using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
// 랜덤 숫자 맞추기
namespace _231030C__EXAM3
{
    public partial class Form2 : Form
    {
        // 정답을 의미하는 number
        int number;
        public Form2()
        {
            InitializeComponent();
            // Random r = new Random();
            // number = r.Next(1,11); 
            // 위의 것이랑 같음
            number = new Random().Next(1,11);
            Console.WriteLine(number);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int myNum = int.Parse(textBox1.Text);
            if(number < myNum)
            {
                MessageBox.Show("정답 보다 더 큰 값을 골랐습니다.");
            }
            else if( number > myNum) {
                MessageBox.Show("정답 보다 더 작은 값을 골랐습니다.");
            }
            else
            {
                MessageBox.Show("정답");
                // 정답 맞춘후 바로 랜덤 값 새로 만들기
                number = new Random().Next(1,11);
                Console.WriteLine(number);
            }
            
        }
    }
}
