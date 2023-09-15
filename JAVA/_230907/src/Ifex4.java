public class Ifex4 {
    public static void main(String[] args) {
        // 임의의 문자가 “a”, “b”, “c”이면 “영문입니다.”,
        // “1”, “2”, “3”이면 “숫자입니다.
        // ”, “+”, ”-”, ”*”이면 “연산자입니다.”를 출력하는 프로그램을 작성하시오.

        // 문자형변수를 정의하고 값을 저장한다
        String str = "";    // String str은 class의 객체str이다.

        // 만약 문자가 “a”, “b”, “c” 라면
            // "영문입니다." 출력한다
        if (str.equals("a")
                || str.equals("b")
                || str.equals("c")) {   // str.equals() 문자열 비교
            System.out.println("영문입니다.");
        }

        // 아니고 문자가 "1", "2", "3" 이라면
           // "숫자입니다." 출력한다
        else if (str.equals("1")
                || str.equals("2")
                || str.equals("3")) {
            System.out.println("숫자입니다.");
        }

        // 아니고 문자가 “+”, ”-”, ”*” 이라면
            // "연산자입니다." 출력한다
        else if (str.equals("+")
                || str.equals("-")
                || str.equals("*")) {
            System.out.println("연산자입니다.");
        }

    }
}
