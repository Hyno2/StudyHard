import java.util.Scanner;

// 멤버 변수의 구성을 확인후, 상속 관계 적절히 설정해보아라)
// Character 클래스
class Character {
    // 필드 : name(이름), hp(체력)
    private String name;
    private int hp;

    // 생성자 선언
    public Character(String n, int hp) {
        this.name = n;
        this.hp = hp;
    }

    // getter setter 선언
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getHp() {
        return hp;
    }

    public void setHp(int hp) {
        this.hp = hp;
    }

    // 메소드 : status() -> 각 멤버 변수 자유롭게 출력
    public void status() {
        System.out.println("이름: " + this.name);
        System.out.println("HP: " + this.hp);
    }

    // isOkay() -> "구체화가 필요한 함수입니다." 출력
    public void isOkay() {
        System.out.println("구체화가 필요한 함수입니다.");
    }
}

// Npc 클래스
class Npc extends Character {
    //  필드 : name, hp, role(역활)
    private String role;
    // 생성자 선언
    public Npc(String n, int hp, String role) {
        super(n, hp);
        this.role = role;
    }

    //  메소드 : status() -> 각 멤버 변수 자유롭게 출력
    public void status() {
        System.out.println("이름: " + this.getName());
        System.out.println("HP: " + this.getHp());
        System.out.println("역활: " + this.role);
    }

    // isOkay()
    public void isOkay() {
        //  hp값이 0이라면
        if (this.getHp() == 0) {
            //  "[npc 이름]의 hp가 0입니다
            //  "퀘스트를 실패하였습니다." 출력
            System.out.println(this.getName() + "의 hp가 0입니다.");
            System.out.println("퀘스트를 실패하였습니다.");
        }
        //  hp값이 0 초과라면, "[npc 이름]을 잘 지켜내었습니다.
        else if (this.getHp() > 0) {
            // "퀘스트를 성공하였습니다." 출력
            System.out.println(this.getName() + "을 잘 지켜내었습니다.");
            System.out.println("퀘스트를 성공하였습니다.");
        }
    }
}

// User 클래스
class User extends Character {
    //필드 : name, hp, mp(마나), weapon(무기) potion(포션 갯수)
    private int mp;
    private String weapon;
    private int potion;
    private double damage;

    public User(String n, int hp, int mp, String w,int p) {
        super(n, hp);
        this.mp = mp;
        this.weapon = w;
        this.potion = p;
    }

    //  메소드 status() -> 각 멤버 변수 자유롭게 출력
    public void status() {
        System.out.println("이름: " + this.getName());
        System.out.println("HP: " + this.getHp());
        System.out.println("MP: " + this.mp);
        System.out.println("무기: " + this.weapon);
        System.out.println("무기 데미지: "+this.damage);
        System.out.println("포션: "+ this.potion);
    }

    // isOkay() ->
    public void isOkay() {
        // hp가 50이상이라면 "hp 양호합니다." 출력
        if (this.getHp() >= 50) {
            System.out.println("hp 양호합니다.");
        }
        // hp가 1~49라면
        else if (this.getHp() >= 1 && this.getHp() < 50) {
            // "hp 관리가 필요합니다. 보유중인 포션이
            //  있다면 섭취하시길 바랍니다." 출력
            System.out.println("hp 관리가 필요합니다.");
            System.out.println("보유중인 포션이 있다면 섭취하시길 바랍니다.");
        }
        // hp가 0이라면
        else if (this.getHp() <= 0) {
            //  "hp가 0이 되었습니다. 근처 마을로 귀한
            //  합니다." 출력
            System.out.println("hp가 0이 되었습니다.");
            System.out.println("근처 마을로 귀환합니다.");
        }
    }
    // fillHp -> hp가 30이하라면 포션을 먹어서 60을 채우는 메소드
    public void fillHp(){
        int usePotion = 1;
        if(this.getHp() > 0 && this.getHp() <= 30){
            System.out.println("포션을 1개 사용해 Hp를 회복합니다.");
            this.potion -= usePotion;
            this.setHp(this.getHp()+30);
            System.out.println(getName()+"의 HP: "+this.getHp());
            System.out.println(getName()+"의 남은 포션: "+this.potion);
        }
    }

    // selectWeapon 무기종류 정하고 데미지설정
    public void selectWeapon(){
        if(this.weapon.equals("활")){
            this.damage = 60;

        }else if(this.weapon.equals("창")){
            this.damage = 80;

        }else if(this.weapon.equals("칼")){
            this.damage = 100;
        }

    }
}

public class Test1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
//  main 명령어

// user 클래스에 대해 hero 객체 생성 (입력받아서 각 필드 초기화)
        System.out.println("Hero 이름, Hp, mp, 무기(활,창,칼)을 입력해주세요.");
        User hero = new User(sc.next(), sc.nextInt(), sc.nextInt(), sc.next(),5);

// npc 클래스에 대해 철수, 영희 객체 생성 (입력받아서 각 멤버변수 초기화)
        System.out.println("Npc 철수의 hp, 역활을 입력해주세요.");
        Npc 철수 = new Npc("철수", sc.nextInt(), sc.next());
        System.out.println("Npc 영희의 hp, 역활을 입력해주세요.");
        Npc 영희 = new Npc("영희", sc.nextInt(), sc.next());

// 각 객체에 대해, status() 및 isOkay() 함수 호출하기
        System.out.println();
        System.out.println(hero.getName());
        hero.selectWeapon();
        hero.status();
        hero.isOkay();
        hero.fillHp();

        System.out.println();
        System.out.println(철수.getName());
        철수.status();
        철수.isOkay();

        System.out.println();
        System.out.println(영희.getName());
        영희.status();
        영희.isOkay();
    }
}
