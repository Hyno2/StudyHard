using System;
using System.Collections.Generic;
using System.Drawing.Drawing2D;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231101C__Exam1
{
    public class CircleButton : Button
    {
        protected override void OnPaint(PaintEventArgs pevent) // OnPaint는 Button안에있다
        {
            GraphicsPath g = new GraphicsPath();
            g.AddEllipse(0, 0, ClientSize.Width, ClientSize.Height);
            this.Region = new System.Drawing.Region(g);

            base.OnPaint(pevent);
        }
    }
}

