import java.util.Scanner;

class Student {
    private String name;
    private String num;
    private int age;

    public void print(String n, String num, int a) {
        this.name = n;
        this.num = num;
        this.age = a;

        System.out.println("이름: " + this.name);
        System.out.println("학번: " + this.num);
        System.out.println("나이: " + this.age);
    }
}

public class ObjectArray {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // 객체 배열
        // 배열 선언(크기 지정/할당) -> 객체 선언(공간 자세히 나눔)

        // 1. 배열 선언
        // 자료형 배열명[] = new 자료형[배열크기] ;
        Student s[] = new Student[3]; // 3개의 객체를 담을 수 있다

        // 2. 객체 선언
        //  인스턴스명 = new 클래스명();
        for (int i = 0; i < 3; i++) {
            s[i] = new Student();
        }

        for (int i = 0; i < 3; i++){
            String n = scanner.next();
            String num = scanner.next();
            int a = scanner.nextInt();

            s[i].print(n,num,a);
        }

    }
}
