using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231108C__ObserverPattern
{
    // 옵저버 = 관찰자
    // 이 인터페이스를 구현한 클래스들은 모두
    // update라는 메소드를 갖고있고, 이것을 호출 할 수있다.
    public interface IObserver
    {
        void update(string value);
    }
}
