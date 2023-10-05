import java.util.Scanner;

//Account 클래스 생성
//        - 멤버변수 : acc.num(회원번호), id(아이디), password(비번)
//        - 메소드 :
//        1. get. set 함수
//        2. print() : 3개 멤버 변수 값 출력
//        3. changePw(String) : 매개변수 값으로 비번 변경
//        다만 5자리를 넘기지 않으면 에러메세지 출력
//        - 생성자:
//        1. 각각 "0000", "ex", "0000" 으로 초기화
//        2. 3개의 필드 매개변수 통해 초기화
class Account {
    // 필드 선언
    private String acc_Num;
    private String id;
    private String password;

    // 생성자
    public Account() {
        this.acc_Num = "0000";
        this.id = "ex";
        this.password = "0000";
    }

    // 생성자 3개필드 통해 초기화
    public Account(String acc_Num, String id, String password) {
        this.acc_Num = acc_Num;
        this.id = id;
        this.password = password;
    }

    // getter setter
    public String getAcc_Num() {
        return acc_Num;
    }

    public void setAcc_Num(String acc_Num) {
        this.acc_Num = acc_Num;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    // print 메소드 선언
    public void print() {
        System.out.println("회원번호: " + this.acc_Num);
        System.out.println("아이디: " + this.id);
        System.out.println("비밀번호: " + this.password);
    }

    // 파라메터 값으로 비번 변경
    // 5자리를 넘기지 않으면 에러 메세지 출력
    public void changePw(String s) {
        if (s.length() >= 5) {
            this.password = s;
            System.out.println("비밀번호 변경완료!");
            System.out.println("변경된 비밀번호: " + s);

        } else {
            System.out.println("Error!!");
        }
    }

}

//main에서 실행할 내용
//        -manager[3] 객체 생성(임의값으로 설정하는 생성자)
//        -manager[3] id,password 값 코드 상에서 임의로 수정
//        -manager[3] 순차적으로 정보출력
//        -user 객체 생성 (main에서 입력받아서 초기화)
//        -user 정보 순차적으로 출력
//        -user 객체에 대해 changePw(String) 수행
public class Test1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // manager[3] 객체 생성
        Account manager[] = new Account[3];

        // (임의값으로 설정하는 생성자) 매개변수가 없는 임의의값
        for (int i = 0; i < 3; i++) {
            manager[i] = new Account();
        }
        // manager[3] id,password 값 코드 상에서 임의로 수정
        for (int i = 0; i < 3; i++) {
            if (i == 0) {
                manager[i].setId("1111");
                manager[i].setPassword("1111");
            } else if (i == 1) {
                manager[i].setId("2222");
                manager[i].setPassword("2222");
            } else {
                manager[i].setId("3333");
                manager[i].setPassword("3333");
            }
        }
        // manager[3] 순차적으로 정보출력
        for (int i = 0; i < 3; i++) {
            manager[i].print();
            System.out.println();
        }

        // user 객체 생성 입력받아서 초기화
        Account user = new Account(scanner.next(), scanner.next(), scanner.next());

//        user.setAcc_Num(scanner.next());
//        user.setId(scanner.next());
//        user.setPassword(scanner.next());

        // user 정보 순차적으로 출력
        user.print();
        System.out.println();

        // user 객체에 대해 changePw(String) 수행
        System.out.println("수정할 비밀번호 입력해주세요: ");
        user.changePw(scanner.next());
    }
}
