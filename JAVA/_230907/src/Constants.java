public class Constants {    // 상수
                            // 클래스는 스펙과 기능을 가지고 있다
                            // 스펙 명사=변수 기능 동사=메소드
                            // 고로 클래스는 변수와 메소드(함수)를 가지고 있다.
                            // class 안의 변수는 멤버변수 필드라고 불린다
                            // class 안의 변수는 데이터 값이 없다!
    public static void main(String[] args) {
        final int ORDER_COMPLETE = 1;
        final int ITEM_DELIVERING = 2;
        final int DELIVERY_complete = 3;

        // 주문 완료 order_complete = 1

        // 배송 중 item_delivering = 2

        // 배송 완료 delivery_complete  = 3
        int a = 7;
        int b = 2;
        System.out.println((double) a / b);   // 형 변환

        long c = 99999999999999L;   // long을 int로 형 변환은 어렵다
        int d = (int) c;

        System.out.println(d);
    }
}