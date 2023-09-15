package com.kb;

import java.util.List;

public class BaseBallGame {
    //    private int ques1;
    //    private int ques2;
    //    private int ques3;
    private List<Integer> questions;

    // 임의의 숫자를 할땐 생성자에 넣지마라
    //    private int ans1;
    //    private int ans2;
    //    private int ans3;
    private List<Integer> answers;

    private Setting setting;

    public void initSetting(Setting setting) {
        this.setting = setting;
    }

    // 정답 메소드
    public void setAnswers() {
        for (int i = 0; i < this.setting.getAnswerCount(); i++) {
            if (i != 0) {
                while (true) {
                    for (Integer setAnswer : this.answers) {
                        if (setAnswer != answers) {

                        }
                    }
                }
            }
            int answer = ((int) (Math.random() * 8)) + 1;
            answers.add(answer);
        }

    }

    // boolean 함수는 is,inValid,valid로 명을 많이쓴다

    public boolean isValidAnswer() {
        // 입력 받을때 초기화 한다
        int strike = 0;
        int ball = 0;
        // 스트라이크, 볼 판별
        // 만약 this.ques1 == this.ans1  이라면
        // - strike++
        // 아니라면
        // -만약  this.ques1 == this.ans2 || this.ques1 == this.ans3 이라면
        // -- ball++
        if (this.ques1 == this.ans1) {
            strike++;
        } else if (this.ques1 == this.ans2
                || this.ques1 == this.ans3) {
            ball++;
        }
        // 만약 this.ques2 == this.ans2  이라면
        // - strike++
        // 아니라면
        // -만약  this.ques2 == this.ans1 || this.ques2 == this.ans3 이라면
        // -- ball++
        if (this.ques2 == this.ans2) {
            strike++;
        } else if (this.ques2 == this.ans1
                || this.ques2 == this.ans3) {
            ball++;
        }
        // 만약 this.ques3 == this.ans3  이라면
        // - strike++
        // 아니라면
        // -만약  this.ques3 == this.ans1 || this.ques3 == this.ans2 이라면
        // -- ball++
        if (this.ques3 == this.ans3) {
            strike++;
        } else if (this.ques3 == this.ans1
                || this.ques3 == this.ans2) {
            ball++;
        }
        System.out.println("스트라이크 : " + strike);
        System.out.println("볼 : " + ball);

        // 3함 연산자 3이 true냐 false냐
        return strike == 3 ? true : false;
    }

    // getter setter 는 젤 밑으로 private이라 씀

}
