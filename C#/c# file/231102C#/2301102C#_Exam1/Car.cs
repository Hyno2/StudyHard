using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _2301102C__Exam1
{
    public class Car : IRiderble
    {
        public void run()
        {
           MessageBox.Show("부릉부룽");
        }

        public void stop()
        {
            MessageBox.Show("끼이익");
        }
    }
}
