using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _2301102C__Exam1
{
    public class Dragon : GameCharacter, IFlierble, IRiderble
    {
        public override void fight()
        {
            MessageBox.Show("용이 싸운다");
        }
        public void fly()
        {
            MessageBox.Show("마나를 이용해 뜹니다");
        }

        public void run()
        {
            return; // 달리지않는다
        }

        public void stop()
        {
            MessageBox.Show("조용히 멈춥니다");
        }
    }
}
