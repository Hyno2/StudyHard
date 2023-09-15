package com.kb;

public class CompFriend extends Friend {// 클래스명 대문자시작
    // 멤버변수

    // String형 부서
    private String department;

    // 생성자 파라메터 3개 : 이름 부서 번호
    public CompFriend(String name, String department, String phone) {
        super(name, phone); // super은 젤 위에 있어야 한다 파라메터가 참조하는 상위클래스 순서대로 있어야 한다
        this.department = department;
    }

    /**
     * method name : showInfo()
     * access : public
     * params : None
     * return : void
     * description : 부서 출력
     * author : hoLee
     * make date : 2023. 09. 13
     * update history
     */
    @Override
    public void showInfo() {
        super.showInfo();   // Friend클래스에 showInfo 메소드
        System.out.println("부서 : " + this.department);
    }

}
