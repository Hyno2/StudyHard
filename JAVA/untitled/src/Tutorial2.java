import java.util.Scanner;

public class Tutorial2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // 이름
        String name = scanner.nextLine();
        System.out.println("이름 : " + name);

        // 나이
        int age = scanner.nextInt();
        System.out.println("나이 : " + age + "세");

        // 혈액형
        char blood = scanner.next().charAt(0);
        System.out.println("혈액형 : " + blood + "형");

        // 키
        double height = scanner.nextDouble();
        System.out.println("키 : " + height + "cm");

        // 자기소개
        scanner.nextLine(); // 입력 간 충돌을 위해, 엔터값을 먹여주는 입력값 작성
        String introdu = scanner.nextLine();
        System.out.println("자기소개 : " + introdu);

    }
}
