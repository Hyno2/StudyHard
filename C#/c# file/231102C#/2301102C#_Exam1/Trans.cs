using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _2301102C__Exam1
{
    public class Trans : IRiderble, IFlierble
    {
        public void fly()
        {
            MessageBox.Show("행복한 비행");
        }

        public void run()
        {
            MessageBox.Show("안전띠 매세요");
        }

        public void stop()
        {
            MessageBox.Show("뱅기 멈춰!");
        }
    }
}
