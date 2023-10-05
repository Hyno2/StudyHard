import java.util.Scanner;

public class OverLoading {
    // 오버로딩 : (함수에 적용되는 개념)
    // 매개변수 구성이 다르다면, 함수명을 같게 하여도 함께 사용할 수 있다.
    public static int sum(){
        return 1+1;
    }
    public static int sum(int a){
        return a+1;
    }
    public static int sum(int a,int b){
        return a+b;
    }

    public static void main(String[] args) {


    }
}
