// super() : 상위 클래스의 "생성자"를 호출 하는 메소드,
// super. -> 별로 안씀

import java.io.StringReader;
import java.util.Scanner;

class Transport {    // 이동 수단 클래스
    //필드 : start(출발지), end(도착지)
    private String start;
    private String end;

    // 아래 생성자를 선언함으로, 기본 생성자는 없는 셈으로 치게 된다
    public Transport(String s, String e) {
        this.start = s;
        this.end = e;
        System.out.println(this.start+"에서 "+this.end+"까지 이동합니다.");
    }
}

class Train extends Transport {       // 기차 클래스
    // 필드 : start, end, name(기차 이름)
    private String name;

    public Train(String s, String e,String n){
        super(s,e);
        this.name = n;
        System.out.println("탑승하신 기차는"+n+"입니다.");
    }
}

class Bus extends Transport {         // 버스 클래스
    // 필드 : start, end, company
    private String company;

    public Bus(String s, String e, String c) {
        super(s, e);
        this.company = c;
        System.out.println(c+" 소속 버스입니다.");
    }
}

public class Review {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        Train train = new Train("대구", "서울", "KTX");
        System.out.println();
        Bus bus = new Bus("대구", "광주","동양고속");


    }
}
