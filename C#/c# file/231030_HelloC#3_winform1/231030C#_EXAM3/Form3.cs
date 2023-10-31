using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
// 가위바위보 랜덤으로
namespace _231030C__EXAM3
{
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
            button1.Text = "가위";
            button2.Text = "바위";
            button3.Text = "보";
            
            
        }
        // 유저가 가위일때
        private void button1_Click(object sender, EventArgs e)
        {
            // 정답 컴퓨터는 랜덤값으로 정한다
            int com = new Random().Next(3); // 0, 1 , 2로 나온다
            // 0 = 가위
            // 1 = 바위
            // 2 = 보
            if(com == 0)
            {
                MessageBox.Show("무승부");
            }
            else if(com == 1){
                MessageBox.Show("유저 패배. 컴퓨터 승");
            }
            else
            {
                MessageBox.Show("유저승리. 컴퓨터 패배");
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int com = new Random().Next(3); // 0, 1 , 2로 나온다
            // 0 = 가위
            // 1 = 바위
            // 2 = 보
            if (com == 0)
            {
                MessageBox.Show("유저승리. 컴퓨터 패배");
            }
            else if (com == 1)
            {
                MessageBox.Show("무승부");
            }
            else
            {
                MessageBox.Show("유저 패배. 컴퓨터 승");
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int com = new Random().Next(3); // 0, 1 , 2로 나온다
            // 0 = 가위
            // 1 = 바위
            // 2 = 보
            if (com == 0)
            {
                MessageBox.Show("유저 패배. 컴퓨터 승");
            }
            else if (com == 1)
            {
                MessageBox.Show("유저승리. 컴퓨터 패배");
            }
            else
            {
                MessageBox.Show("무승부");
            }
        }
    }
}
