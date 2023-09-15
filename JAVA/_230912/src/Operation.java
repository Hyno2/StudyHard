// 자바에서는 하나의 클래스만 상속 받을 수 있다.
// 인터페이스 가면 다중 상속을 받을 수 있다
import com.kb.BusinessMan;

public class Operation {    // 패키지
    public static void main(String[] args) {    // static은 웬만 해서 쓰지말고 그나마 메소드에 쓰는게 낫다 전역으로 사용하는 것

        // 객체를 생성 해서 작동 하기에 객체 지향형 언어 이다
        //클래스 객체명 = 새로운 객체 생성(다른 클래스 call)
        // Man man = new BusinessMan();으로 사용가능하다
        // 상위클래스 객체명 = 새로 생성 하위클래스  상위 클래스의 객체를 생성할때 하위클래스를 사용해 초기화 가능하다
        BusinessMan businessMan = new BusinessMan("경북","학생","이현오");

        // 객체가 가지고 있는 메소드 호출
        businessMan.tellYourInfo(); //
    }
}
