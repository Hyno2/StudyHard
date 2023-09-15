public class Ifex2 {
    public static void main(String[] args) {
        // 2. 임의의 양의 정수가 짝수이면 "2의 배수입니다.",
        // 아니면 "2의 배수가 아닙니다." 를 출력하는 프로그램

        // int num을 정의하고 값을 저장한다
        int num = 3;

        // 만약 정수가 짝수일 때
            // "2의 배수입니다."  출력
        if (num % 2 == 0) {
            System.out.println("2의 배수 입니다.");
        }

        // 아니라면
             // "2의 배수가 아닙니다." 출력
        else {
            System.out.println("2의 배수가 아닙니다.");
        }

    }
}
