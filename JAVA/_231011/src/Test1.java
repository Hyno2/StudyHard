import java.util.Scanner;

//Character 인터페이스 작성
interface Character {
    //         메소드 : attack()
    public void attack();

    //        minus(int)
    public void minus(int m);
}

// User 클래스 작성
class User implements Character {
    // 필드 :  hp, =100 mp =100 , 공격력(hit), 방어력(defense)
    private int hp = 100;
    private int mp = 100;
    private int hit;
    private int defense;

    public int getHit() {
        return hit;
    }

    public int getDefense() {
        return defense;
    }

    public User(int h, int def) {
        this.hit = h;
        this.defense = def;
    }

    public int getHp() {
        return hp;
    }

    public int getMp() {
        return mp;
    }

    //        메소드 : attack() -> mp 10을 사용하여(상대 공격)
    @Override
    public void attack() {
        this.mp -= 10;
// (데미지를 줬다는 것을 출력함과 동시에 남은 User mp를 출력)
        System.out.println("적에게 데미지를 입혔습니다.");
        System.out.println("남은 User mp: " + this.mp);
    }
    // minus(int) ->
    @Override
    public void minus(int userHit) {
        // 매개변수 값의 1/defense 값만큼 hp 감소
        int attack = userHit / this.defense;
        this.hp -= attack;
        //   => 데미지를 받았다는 것을 출력함과 동시에, 남은 User hp 출력
        System.out.println("공격 받았습니다!");
        System.out.println("남은 User hp: " + this.hp);
    }
}
public class Test1 {
    public static void main(String[] args) {
// main에서 작성할 것
        Scanner scan = new Scanner(System.in);

//  User 객체 user1,user2 생성(입력을 통한 멤버초기화)
        System.out.println("user1의 공격력, 방어력을 입력 해주세요");
        User user1 = new User(scan.nextInt(), scan.nextInt());
        System.out.println("user2의 공격력, 방어력을 입력 해주세요");
        User user2 = new User(scan.nextInt(), scan.nextInt());

// 각입력에따라 누가 대결에서 승리하는지를 출력하도록하라
// user1을 시작으로 하여 user1과 user2가 서로 공격을 시도한다.
        System.out.println("전투 시작!");
        while (user1.getMp() != 0 && user2.getMp() != 0) { // user1,2 mp가 0이 아닐경우에만 반복전투해라

            if(user1.getMp() == 0 ){
                System.out.println("Mp가 부족해 공격불가");
                break;
            }
            else if (user2.getMp() == 0 ) {
                System.out.println("Mp가 부족해 공격불가");
                break;
            }
            System.out.println("user1 공격");
            user1.attack();
            System.out.println("user2 수비");
            user2.minus(user1.getHit());
            // 전투진행중 어느 한쪽의 hp가 모두 소모되면 승부가 결정된다
            if (user2.getHp() <= 0) {
                System.out.println("user1 승리!");
                break;
            }
            System.out.println("user2 공격");
            user2.attack();
            System.out.println("user1 수비");
            user1.minus(user2.getHit());
            // 전투진행중 어느 한쪽의 hp가 모두 소모되면 승부가 결정된다
            if (user1.getHp() <= 0) {
                System.out.println("user2 승리!");
                break;
            }
        }
// 만약 두 유저 모두 mp가 떨어졌다면, 남은 hp가 가장 많은쪽이 우승한다.
// (hp 값이 같다면, 무승부 처리)
        if (user1.getMp() == 0 && user2.getMp() == 0) {
            if (user1.getHp() > user2.getHp()) {
                System.out.println("치열한 승부 끝에 user1 승리!");
            } else if (user1.getHp() < user2.getHp()) {
                System.out.println("치열한 승부 끝에 user2 승리!");
            } else if (user1.getHp() == user2.getHp()) {
                System.out.println("치열한 승부 끝에 무승부!");
            }
        }
    }
}

