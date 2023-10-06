// 클래스 : 객체/인스턴스를 찍어내는 틀
class Americano {
    // 필드 : 물 양, 원액 양, 얼음 유 무
    private int water;
    private int coffee;
    private String ice;

    // getter setter
    public int getWater() {
        return water;
    }

    public void setWater(int water) {
        this.water = water;
    }

    public int getCoffee() {
        return coffee;
    }

    public void setCoffee(int coffee) {
        this.coffee = coffee;
    }

    public String getIce() {
        return ice;
    }

    public void setIce(String ice) {
        this.ice = ice;
    }

    // 생성자 : 객체를 생성하는 메소드, 메소드 중 일부
    // 일반 메소드와의 차이점 : 1. 반환형X
    //                       2. 생성자이름 = 클래스명
    public Americano() {
        // 3개의 필드 초기화
        // 객체를 생성했음을 알림
        this.water = 500;
        this.coffee = 250;
        this.ice = "있음";
        System.out.println("객체가 성공적으로 생성되었습니다!!");
    }

    public Americano(int w, int c, String i) {
        this.water = w;
        this.coffee = c;
        this.ice = i;
    }

    public void goodAme() { // 물 : 커피 = 2 : 1
                            // 2커피 = 1물
        if (this.coffee * 2 == this.water) { //this.water/this.coffee == 2 && this.water%this.coffee == 0
            System.out.println("황금 비율");
        } else if (this.coffee * 2 > this.water) {
            System.out.println("진한 아메리카노");
        } else  {
            System.out.println("연한 아메리카노");
        }
    }

    public void amount() {
        if (this.water + this.coffee > 750) {
            System.out.println("양이 많다");
        } else if (this.water + this.coffee < 750) {
            System.out.println("양이 적다");
        } else if (this.water + this.coffee == 750)
            System.out.println("양이 적당하다");
    }

}

public class Review {
    public static void main(String[] args) {
        // 객체 배열
        // 순서
        // 1. 배열로 공간 할당
        Americano americano[] = new Americano[2];

        // 2. 객체 생성
//        for (int i = 0; i < 2; i++) {
//            객체명 = new 생성자(메소드) 호출
//            americano[i] = new Americano();
//        }
        americano[0] = new Americano();
        americano[1] = new Americano(600, 230, "있음");

        for(int i = 0 ; i< 2 ; i++){
            americano[i].amount();
            americano[i].goodAme();
            System.out.println();
        }

        // 클래스 생성자


    }
}
