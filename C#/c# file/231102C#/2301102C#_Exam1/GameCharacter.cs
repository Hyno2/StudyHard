using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2301102C__Exam1
{
    public abstract class GameCharacter
    {
        public string id { get; set; }
        public int lv { get; set; }

        
        public abstract void fight(); // 오버라이딩 필수
        public virtual string die() // 오버라이딩이 가능함(필수 X)
        {
            return "으악";
        }
        // 오버라이딩 을 하고싶다면 virtual을 붙인다
        public string sayHello() // 오버라이딩 안됌
        {
            string introduce = "만나서 반갑습니다. 제 소개를 할게요";
            introduce += "Id = " + id + "\n";
            introduce += "Lv = " + lv + "\n";
            return introduce;
        }

    }
}
