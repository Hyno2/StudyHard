public class Ifex5 {
    public static void main(String[] args) {
        // 임의의 두 정수를 더한 결과가 짝수이면 “짝수”, 아니면 “홀수”를 출력하는 프로그램을 작성하시오.

        // 정수형 변수 두개를 정의하고 값을 저장한다
        int num1 = 3;
        int num2 = 4;

        // 두 정수의 합의 결과의 변수를 정의한다.
        int sum = num1 + num2;

        // 만약 결과 sum 이 짝수이면
            // "짝수" 를 출력한다.
        if (sum % 2 == 0) {
            System.out.println("짝수");
        }

        // 아니고 홀수라면
              // "홀수" 를 출력한다.
        else {
            System.out.println("홀수");

        }
    }
}
