using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231108C__ObserverPattern
{
    // Form2는 Form을 상속받고  IObserver을 구현한 클래스 중 하나
    public partial class Form2 : Form, IObserver
    {
        public Form2()
        {
            InitializeComponent();
        }

        // Form2를 생성할 때 매개변수로
        // ISubject 인터페이스를 구현한 클래스를 매개변수로 받음
        public Form2(ISubject sub)
        {
            InitializeComponent();
            sub.register(this); // 안에 있는 register을 호출함
            // this = Form2 자기자신을 의미함
        }
        public void update(string value)
        {
           label1.Text = value;
        }
    }
}
