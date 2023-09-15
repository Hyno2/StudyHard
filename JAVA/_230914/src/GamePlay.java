import com.kb.BaseBallGame;
import com.kb.Input;
import com.kb.Setting;

import java.util.Scanner;

import static com.kb.Constants.*;

public class GamePlay {
    public static void main(String[] args) {
        // 입력
        Scanner scanner = new Scanner(System.in);

        // 입력 받기 위한 객체 선언
        Input myInput = new Input();

        // setting 객체 생성
        Setting setting = new Setting();

        // 정답 개수 입력
        String answerCount = myInput.inputFromUser(MSG_ANSWER_INPUT,scanner);
        setting.setAnswerCount(Integer.parseInt(answerCount));

        // 게임 횟수 입력
        String inputLimit = myInput.inputFromUser(MSG_PLAY_INPUT,scanner);
        setting.setInputLimit(Integer.parseInt(inputLimit));


        // 플래그 세우기 적절하게 킬링 포인트로 사용해야한다 많이 쓰면 힘들어진다
        boolean gameComplete = false;

        BaseBallGame data = new BaseBallGame();
        // 초기화
        data.initSetting(setting);

        // 정답 3개
        data.setAnswers();

        // 9번 반복해라
        for (int i = 0; i < setting.getInputLimit(); i++) {

            // 입력 3개
            // 1. getter setter 멤버변수 정의해서 다시 넘겨주거나
            // 2. 매개변수 1 , 2 , 3으로해서 메소드안에 if문으로 해준다
            // 위의 두 방법은 의존성이 생겨서 범용성이 떨어진다
            int question1 = Integer.parseInt(myInput.inputFromUser(MSG_FIRST_INPUT, scanner));
            data.setQues1(question1);
            int question2 = Integer.parseInt(myInput.inputFromUser(MSG_SECOND_INPUT, scanner));
            data.setQues2(question2);
            int question3 = Integer.parseInt(myInput.inputFromUser(MSG_THIRD_INPUT, scanner));
            data.setQues3(question3);
            // data.setQues3(Integer.parseInt(myInput.inputFromUser("세번째 숫자 입력", scanner))); 이거랑같음
            // String input3 = myInput.inputFromUser("세번째 숫자 입력", scanner);
            //

            // 스트라이크, 볼 판별
            gameComplete = data.isValidAnswer();
            if (gameComplete) {
                break;
            }
        }

        // 결과 출력
        if (gameComplete) {
            System.out.println(MSG_COLLECT);
        } else {
            System.out.println(MSG_COLLECT_CHECK + data.getAns1() + "," + data.getAns1() + "," + data.getAns3());
        }
    }
}
