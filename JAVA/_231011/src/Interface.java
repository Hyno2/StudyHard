// 인터페이스 : 추상클래스가 발전 된 것
// 다중 상속 (여러(상위) 클래스를 상속)
// 원칙적으로 자바에선 다중상속 지원하지 않는다
// => 인터페이스를 통해서 다중 상속을 지원
// => 추상 크래스보다 문법이 다소 깐깐하다.
// 선언방법은  interface 클래스명{멤버 선언..}

// 인터페이스 객체 생성 X
// 인터페이스를 상속받아서 다른 클래스에서 재정의/구체화를 진행
interface Animal1 {
    // 필드 : 상수의 형태로 선언 (변수 선언X)
    //        상수 -> 선언과 동시에 반드시 초기화 해줘야 하고 값변경이 불가능
    //         public static final 타입명 상수명 = 상수값;
    // 접근제어자가 반드시 public 이여야한다

    // 메소드 : 추상메소드로만 구성 해야 함

    // abstract 키워드가 생략
    // => 기본적으로 추상메소드로 취급해서 정의부 작성X
    public void print();

    abstract public void cry();
}

class Puppy implements Animal1 {
    @Override
    public void print() {
        System.out.println("강아지는");
    }

    @Override
    public void cry() {
        System.out.println("멍멍멍");
    }
}

public class Interface {
    public static void main(String[] args) {
        Puppy puppy =new Puppy();
        puppy.print();
        puppy.cry();

    }
}
