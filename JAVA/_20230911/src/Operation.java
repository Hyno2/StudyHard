public class Operation {
    public static void main(String[] args) {
        // 객체 한테 무슨 일을 시킬 때는 메소드(기능,동사)를 사용 한다
        // 두개는 각각 분리 되어 있다.
        // 상속 = 확장의 개념이다 자바에서 가장 중요한 개념이다
        // 최상위 클래스 == object 클래스
        // 상위클래스 일수록 러프 , 하위클래스 일수록 세분화 된다.
        BankAccount ba1 = new BankAccount(10000,"a"); // new = 생성자 안의 멤버 변수 값들은 모두 초기화된다

        BankAccount ba2 = new BankAccount(5000,"b");

        ba1.deposit(10000);

        ba2.withdraw(10000);

        ba1.withdraw(10001);

        // src 폴더 안에 있는건 패키지
        // 다론 폴더 안에 있을땐 사용 불가능한데
        // C 언어처럼 include 역활을 하게 해서 쓰면 된다
        // 방법은 Alt + Enter import가 추가된다 같은 폴더에 추가하면 댐
        SuBBankAccount ba3 = new SuBBankAccount();
    }
}
