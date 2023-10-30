using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231030HelloC_3_WinForm_Class
{
    public class GameCharacter
    {
        public string Id {  get; set; }
        public static int theNumberOfUser = 0;
        public GameCharacter() 
        {
            theNumberOfUser++;
        }
        //오버라이딩
        public GameCharacter(string id)
        {
            this.Id = id;
            theNumberOfUser++;
        }
    }
}
