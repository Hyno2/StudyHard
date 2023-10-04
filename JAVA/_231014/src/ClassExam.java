import java.time.LocalTime;
import java.util.Scanner;
// Clock 클래스 구현
// - 멤버 변수 : hour, minute, second = 0
// (private으로 설정)
// - 멤버 함수 : PrintTime() -> 현재 시간 출력
// AmPm() -> 오전인지 오후인지 출력

// main 에서 수행할 것
// Clock 클래스를 통해 c1.c2객체 각각 생성
// 3개의 입력을 받아 c2 객체 필드 초기화
// c1, c2 객체에 대한, PrintTime() 및 AmPm() 실행

class Clock {
    // 멤버변수 초기화 private으로
    // 이렇게 설정하면, Clock에 대한 객체 생성함과 동시에
    // 3개의 멤버 변수들이 모두 0으로 초기화된다.
    private int hour = 0;
    private int minute = 0;
    private int second = 0;


    public int getHour() {
        return hour;
    }

    public void setHour(int hour) {
        this.hour = hour;
    }

    public int getMinute() {
        return minute;
    }

    public void setMinute(int minute) {
        this.minute = minute;
    }

    public int getSecond() {
        return second;
    }

    public void setSecond(int second) {
        this.second = second;
    }

    // 멤버 함수 선언
    public void printTime() {
        System.out.println("현재 시간은 : " + this.hour + "시 " + this.minute + "분 " + this.second + "초");
    }

    public void AmPm() {
        if (this.hour >= 0 && this.hour < 12) {
            System.out.println("오전");
        } else {
            System.out.println("오후");
        }
    }
}

public class ClassExam {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // c1, c2객체 생성
        Clock c1 = new Clock(); // 클래스 이거를 c1 c2 두개로 생성
        Clock c2 = new Clock();

        // 3개 입력을 받아 c2필드 초기화
        System.out.print("c2 시간 : ");
        c2.setHour(scanner.nextInt()); // int형 입력 -> 함수 실행 순
        System.out.print("c2 분 : ");
        c2.setMinute(scanner.nextInt());
        System.out.print("c2 초 : ");
        c2.setSecond(scanner.nextInt());

        // c1 객체에 대한 PrintTime(), AmPm() 실행
        c1.AmPm();
        c1.printTime();

        // c2 객체에 대한 PrintTime(), AmPm() 실행
        c2.AmPm();
        c2.printTime();


    }
}
