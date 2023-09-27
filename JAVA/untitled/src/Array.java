import java.util.*; // *붙이면 util에 들어있는거 다포함한다

public class Array {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // 배열 : 동일한 자료형으로 여러 공간 갖고 있는 변수
        // 배열 선언

        // 1. 초기화하며 선언
        // (자료형 (배열명)[] = {초기화할 값};
        double arr[] = {11.1, 22.2, 33.3};
        char ch[] = {'a', 'b', 'c', 'd'};
        String st[] = {"abcdefg"};


        // 2. 크기 지정하여 선언
        // (자료형) (배열명)[] = new (자료형) [배열크기];
        int alpha[] = new int[26];

        // ex1) : 학생 수(n)와 각 학생의 키를 입력받고, 평균을 출력하라
        // 1. 학생 수 입력받기
        int n = scanner.nextInt();

        // 2. 학생들의 키를 입력받기
        double key[] = new double[n];

        for (int i = 0; i < n; i++) {
            key[i] = scanner.nextDouble();
        }

        // 3. 평균을 구하기 위한 총합 구하기
        double sum = 0;
        for (int i = 0; i < n; i++) {
            sum += key[i];
        }

        // 4. 평균 출력
        System.out.println("평균 : " + sum / n);
    }
}