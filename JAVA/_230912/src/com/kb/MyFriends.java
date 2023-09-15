package com.kb;

public class MyFriends {
    public static void main(String[] args) {
        // 클래스를 frends 이름으로 배열 객체를 생성  크기10
       Friend[] friends = new Friend[10];

        // friends객체의 배열 갯수를 증가 시키기 위해 변수 정의 0을 저장
        int cnt = 0;

        // friends[cnt]에 UnivFriend 객체 생성 후 값 대입
        friends[cnt] = new UnivFriend("lee", "computer", "01000005555");

        // cnt 1증가
        cnt++;

        // friends[cnt]에 UnivFriend 객체 생성 후 값 대입
        friends[cnt] = new UnivFriend("seo", "electronics", "01011115555");

        // cnt 1증가
        cnt++;

        // friends[cnt]에 CompFriend 객체 생성 후 값 대입
        friends[cnt] = new CompFriend("yoon", "r&d 1", "01022225555");

        // cnt 1증가
        cnt++;

        // friends[cnt]에 CompFriend 객체 생성 후 값 대입
        friends[cnt] = new CompFriend("ha", "r&d 2", "01033335555");

        // cnt 1증가
        cnt++;

        // 배열 출력을 위해 반복문 사용 i < cnt==0,1 총 2번 출력된다
        for(int i = 0; i < cnt; i++) {
            friends[i].showInfo();
        }

    }
}




