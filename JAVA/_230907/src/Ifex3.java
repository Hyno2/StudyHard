public class Ifex3 {
    public static void main(String[] args) {
        // 3. 임의의 양의 정수가 3의 배수이면 “3의 배수입니다.”, 4의 배수이면 “4의 배수입니다.“,
        // 둘다 아니면 “알 수 없습니다.”를 출력하는 프로그램을 작성하시오.

        // int num 을 선언한다
        int num = 11;

        // 만약 num 이 3의 배수라면
            //"3의 배수입니다." 출력하기
        if (num % 3 == 0) {
            System.out.println("3의 배수입니다.");
        }

        // 아니고 4의 배수라면
             //"4의 배수입니다." 출력하기
        else if (num % 4 == 0) {
            System.out.println("4의 배수입니다.");
        }

        // 둘다 아니라면
             //"알 수 없습니다." 출력하기
        else {
            System.out.println("3의 배수입니다.");

        }
    }
}
