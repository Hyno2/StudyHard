using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231030HelloC_3_WinForm_Class
{
    public class Student
    {
        public int Id;
        public string Name;
        // 이렇게 매개변수가 있는 생성자를 만들면
        // 매개변수가 없는 생성자는 자연스럽게 사라짐
        // 원래는 기본생성자가 자동으로 들어갔었다
        public Student(int id, string name)
        {
            this.Id = id;
            this.Name = name;
        }
    }
}
