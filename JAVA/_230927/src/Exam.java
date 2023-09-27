import java.util.Scanner;

public class Exam {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

//        1. 숫자 n을 입력받고 1부터 n까지 숫자 중 짝수만 추려내어 출력하고
//        짝수들끼리의 합을 출력하도록 하여라
         // 숫자 n을 입력받는다
        int n = scanner.nextInt();
        int sum = 0;
        // 1부터 입력받은 n까지 숫자 표현
        for (int i = 1; i <= n; i++) {
            //짝수만 추려내기
            if (i % 2 == 0) {
                // 짝수들끼리 합하는 sum
                sum += i;
                // 짝수들만 출력
                System.out.println(i);
            }
        }
        // 짝수합 출력
        System.out.println("짝수들끼리의 합 : " + sum);

//        2. 숫자 n을 입력받고 1부터 n까지의 숫자 중 소수만 추려내어 출력하라
//        (여기서 소수란, 특정 숫자에 대해 약수가 1과 자기자신 밖에없는 숫자를 의미한다)
//         ex) 입력값 : 9 -> 2 3 5 7
        // 숫자 입력 받기 위한 변수
        System.out.print("숫자 입력 : ");
        int a = scanner.nextInt();
        // 2 부터 n까지 숫자
        for (int i = 2; i <= a; i++) {
            //   2~(a-1) 범위에선 약수가 없어야 한다
            int count = 0;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) { // j가 i의 약수일 때
                    // 여기로 들어올 시 소수가 아니게 된다
                    count++;
                }
            }
            // count 값이 0을 유지하지 못한다면, 소수가 아니다.
            // count 값이 0을 유지할시, 소수라고 할 수 있다
            if (count == 0) {
                // 여기로 들어올시 소수 -> 소수 출력
                System.out.println(i);
            }
        }


    }
}
