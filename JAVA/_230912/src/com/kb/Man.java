package com.kb;

public class Man {
    private String name;  // private 말고 protected 쓴 이유는 상속 받은 곳에서도 사용 가능하게 하기 위해

    // 생성자
    public Man(String name) {
        this.name = name;
    }

    public void tellYourName(){
        System.out.println("My name is "+this.name);
    }
}
