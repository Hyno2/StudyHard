using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2301102C__Exam1
{
    // 탈것
    // 1. 인터페이스는 상속을 받으수 있다.
    // => IConveayncable 이거만 있으면 3개의 메서드를 구현해야한다
    // 2. 속성도 추가가 가능하다 (자바 인터페이스는 상수가아닌이상 속성 추가 불가)
    public interface IConveyancable : IRiderble, IFlierble 
    {
        string brandName { get; set; }
    }
}
