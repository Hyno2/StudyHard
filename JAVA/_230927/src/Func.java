import java.util.Scanner;

public class Func {
    // 함수 구현
    // public 반환명 환수명 (매개변수타입 매개변수명 ....){
    // 명령문들
    // }
    public static int plus(int a, int b) {
        return a + b;
    }

    // 출력은 콘솔 상에서 확인할 수 있는 값일 뿐이고
    // 반환은 프로그램 실행 흐름 상 "뱉어지는" 결과물
    public static int minus(int a, int b) {
        return a - b;
    }

    public static int multi(int a, int b) {
        return a * b;
    }

    public static double division(int a, int b) {
        return (double) a / b;
        // int / int = int
        // double / int = double
        // int / double = double
        // double / double = double
    }

    public static int remain(int a, int b) {
        return a % b;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // 함수 : "명령문들의 집합"

        // 예제 : 계산기 구현 (+, -, *, /, %)
        // 2개의 숫자와 1개의 연산자 입력받고, 연산 결과 출력하라.

        // 1. 입력 (2개의 숫자, 1개의 연산자(char) )
        System.out.print("첫번째 숫자 입력 : ");
        int num1 = scanner.nextInt();

        System.out.print("두번째 숫자 입력 : ");
        int num2 = scanner.nextInt();

        System.out.print("연산자 입력 : ");
        char oper = scanner.next().charAt(0);

        // 2. 연산자에 따라, 연산 수행
        switch (oper) {
            case '+':   // 덧셈 수행
                System.out.println("덧셈 결과 :" + plus(num1, num2));
                break;
            case '-':    // 뺄셈 수행
                System.out.println("뺄셈 결과 : " + minus(num1, num2));
                break;
            case '*':   // 곱셈 수행
                System.out.println("곱셈 결과 : " + multi(num1, num2));
                break;
            case '/':   // 몫 나누기 수행
                System.out.println("나눗셈 결과 : " + division(num1, num2));
                break;
            case '%':   // 나머지 나누기 수행
                System.out.println("나머지 결과 : " + remain(num1, num2));
                break;
            default:    // 올바르지 않게 연산자를 입력했을 경우 -> 오류메세지 출력
                System.out.println("error!!!!");
        }


    }
}
