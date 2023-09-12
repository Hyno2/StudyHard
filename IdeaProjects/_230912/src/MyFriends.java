import com.kb.UnivFriend;
import com.kb.CompFriend;


public class MyFriends {
    public static void main(String[] args) {
        UnivFriend[] ufrns = new UnivFriend[5]; // 클래스를 배열로 ufrns 이름으로 객체를 생성 하는데 그 객체는 클래스[5]를 의미한다
        int ucnt = 0;   // ufrns객체의 배열 갯수를 증가 시키기 위해 변수 정의

        CompFriend[] cfrns = new CompFriend[5]; //
        int ccnt = 0;   // cfrns객체의 배열 갯수를 증가 시키기 위해 변수 정의

        ufrns[ucnt++] = new UnivFriend("lee", "computer", "01000005555");       // ufrns[0] = 생성자 호출 값대입
        ufrns[ucnt++] = new UnivFriend("seo", "electronics", "01011115555");    // ufrns[1] = 생성자 호출 값대입

        cfrns[ccnt++] = new CompFriend("yoon", "r&d 1", "01022225555");     // cfrns[0] = 생성자 호출 값대입
        cfrns[ccnt++] = new CompFriend("ha", "r&d 2", "01033335555");       // cfrns[1] = 생성자 호출 값대입

        for(int i = 0; i < ucnt; i++) { // 배열 출력을 위해 반복문 사용 i < ucnt==0,1 총 2번 출력된다
            ufrns[i].showInfo();        // [i==2회]. ufrns 객체는 UnivFriend의 클래스 값을 참조하므로 UnivFriend 의 메소드 showInfo실행
        }

        for(int i = 0; i < ccnt; i++) {
            cfrns[i].showInfo();    // cfrns 객체는 CompFriend의 클래스 값을 참조하므로 CompFriend 의 메소드 showInfo 실행
        }

    }
}
