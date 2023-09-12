package com.kb;

public class UnivFriend {   // 클래스명은 대문자로 시작
    // 멤버변수
    private String name;    // 외부 접근을 막기위해 멤버변수는 private으로 사용
    private String major;
    private String phone;
    // 생성자 파라메터 3개 this는 멤버변수라는걸 알려주기 위해 사용
    public UnivFriend(String name, String major, String phone) {
        this.name = name;
        this.major = major;
        this.phone = phone;
    }
    // 메소드
    public void showInfo(){
        System.out.println("이름"+name);
        System.out.println("전공"+major);
        System.out.println("전화"+phone);
    }
}
