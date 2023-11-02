using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2301102C__Exam1
{
    public class UniCorn : GameCharacter, IRiderble, IFlierble
    {

        public override void fight()
        {
            System.Windows.Forms.MessageBox.Show("말발굽으로 때린다");
        }
        public void fly()
        {
            System.Windows.Forms.MessageBox.Show("말처럼 울면서 새처럼 난다");
        }

        public void run()
        {
            System.Windows.Forms.MessageBox.Show("말처럼 달린다");
        }

        public void stop()
        {
            System.Windows.Forms.MessageBox.Show("말처럼 멈춘다");
        }
    }
}
