//3개의 클래스에 대해 상속 관계를 설정해라
//        Clock 클래스
class Clock {
    //        - 필드 : hour, minute,second
    private int hour;
    private int minute;
    private int second;

    public int getHour() {
        return hour;
    }

    public void setHour(int hour) {
        this.hour = hour;
    }

    public int getMinute() {
        return minute;
    }

    public void setMinute(int minute) {
        this.minute = minute;
    }

    public int getSecond() {
        return second;
    }

    public void setSecond(int second) {
        this.second = second;
    }

    //        - 메소드 : setting(int,int,int) : 시간 설정
    public void setting(int a, int b, int c) {
        this.hour = a;
        this.minute = b;
        this.second = c;
    }
}

//        Watch 클래스
class Watch extends Clock {
    //        - 필드 : hour, minute, second, strapColor
    private String strapColor;

    public String getStrapColor() {
        return strapColor;
    }

    public void setStrapColor(String strapColor) {
        this.strapColor = strapColor;
    }

    //        - 메소드 : setting(int,int,int) : 시간 설정, strapColor="Black"
    @Override
    public void setting(int a, int b, int c) {
        // Watch 객체는 상위 클래스보다 자기 자신의 내용을 우선시한다
        // this.Setting(a,b,c); // 상위클래스 내용 실행x -> 무한 반복
        this.setHour(a);
        this.setMinute(b);
        this.setSecond(c);
        this.strapColor = "Black";
    }

    //        setting(int,int,int,String) : 시간 및 시계줄 색상 설정
    public void setting(int a, int b, int c, String s) {
//        this.setHour(a);
//        this.setMinute(b);
//        this.setSecond(c);
        this.setting(a, b, c);
        this.strapColor = s;
    }
}

//        SmartWatch 클래스
class SmartWatch extends Watch {
    //        - 필드 : hour, minute, second, strapColor, os
    private String os;

    public String getOs() {
        return os;
    }

    public void setOs(String os) {
        this.os = os;
    }

    //        - 메소드 : setting(int,int,int) : 시간 설정, strapColor="Black", os="null"
    @Override
    public void setting(int a, int b, int c) {
        this.setHour(a);
        this.setMinute(b);
        this.setSecond(c);
        this.setStrapColor("Black");
        this.os = "null";
    }

    //        setting(int,int,int,String) : 시간 및 시계줄 색상 설정 os ="null"
    @Override
    public void setting(int a, int b, int c, String s) {
        this.setting(a, b, c);
        this.setStrapColor(s);
    }

    //        setting(int,int,int,String,String) : 시간 및 시계줄 색상, os 설정
    public void setting(int a, int b, int c, String s, String s1) {
        this.setting(a, b, c, s);
        this.os = s1;
    }
}

public class Test1 {
    public static void main(String[] args) {
        // clock 객체
        Clock clock = new Clock();

        clock.setting(11, 11, 11);
        System.out.println("Clock: " + clock.getHour() +
                             "시" + clock.getMinute() +
                            "분" + clock.getSecond() +
                           "초");

        // watch 객체
        Watch watch = new Watch();

        watch.setting(12, 12, 12);
        System.out.println("watch1: " + watch.getHour() + "시"
                + watch.getMinute() + "분"
                + watch.getSecond() + "초"
                + " 색상: " + watch.getStrapColor());


        watch.setting(13, 13, 13, "Blue");
        System.out.println("watch2: " + watch.getHour() + "시"
                + watch.getMinute() + "분"
                + watch.getSecond() + "초"
                + " 색상: " + watch.getStrapColor());

        // smartWatch 객체 생성
        SmartWatch smartWatch = new SmartWatch();

        smartWatch.setting(14, 14, 14);
        System.out.println("smartWatch1: " + smartWatch.getHour() + "시"
                + smartWatch.getMinute() + "분"
                + smartWatch.getSecond() + "초"
                + " 색상: " + smartWatch.getStrapColor()
                + " 운영체제: " + smartWatch.getOs());


        smartWatch.setting(15, 15, 15, "Red");
        System.out.println("smartWatch2: " + smartWatch.getHour() + "시"
                + smartWatch.getMinute() + "분"
                + smartWatch.getSecond() + "초"
                + " 색상: " + smartWatch.getStrapColor()
                + " 운영체제: " + smartWatch.getOs());


        smartWatch.setting(16, 16, 16, "Grey", "Android");
        System.out.println("smartWatch3: " + smartWatch.getHour() + "시"
                + smartWatch.getMinute() + "분"
                + smartWatch.getMinute() + "초"
                + " 색상: " + smartWatch.getStrapColor()
                + " 운영체제: " + smartWatch.getOs());
    }
}
