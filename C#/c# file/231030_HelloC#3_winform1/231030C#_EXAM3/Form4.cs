using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
// List로 임의 문장 생성후  Random으로 임의 문장 출력하게하기
namespace _231030C__EXAM3
{
    public partial class Form4 : Form
    {
        List<string>texts = new List<string>();
        public Form4()
        {
            InitializeComponent();
            //초기화
            label1.Text = "";
            
            texts.Add("안녕하세요");
            texts.Add("안녕히가세요");
            texts.Add("반값습니다");
            texts.Add("어서오세요");
            texts.Add("잘 부탁드립니다");

        }

        private void Form4_Load(object sender, EventArgs e)
        {
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Text = "";
            label1.Text = texts[new Random().Next(texts.Count)];
        }
    }
}
