public class Ifex7 {
    public static void main(String[] args) {
        // 임의의 두 정수를 비교하여 첫 번째 정수가 두 번째 정수보다 크고
        // 짝수이면 “안녕하세요.”를 출력하는 프로그램을 작성하시오.

        // 임의의 두 정수 변수를 정의하고 값을 저장한다.
        int num1 = 6;
        int num2 = 8;

        // 만약 num1이 num2 보다 크고 짝수라면
            // "안녕하세요"를 출력한다
        if (num1 > num2 && (num1 % 2) == 0) {
            System.out.println("안녕하세요.");
        }

    }
}
