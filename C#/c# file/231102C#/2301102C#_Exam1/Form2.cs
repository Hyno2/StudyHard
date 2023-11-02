using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _2301102C__Exam1
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }
        // 생성자 오버로딩
        public Form2(string msg)
        {
            InitializeComponent();
            label1.Text = msg;
        }
    }
}
