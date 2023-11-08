using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231108C__SingleTonePattern
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Class2._getinstance().name = "이현오";
            Class2._getinstance().num = 1;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Class2._getinstance().print(Class2._getinstance().name);
            Class2._getinstance().print("숫자: "+Class2._getinstance().num);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            
            Class2.getInstance.print(Class2.getInstance.name+ Class2.getInstance.num);
            Class2.getInstance.num++;
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
