import java.util.Scanner;

public class BaseballTeacher {
    public static void main(String[] args) {


        // 정답 3개
        // int answer1을 선언하고 숫자 저장
        int answer1 = 1;
        // int answer2을 선언하고 숫자 저장
        int answer2 = 3;
        // int answer3을 선언하고 숫자 저장
        int answer3 = 5;

        // int strike를 선언하고 0을 저장       바깥쪽 초기화 할 경우 안쪽도 알고리즘에서 해주는게 좋다
        int strike = 0;
        // int ball을 선언하고 0을 저장
        int ball = 0;

        // 입력 받기 위한 객체 선언 , 입력을 받고 나면 무조건 스트링(문자)가 된다
        Scanner scanner = new Scanner(System.in);

        // 9번 반복해라
        for (int i = 0; i < 9; i++) {
            // 카운트 판단을 위한 변수 초기화
            strike = 0;
            ball = 0;

            // 입력 3개
            // int question1을 선언하고 입력 받아 저장
            System.out.println("첫번째 숫자 입력: ");
            String str1 = scanner.nextLine();    // nextLine();한줄씩 입력 받는다
            int question1 = Integer.parseInt(str1);  // 문자 데이터를 숫자 데이터로 변환해준다

            // int question2을 선언하고 입력 받아 저장
            System.out.println("두번째 숫자 입력: ");
            String str2 = scanner.nextLine();
            int question2 = Integer.parseInt(str2);

            // int question3을 선언하고 입력 받아 저장
            System.out.println("세번째 숫자 입력: ");
            String str3 = scanner.nextLine();
            int question3 = Integer.parseInt(str3);

            // 스트라이크, 볼 판별
            // 만약 question1 == answer1  이라면
            // - strike++
            if (question1 == answer1) {
                strike++;
            }
            // 아니라면
            // -만약  question1 == answer2 || question1 == answer3 이라면
            // -- ball++
            else if (question1 == answer2
                    || question1 == answer3) {
                ball++;
            }
            // 만약 question2 == answer2  이라면
            // - strike++
            if (question2 == answer2) {
                strike++;
            }
            // 아니라면
            // -만약  question2 == answer1 || question2 == answer3 이라면
            // -- ball++
            else if (question2 == answer1
                    || question2 == answer3) {
                ball++;
            }
            // 만약 question3 == answer3  이라면
            // - strike++
            if (question3 == answer3) {
                strike++;
            }
            // 아니라면
            // -만약  question3 == answer1 || question3 == answer2 이라면
            // -- ball++
            else if (question3 == answer1
                    || question3 == answer2) {
                ball++;
            }
            if (strike==3){
                break;
            }else {
                System.out.println("스트라이크 : " + strike);
                System.out.println("볼 : " + ball);
            }
        }
        // 결과 출력
        if (strike == 3) {
            System.out.println("정답입니다");
        } else{
            System.out.println("정답 : "+answer1 +","+answer2+","+answer3);
        }
    }
}
