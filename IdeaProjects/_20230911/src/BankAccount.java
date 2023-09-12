public class BankAccount { // alt + insert = getter & setter , 생성자 constructor
    // 멤버변수
    private int balance;    // 잔고 private 외부에서 접근 불가능

    private String owner;   // 계좌 주성명

    // 생성자(메소드의 일종이다) 메소드명이 같더 라도 파라메터가 다르면 사용가능하다

    // 기본 생성자
    public BankAccount(){

    }
    // 파라메터 두개 있는 생성자
    public BankAccount(int balance, String owner) { // 파라메터(매개변수)
        if (balance<0){                             // 잔고가 -가 될수 없어서 조건 걸어줌
            System.out.println("마이너스 통장 불가");
            balance = 0;                            // 아니면 0원으로 초기화 시켜줌
        }
        this.owner = owner;
        deposit(balance);
    }

    // 입금
    public void deposit(int amount) {   // deposit 입금
        this.balance += amount;         // this 쓰면 이 메소드 안에서 적용
        System.out.println(amount + "원이 입금되었습니다");
        this.showBalance();
    }

    // 출금
    public void withdraw(int amount) {   // withdraw 출금
        if(this.balance < amount) {
            System.out.println(amount + "잔고가 부족합니다");
            this.showBalance();
            return;
        }
        this.balance -=amount;
        System.out.println(amount+"원이 출금되었습니다");
        this.showBalance();
    }

    // 잔고 확인
    public void showBalance(){
        System.out.println(this.owner+"님의 현재 잔고 : "+this.balance);
    }
}
