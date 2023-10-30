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

namespace _231030_HelloC_3_winform1
{
    public partial class Form1 : Form
    {
        // Student class의 name과 같은 속성에 해당함
        string randomText = "안녕하세요? 이현오입니다. 하이";

        // List <- 클래스임
        // Java의 ArrayList랑 사실상 똑같다
        List<string> namelist = new List<string> { "이동준", "이유나" };
        List<int> agelist = new List<int> {3,4,5,6};
        List<int> age2list = new List<int>();

        // 참고 C#에 있는 ArrayList는
        // 자바의 ArrayList<Object>랑 동알히다
        // 즉 아무거나 다 들어가는 리스트이다
        ArrayList tmiList = new ArrayList();
        public Form1() //생성자
        {
            InitializeComponent();
            Button b = new Button();
            b.Text = "코드로 만든 버튼";
            b.AutoSize = true;
            b.Location = new System.Drawing.Point(10, 10);
            // Controls : Form1안에 있는 모든 구성요소들(Button들 등등)
            Controls.Add(b);   //Add 코드가 없으면 b는 화면에 보이지않는다
        }

        // btn_test 클릭시 수행할 함수
        private void btn_test_Click(object sender, EventArgs e)
        {
            
            Random r = new Random();

            // 필드의 randomText를 랜덤으로 출력하게하는것
            // 이 두코드는 똑같다 char을 string으로 변환한것
            //checkBox2.Text = randomText[r.Next(randomText.Length)].ToString();
            //checkBox2.Text = randomText[r.Next(randomText.Length)]+"";

            if (this.checkBox1.Checked == true)
            {
                this.checkBox1.Text += "!";
            }
            
        }

     
    }
}
