// 상속
class Coffee {
    private String name;    // 커피 이름
    private int ml;         // 커피 정량

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getMl() {
        return ml;
    }

    public void setMl(int ml) {
        this.ml = ml;
    }

    public void print() {
        System.out.println("커피 이름: "+this.name+" 용량: "+this.ml);
    }
}

class Latte extends Coffee {
    private int milk;       // 우유 투입량

    public int getMilk() {
        return milk;
    }

    public void setMilk(int milk) {
        this.milk = milk;
    }
    @Override
    public void print(){
        System.out.println("커피 이름: "+this.getName()
                +" 용량: "+this.getMl()
                +" 우유량: "+this.milk);
    }
}

public class Review {
    public static void main(String[] args) {
        Coffee coffee = new Coffee();
        Latte latte = new Latte();

        coffee.setName("아메리카노");
        coffee.setMl(750);
        coffee.print();
        latte.setName("카페라떼");
        latte.setMl(750);
        latte.setMilk(500);
        latte.print();


    }
}
