// ex) : 휴대폰, 스마트폰 클래스 생성 및 상속
class Phone {
    // 멤버 변수 :전화번호, 폴더 여부
    public String tel;
    public boolean foldable;
}
class SmartPhone extends Phone {
    // 멤버 변수 : 전화번호, 폴더 여부, 운영체제, 네트워크(4G/5G)
    public String os;
    public String network;

}

public class Extends {
    public static void main(String[] args) {
        Phone p = new Phone();
        SmartPhone sp = new SmartPhone();

        p.tel="010-0000-0000";
       // p.os = "Android"; 하위 클래스 참조 불가능
        sp.network = "5G";
        sp.foldable = true; // 상위 클래스 참조 가능




    }
}
