package com.kb;

import java.util.ArrayList;
import java.util.List;
        // ArrayList<E> 클래스
public class ArrayListCollection {
    public static void main(String[] args) {
        // list<클래스> 는 동적으로 추가하기 좋다 배열의 단점 커버
        List<String> list = new ArrayList<>();
        // list(0)객체에 문자 저장
        list.add("Toy");
        // list(1)객체에 문자 저장
        list.add("Box");
        // list(2)객체에 문자 저장
        list.add("Robot");

        // 배열과 비슷한 것이라 for 반복문 사용하고 list.size(index 여기선 0,1,2)는
        // C에서 sizeof랑 같은 의미
        for (int i = 0; i < list.size(); i++) {

            System.out.println(list.get(i));
        }
        System.out.println();
        // remove(0) index 0번을 지워라 잘안씀
        list.remove(0);
        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));
        }
    }
}
