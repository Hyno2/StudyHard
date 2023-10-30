using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231030C__EXAM3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            List<Student> students = new List<Student>();
            students.Add(new Student() { name = "이현오", grade = 1 });
            students.Add(new Student() { name = "이혀노", grade = 2 });
            students.Add(new Student() { name = "이오현", grade = 3 });
            students.Add(new Student() { name = "현오이", grade = 4 });
            students.Add(new Student() { name = "현현이", grade = 1 });
            students.Add(new Student() { name = "이이이", grade = 2 });

            for (int i = 0; i < students.Count; i++)
            {
                Label label = new Label();
                label.Text = $"{students[i].grade}학년{students[i].name}학생";
                label.AutoSize = true;  // 글자 길이도 늘어남
                label.Location = new System.Drawing.Point(130, 13 + (23 + 3) * i);
                Controls.Add(label);

            }
            // 무언가를 삭제할땐 역for문을 사용해야한다
            // 그래야 IndexBoundError나 IndexOverFlow에러가 나지 않는다.
            // 역 for문
            for (int i = students.Count - 1; i >= 0; i--)
            {
                if (students[i].grade > 1)// 학년이 2학년 이상일 경우
                {
                    students.RemoveAt(i); //i번째 지워라
                }
            }
            for (int i = 0; i < students.Count; i++)
            {
                Label label = new Label();
                label.Text = $"{students[i].grade}학년{students[i].name}학생";
                label.AutoSize = true;
                label.Location = new System.Drawing.Point(330, 10 + 25 * i);
                Controls.Add(label);
            }   
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Hide(); // 앞의 폼숨김
            new Form2().ShowDialog();
            Show(); // 뒤의 폼보여줌
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Hide(); // 앞의 폼숨김
            new Form3().ShowDialog();
            Show(); // 뒤의 폼보여줌
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Hide(); // 앞의 폼숨김
            new Form4().ShowDialog();
            Show(); // 뒤의 폼보여줌
        }
    }
}
