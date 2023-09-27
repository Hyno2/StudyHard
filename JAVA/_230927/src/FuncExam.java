import java.util.Scanner;


public class FuncExam {
//   main에서 입력값으로 주어지는 sec(초) 정보를 h시 m분 s초로 출력하게 코드 작성
//   다만 아래의 함수를 용도에 맞게 구현하고 적절히 사용하라
//   (입력 출력모두 main에서 수행)
//   86400초(24시간) 이상의 값에 대해선 오류 메세지 출력

    // getHour(int s) : 초 정보를 받고 , 시 정보를 반환
    // getMin(int s) : 초 정보를 받고, 분 정보를 반환
    // getSec(int s) : 분으로 환산 불가능한 초 정보 반환

    public static int getHour(int s) {
        return s / 3600;
    }
    public static int getMin(int s) {
        return (s % 3600) / 60;
    }
    public static int getSec(int s) {

        return s % 60;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("sec 입력 : ");
        int s = scanner.nextInt();

        int h = getHour(s);
        int m = getMin(s);
        int sec =  getSec(s);
        if(s <= 86400) {
            System.out.println(h + "시간" + m + "분" + sec + "초");
        }
        else if (s >86400){
            System.out.println("error!!");
        }

    }
}
