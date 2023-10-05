import java.util.Scanner;

public class Review {
    // 함수 : 명령문들의 집합
    // public static 반환형 함수명(매개변수타입 매개변수명, ...){
    //명령문들;
//  }
    public static void print(int hour, int min){
        if(hour>=0 && hour<=6){
            System.out.println("취침중zzz");
        }
        else if(hour<=9 && min<0){
            System.out.println("출근하셔야죠...");
        }
        else if(hour<=18 && min<1){
            System.out.println("근무중;;");
        }
        // 18시 이후 : "칼퇴!!!" 출력
        else {
            System.out.println("칼퇴!!");
        }
    }


    public static void main(String[] args) {
        // ex.1 하루 시간(시,분)을 입력받고, 현재 진행중인 일과를 출력하기
        // 오전 9시 이전 : "출근하셔야죠..." 출력
        // 오전 9~ 18시 : "근무중" 출력
        // 18시 이후 : "칼퇴!!!" 출력
        // 0시 ~ 6시 : "취침중" 출력
        Scanner scanner = new Scanner(System.in);

        // 하루시간 입력받기(시,분) 2개
        System.out.print("몇시 : ");
        int hour = scanner.nextInt();
        System.out.print("몇분 : ");
        int min = scanner.nextInt();

        // 현재 진행중인 일과 출력하기  ->
        print(hour,min);
    }
}