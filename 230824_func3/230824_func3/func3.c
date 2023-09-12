#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
void show_hap()
{
		
}
int show_avg(int hap)
{
	return hap / 3;
}
char show_hak(int avg)
{
	char hak = '0';
	if (avg >= 90 && avg <= 100) {
		printf("학점=A");
	}
	else if (avg >= 80 && avg <= 89) {
		printf("학점=B");
	}
	else if (avg >= 70 && avg <= 79) {
		printf("학점=C");
	}
	else if (avg >= 60 && avg <= 69) {
		printf("학점=D");
	}
	else {
		printf("학점=F");
		return hak;
	}
}

	int main()
	{	// 구조체(클래스와 비슷)를 사용하여 처리하는것이 더 좋음 실무에선 구조체 사용함
		// 5명의 국,영,수 점수를 랜덤하게 생성 (0 ~ 100)
		int score[5][3] = { 0 }; // 배열 변수 선언
		int hap = 0;			 // 총점 변수
		int avg = 0;				 // 평균 변수
		srand(time(NULL));	// 매번 다른 시드값 생성

		// 랜덤하게 발생한 숫자를 5명의 학생에게 저장
		for (int i = 0; i < 5; i++) {
			hap = 0; // hap을 초기화 다시 시켜줘야 중첩 되지 않는다.
			avg = 0;
			for (int j = 0; j < 3; j++) {
				score[i][j] = (rand() % 101); //0~100까지
				printf("score[%d][%d]=%d\t", i, j, score[i][j]);
				// 5명 학생의 각각의 총점 평균 학점을 구하라
				hap = hap + score[i][j]; // hap += score[i][j]]
				avg = hap / 3;	
			} // 열이 끝나는 위치
			avg = show_avg(hap);
			printf("총점:%d\t", hap);
			//hap = 0 ; 여기다 초기화 해도댐
			printf("평균:%d\t", show_avg(hap));
			//p = 0; 여기다 초기화 해도댐
			printf("학점:%c\t", show_hak(avg));
		}
		printf("\n");
	}
