public class Ifex6 {
    public static void main(String[] args) {
        // 임의의 두 정수를 뺀 결과가 0이거나 양수이면 “+”, 음수이면 “-”를 출력하는 프로그램을 작성하시오.

        // 임의의 두 정수형 변수를 정의하고 값을 저장한다.
        int num1 = 6;
        int num2 = 9;

        // 두 정수의 뺀 결과를 변수로 정의한다.
        int result = num1 - num2;

        // 만약 두정수의 뺀 결과 sum이 0이거나 양수이면
            // "+" 를 출력한다.
        if (result >= 0)  {
            System.out.println("+");
        }

        // 아니고 sum이 음수이면
        // "-" 를 출력한다
        else {
            System.out.println("-");
        }

    }
}
