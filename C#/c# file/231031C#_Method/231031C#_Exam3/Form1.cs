using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231031C__Exam3
{
    // 타이머추가하여 지뢰(보물) 찾기 게임 만들기 특정버튼 눌러야 게임승리
    public partial class Form1 : Form
    {
        // 남은 시간
        int timeLeft = 5;
        // 정답
        int answer;
        public Form1()
        {
            InitializeComponent();
            
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (timeLeft > 0)
            {
                label2.Text = timeLeft.ToString();
                timeLeft--;
            }
            else if (timeLeft == 0)
            {
                label2.Text= "Time Over";
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            winCheck();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            winCheck();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            winCheck();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            winCheck();
        }

        private void winCheck()
        {
            int answer = new Random().Next(0, 2);
            // 승리조건
        if (answer ==1 && timeLeft >0) {
                MessageBox.Show("맞았습니다");
            }
        else
            {
                MessageBox.Show("틀렸습니다");
                answer = new Random().Next(0, 2);
            }
        }
    }
}
