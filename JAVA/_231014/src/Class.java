// 클래스 구현
// class 클래스명{
// 멤버 선언
// - 필드 (멤버 변수): 특정 클래스에 있는 변수
// - 메소드(멤버 함수): 특정 클래스에 있는 함수
// - 생성자
// ...
// }

class Person{
    // 멤버 변수 선언부
    // 접근제어자 자료형 변수명
    private String name;
    private int age;
    private String gender;

    // 메소드 선언부
    // 접근제어자 반환형 (매개변수구성){
    // - 명령문들;
    // }

    // this 키워드 : 이객체
    //              멤버를 불러온 객체 자신을 가리키는 포인터 역활 수행
    // main 에서 lee.Print(); .> this lee 객체를 가리킨다

   //접근 제어자 : 멤버의 접근을 제어하는 문법
    // private : 자기 자신의 클래스에서만 접근O (외부 접근X)
    // public : 어디서든 자유롭게 접근O
    // protected :

// getter setter
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public int getAge() {
        return age;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public String getGender() {
        return gender;
    }
    public void setGender(String gender) {
        this.gender = gender;
    }
    // protected :
    public void Print(){
        System.out.println(this.name);
        System.out.println(this.age);
        System.out.println(this.gender);
    }
}

// 컴파일러가 main 함수를 찾을 때, public class 파일명 을 가장 먼저 찾음

public class Class {
    public static void main(String[] args) {
        // 객체 : 육안으로 확인되는 사물 실체 클래스를 통해 만들어진 실체
        //          같은 클래스를 통해 만들어진 인스턴스들을 포함하는개념
        // 클래스 : 객체를 찍어내는 틀
        // 인스턴스 : 클래스를 통해 만들어진 것
        //          각 인스턴스들은 같은 클래스를 통해 생성되었어도 각각이 다르다

        // 인스턴스 생성
        // 클래스명 인스턴스명 = new 클래스명();
       Person person = new Person(); // 객체 person 생성

       // 인스턴스 멤버 접근
       // - 인스턴스명.멤버명
       person.setName("이현오");
       person.setAge(32);
       person.setGender("남성");

       person.Print();
    }
}
