public class Ifex8 {    // 디버깅 한줄씩 F8 함수안으로 F7 다음 BP까지 F9
    public static void main(String[] args) {
        //두 개의 양의 정수와 사칙 연산 기호(+, -, *, /) 중  계산 결과를 출력하는 계산기 프로그램을 작성하시오.

        // 두 개의 양의 정수형 변수를 정의하고 값을 저장한다
        int num1 = 3;
        int num2 = 4;

        // 연산기호 문자 변수 정의하고 값을 저장한다
        String oper = "+"; // operating : 연산자

        // 만약 oper == "+:라면
        // num1 + num2 결과출력
        if(oper.equals("+")){
            System.out.println(num1 + num2);
        }
        // 아니고 만약 oper == "-:라면
        // num1 - num2 결과출력
        else if(oper.equals("-")){
            System.out.println(num1 - num2);
            }
        // 아니고 만약 oper == "*:라면
        // num1 * num2 결과출력
        else if(oper.equals("*")){
            System.out.println(num1 * num2);
        }
        // 아니고 만약 oper == "/:라면
        // num1 / num2 결과출력
        else if(oper.equals("/")){
            System.out.println(num1 / num2);
        }
    }
}
