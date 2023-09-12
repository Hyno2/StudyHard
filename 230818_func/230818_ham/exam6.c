#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h> // exit()쓰려면 써야함 
void Score(int kor, int eng, int math)
{
	int j = kor + eng + math;
	int p = j / 3;
	printf("총점:%d", j);
	printf("평균:%d", p);
}

int main()
{
	// test 6
	// 국,영,수 점수를 입력받아서 총점, 평균값을 구하는 프로그램
	// 조건1) 점수 입력은 main()에서 입력 받음
	// 조건2) 입력받는 점수는 0~100 사이의 숫자만 입력받도록 조건 체크하기
			//---> 간단하게 한번만 체크하면 됨(사용자가 실수로 잘못입력하면 에러메세지 출력후 종료 처리)
	// 조건3) 국,영,수 점수를 각각의 매개변수로 전달하여 총점, 평균값을 출력하는 메쏘드 작성
	// 조건4) 조건 3까지 테스트 완료 이후에 잘못입력값 체크를 확장하기(실수로 입력하면 재입력 받을수 있도록 처리)
	int kor;
	int eng, math;
	
	printf("국어점수:");
	scanf("%d", &kor);
	if (kor < 0 || kor > 100) {
		printf("ERROR!");
		printf("다시입력하세요");
		scanf("%d", &kor);
		}
	
	printf("영어점수:");
	scanf("%d", &eng);

	if (eng < 0 || eng > 100) {
		printf("ERROR!");
		printf("다시입력하세요");
		scanf("%d", &eng);
		
	}

	printf("수학점수:");
	scanf("%d", &math);

	if (math < 0 || math > 100) {
		printf("ERROR!");
		printf("다시입력하세요");
		scanf("%d", &math);
	}
	
	Score(kor, eng, math);



}