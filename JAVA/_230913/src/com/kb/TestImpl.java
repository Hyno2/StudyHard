package com.kb;
// 인터페이스 구현 하는 곳
// 구현 하는 곳의 접근지시자는 전부 public
// 무조건 비어 있어도 인터페이스에 있는 메소드를 정의 해줘야 함

public class TestImpl implements Test{ // implements 인터페이스 구현
    @Override   // 무조건 오버라이딩 해서 정의
    public void print(){
    }
    @Override
    public void print1(){
    }
    @Override
    public int getId(int a, int b){ // 인터페이스에서 int엿고 파라메터도 똑같이 맞춰 줘야함
        return 0;
    }
}
