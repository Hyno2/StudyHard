// 예제 : 휴대폰 클래스 생성
class Phone {
    // 멤버 변수 선언
    private String os;
    private int year;
    private String color;

    // 메소드 선언
    // method overLoading
    public void print() {
        System.out.println("운영체제 : " + this.os + "출시년도 : "
                + this.year + "색상 : "
                + this.color);
    }

    public void print(String o, int y, String c) { // 정보를 갱신하며 즉시 출력
        this.os = o;
        this.year = y;
        this.color = c;

        this.print();;
    }

    //getter setter : 필드가 private이라 외부 접근하기 위해
    public String getOs() {
        return os;
    }

    public void setOs(String os) {
        this.os = os;
    }

    public int getYear() {
        return year;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }
}

public class Review {
    public static void main(String[] args) {
        // 객체 생성
        Phone p = new Phone();

        // 필드 접근 : 인스턴스명.필드명
        p.setOs("Android");
        p.setColor("Black");
        p.setYear(2022);

        System.out.println("운영체제 : " + p.getOs() +
                " 색상 : " + p.getColor() +
                " 출시년도 : " + p.getYear());

        // p객체 메소드 print 호출
        p.print();

        p.print("Nuga",1990,"Red");

    }
}