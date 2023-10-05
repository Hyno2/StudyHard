import java.util.Scanner;


public class MethodExam {
// 오늘 날짜(월,일)을 입력받고
// 이번 해가 끝나기까지 몇 일이 남았는지 출력하기
// main에서 입출력 수행하기
// getDaily 함수 -> 월,일 정보를 통해
// 연말까지 몇일 남았는지 반환하는 함수 구현
// 출력 형식은 자유롭게, 결과값만 잘 나오면 됌

// 2월 : 28일
// 1,3,5,7,8,10,12월 : 31일
// 4,6,9,11월 : 30일
//
//ex1) 입력값 : 12 31
//    출력값 : 0
//ex2) 입력 10 4
//    출력: 88일 남음
//ex3) 입력값 : 3 14
//    출력값 : 292일 남음
//ex4) 입력값 ;; 1 1
//    출력값 : 364일 넘음
    public static int getDaily(int m, int d) {
        int totalday = 0;
        for (int i = 1; i < m; i++) {
            if (i == 1 || i == 3 || i == 5 || i == 7
                       || i == 8 || i == 10 || i == 12) {
                totalday += 31;
            } else if (i == 2) {
                totalday += 28;
            } else if (i == 4 || i == 6
                    || i == 9 || i == 11) {
                totalday += 30;
            }
        }
        totalday += d;
        return 365 - totalday ;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // 월 일 입력하기
        System.out.println("몇 월 : ");
        int month = scanner.nextInt();
        System.out.println("몇 일 : ");
        int day = scanner.nextInt();

        //몇일 남은 지 출력하기
        System.out.println(getDaily(month, day) + "일 남음");
    }
}
