// 추상 클래스 : "추상적인" = 구체적이지 않다
//              정의가 덜 된 클래스
//              abstract class 키워드 사용해서 구현
//              추상 메소드를 하나 이상을 가지고 있어야 한다.

abstract class Shape{ // 도형 추상 클래스
    // 추상 메소드 : 정의가 덜 된 메소드
    //              abstract 키워드 사용해서 구현
    //              함수의 선언부만 남고, 정의부는 없는 형태

//    // 추상 클래스에선 기본 생성자가 존재하지 않는다.
//    public Shape() {      X
//    }                     X

    abstract public void whatShape();
}

// 추상 클래스 응용법 -> 하위 클래스를 통해 "구체화" 시킨다 (오버라이딩)
class Circle extends Shape{
    // 추상 클래스 Shape 상속 -> 추상 메소드 whatShape() 반드시 구현해야함
    @Override
    public void whatShape(){
        // 상위의 멤버인 추상메소드 whatShape() 구체화
        System.out.println("해당 객체는 원 입니다.");
    }
}
class Rectangle extends Shape{
    @Override
    public void whatShape(){
    // 상위의 멤버인 추상메소드 whatShape() 구체화
        System.out.println("해당 객체는 사각형 입니다.");

    }
}
public class Abstract {
    public static void main(String[] args) {
        // 에러 O 추상클래스로 객체 생성 X
        //Shape s = new Shape();
        //에러 x 들다 추상클래스는 아니기 때매 객체 생성 무리없음
        Circle c = new Circle();
        Rectangle r = new Rectangle();

        c.whatShape();
        r.whatShape();
    }

}
