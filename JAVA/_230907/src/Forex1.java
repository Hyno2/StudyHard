import java.util.Scanner;

public class Forex1 {
    public static void main(String[] args) {
        // 14, 15, 16 번 풀기
        // 14. 임의의 정수를 모든 약수를 출력 하는 프로그램을 작성하시오
        // 약수 = 나머지가 0이 되는 것

        // 입력 받기 위한 객체 선언 , 입력을 받고 나면 무조건 스트링(문자)가 된다
        Scanner scanner = new Scanner(System.in);

        // int input을 선언하고 입력 받아 저장한다.
        System.out.println("숫자 입력: ");
        String str = scanner.nextLine();    // nextLine();한줄씩 입력 받는다
        int input = Integer.parseInt(str);  // 문자 데이터를 숫자 데이터로 변환해준다
        // parse 자주 보이는데 mapping 역활이다
        // mapping 은 형태를 바꿔서 맞춰 준다 의미

        // i는 1부터 input 까지 반복
        // - 만약 input % i == 0 이라면
        // -- 출력 i
        for (int i = 1; i <= input; i++) {
            if (input % i == 0) {
                System.out.println(i);
            }
        }

    }
}
