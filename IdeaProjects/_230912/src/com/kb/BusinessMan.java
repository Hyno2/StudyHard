package com.kb;

public class BusinessMan extends Man {  //  extends 상속 == 확장개념 Man이 상위클래스(Man에 있는건 다쓸수있다)
    private String company;
    private String position;

    // 생성자 생성 alt + insert
    // 생성자는 객체 생성때 한번만 호출이 가능하다
    public BusinessMan(String company, String position,String name) {
        super(name);    // 상위 클래스로부터 생성자를 호출 한다 = 이유는 상위 클래스에서 멤버 변수를 private을 사용하고, 초기화를 위해
                        // 이렇게 하는 것보다 사실 상속을 안 받아서 하는게 더 실용적이다
        this.company = company;
        this.position = position;

    }

    public void tellYourInfo(){
        System.out.println("My company is "+ this.company);
        System.out.println("My position is "+ this.position);
        tellYourName(); // Man 클래스를 상속했기 때문에 호출 가능!


    }


}
