public class Ifex1 {
    public static void main(String[] args) {
        // 1. 아래 코드는 두 개의 if 문을 사용중 이다. 하나의 if문 만 사용해보아라
        //  int num = 120;
        //  if (num > 0) {
        //    if ((num % 2) == 0 ) {
        //       System.out.println("양수이면서 짝수");
        // }
        //}

        // int num 을 정의하고 120을 저장한다
        int num = 120;

        // 만약 num>0 이고 (num % 2) == 0이라면
            // "양수이면서 짝수" 출력하라
        if (num > 0 && (num % 2) == 0) {
            System.out.println("양수이면서 짝수");
        }

    }
}
