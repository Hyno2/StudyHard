package com.kb;

public class CompFriend {// 클래스명 대문자시작
    // 멤버변수
    private String name;
    private String department;
    private String phone;
    // 생성자 파라메터 3
    public CompFriend(String name, String department, String phone) {
        this.name = name;
        this.department = department;
        this.phone = phone;
    }
    // 메소드
    public void showInfo() {
        System.out.println("이름 : " + this.name);
        System.out.println("부서 : " + this.department);
        System.out.println("전화 : " + this.phone);
    }

}
