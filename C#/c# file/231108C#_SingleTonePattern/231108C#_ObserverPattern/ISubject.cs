using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231108C__ObserverPattern
{
    // 관찰자들을 관리하는 클래스용 인터페이스
    // 등록, 삭제, 일괄통지
    // 일괄통지 = 특정 메소드를 일괄적으로 다 호출하는 것
    public interface ISubject
    {
        void register(IObserver o); // 객체 등록
        void unregister(IObserver o); // 객체 삭제
        void notify(string msg); // 일괄 전달(한꺼번에 호출)
        

    }
}
