public class MethodTest {
    public static void main(String[] args) {
        int age = getMyAge(20, "이현오"); // 메소드 호출할 때 ()안에는 아규먼트(파라메터)라고 한다 갯수와 형태가 같아야한다
        System.out.println(age);
    }
    // public ,private == 접근지시자 메소드명은 카멜표기법,동사형으로
    public static int getMyAge(int age, String name){ // 돌려줄땐 주로 get 많이쓴다 함 ()안에 있는 것은 파라메터라고 한다
        String name1 = "이현오";
        return age; // 리턴 값은 한개만 가능하다 여러개 리턴하기 위해서는 클래스를 리턴해서 하면된다
    }

    public  static  int getMyAge(int age){
        return age;
    }
}
