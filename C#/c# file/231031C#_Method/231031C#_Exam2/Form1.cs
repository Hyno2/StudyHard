using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231031C__Exam2
{
    public partial class Form1 : Form
    {// 숫자맞추기 게임 타이머추가 Label에 Timeover 띄우기

        // 정답
        int num;

        // 남은시간
        int timeLeft = 10;
        public Form1()
        {
            InitializeComponent();
            num = new Random().Next(1, 11);
          Console.WriteLine("정답은: " + num);

        }

        private void button1_Click(object sender, EventArgs e)
        {
            int mynum = int.Parse(textBox1.Text);
             
             if (mynum == num)
            {
                MessageBox.Show("정답입니다");
            }
            else if (mynum > num)
            {
                MessageBox.Show("정답보다 큰수 입력했습니다!");
            }
            else if(mynum < num)
            {
                MessageBox.Show("정답보다 작은 수 입력했습니다!");
            }
            

        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            if(timeLeft > 0)
            {
                label2.Text = timeLeft.ToString();
                timeLeft--;
            }
            else
            {
                label2.Text = "Time Over";
                label2.Visible = true;
            }
            
        }
    }
}
