// 클래스 : 인스턴스를 "생성"하는틀
class Teacher {
    private String name;
    private String num;
    private int age;

    public Teacher() {
        this.name = "null";
        this.num = "null";
        this.age = 0;
    }

    public void print() {
        System.out.println("이름: " + this.name);
        System.out.println("사원번호: " + this.num);
        System.out.println("나이: " + this.age);
    }
    // "생성"자 : 객체를 생성하는 메소드 (메소드 중 일부)
    // 생성자도 메소드의 일부니 오버로딩가능
    // 생성자 형태
//    public 클래스명(파라메터구성, ...) {
//        객체 생성시 수행할 명령문
//    }

    //public Teacher(){ // 기본생성자
    // 매개변수가X, 수행할 명령문X
    // 사용자가 별도로 생성자를 만들지 않았을 때, default로 호출
    //}
}

public class Constructor {
    public static void main(String[] args) {
        Teacher teacher = new Teacher();
        teacher.print();


    }
}
