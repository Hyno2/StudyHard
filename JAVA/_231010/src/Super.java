import java.util.Scanner;

class Computer {
    private String name;    // 기종
    private String company; // 제조 회사

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getCompany() {
        return company;
    }

    public void setCompany(String company) {
        this.company = company;
    }

    // 생성자 선언
    public Computer(String n, String c) {
        System.out.println("Computer 생성자 실행");
        this.name = n;
        this.company = c;
    }

    public void print() {
        System.out.println("기종: " + this.name);
        System.out.println("제조 회사: " + this.company);
    }
}

// 하위 클래스에서 객체 생성 시
// 상위 클래스의 생성자를 우선 실행 한 뒤 하위 클래스 생성자를 실행 한다
class NoteBook extends Computer {
    private double weight; // 무게
    private int angle; // 꺾이는 각도

    // 생성자 선언 -> 상위 클래스를 필수로 불러와야함
    // super() : 상위 클래스의 생성자 호출
    public NoteBook(String n, String c, double w, int a) {
        super(n, c);    // 매개변수 n과 c의 정보를 전송하면서,
        // Computer(String n, String c)이 수행 되고 있다
        System.out.println("NoteBook 생성자 실행");
        this.weight = w;
        this.angle = a;
    }

    // this. : 이 객체
    // super.[상위클래스 멤버명] : 이 객체의 상위 클래스 멤버 접근
    public void print() {
        super.print();
        System.out.println("무게: " + this.weight + "kg");
        System.out.println("각도: " + this.angle + "도");
    }
}

public class Super {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Computer computer = new Computer(scanner.nextLine(), scanner.nextLine());
        computer.print();
        NoteBook noteBook = new NoteBook(scanner.nextLine(), scanner.nextLine(),
                scanner.nextDouble(), scanner.nextInt());
        noteBook.print();

    }
}
