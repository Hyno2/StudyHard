public class If {   // 한줄 한줄 코드 리뷰 하고 한줄당 주석 달아야 한다
    // 분해 해석을 잘 해야함 분해 하는 기준은 동사 형으로
    // 틀부터 미리 만들어 놓고 대괄호{} 는 절때 지우지 마라
    // 지우려면 쌍으로 지워야 함
    public static void main(String[] args) {
        int n1 = 5;
        int n2 = 7;
        // 만약 n1 < n2 라면
        // "n1 < n2 is true " 출력

        if (n1 < n2) {
            System.out.println("n1 < n2 is true");
        }

        // 만약 n1 == n2라면
        // "n1 == n2 is true" 출력
        // 아니라면
        // "n1 == n2 is false" 출력
        if (n1 == n2) {     // if ~ else 는 양자택일 무조건 실행됌
            // if ~ else if 는 다수택 실행이 되도 안되도 그만이다
            System.out.println("n1==n2 is true");
        } else {
            System.out.println("n1==n2 is false");
        }

        // 만약 num < 0 이라면
        // 아니고 num < 100 이라면
        // 아니라면
        int num = 0;
        if (num < 0) {

        } else if (num < 100) {

        } else {

        }

    }
}
