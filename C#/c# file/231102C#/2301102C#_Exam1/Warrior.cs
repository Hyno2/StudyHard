using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _2301102C__Exam1
{
    public class Warrior : GameCharacter
    {
        
        public override void fight()
        {
          MessageBox.Show("주먹으로 떄려요");
        }
    }
}
