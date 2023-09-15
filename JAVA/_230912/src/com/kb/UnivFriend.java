package com.kb;

public class UnivFriend extends Friend {   // 클래스명은 대문자로 시작
    // 멤버변수 외부 접근을 막기위해 멤버변수는 private으로 사용
   // String형 전공
    private String major;

    // 생성자 파라메터 3개 : 이름, 전공, 전화번호 this는 멤버변수라는걸 알려주기 위해 사용
    public UnivFriend(String name, String major, String phone) {
        super(name, phone); // super은 젤 위에 있어야 하고 파라메터가 참조하는 상위클래스 순서대로 있어야 한다
        this.major = major;
    }
    /** 메소드 생성자는 아래 방법 실무에서 많이씀
     * method name : showInfo
     * access : public
     * params : none
     * return : void
     * description :  전공 출력
     * author : hoLee
     * make date : 2023. 09. 11
     * update history
     */
    @Override
    public void showInfo() {
        super.showInfo();   // Friend클래스에 showInfo 메소드
        System.out.println("전공 : "+major);
    }
}
