import java.util.Scanner;

public class Tutorial {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // 출력문
        System.out.printf("결과값은 %d입니다.", 3);
        System.out.print("Hello22");    // "Hello22"
        System.out.println("Hello11");  // 표준 이걸로씀 "Hello11" + "\n"

        // System.out.print(); // 출력값이 없다, 에러발생
        System.out.println(); // "\n" 출력값이 있다

        // 입력문
        // 정수형 자료형
        int i = scanner.nextInt();
        long l = scanner.nextLong();

        // 실수형 자료형
        double d = scanner.nextDouble();
        float f = scanner.nextFloat();

        // 문자형 자료형
        char c = scanner.next().charAt(0);    // 0번째 문자 c에 저장된다
        String s1 = scanner.next();      // " " 공백을 만나면 종료
        String s2 = scanner.nextLine(); // "\n"을 만나면 종료


    }
}