#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()
							// 학생 5명의 국,영,수 점수와 총점,평균,학점을 정의하는 구조체
struct student         // 1명에 대한 정의(틀)
{
	int kor; // 국어
	int eng; // 영어
	int math; // 수학
	int hap; // 총점
	int avg; // 평균
	char hak[20]; // 학점
	char name[20]; // 이름
};

int main()
{	// 1. 구조체를 정의하고 구조체 배열 변수 선언
	struct student arr[5] = { 0 };
	
	// 2. 5명의 학생에게 랜덤한 국,영,수 점수를 입력하고 출력
	int s[] = { 10,20,30,40,50,60,70,80,90,100 };
	srand(time(NULL));	// 매번 다른 시드값 생성
	int random = 0;	// 난수를 저장할 변수
	for (int i = 0; i < 5; i++) { // 5회 반복
		arr[i].kor = s[rand() % 10]; // 난수 생성 0 ~ 100까지
		arr[i].eng = s[rand() % 10];
		arr[i].math = s[rand() % 10];

		printf("국어:%d\t", arr[i].kor);
		printf("영어:%d\t", arr[i].eng);
		printf("수학:%d\t", arr[i].math);

		arr[i].hap = arr[i].kor + arr[i].eng + arr[i].math;

		printf("총점:%d\t", arr[i].hap);

		arr[i].avg = arr[i].hap / 3;

		printf("평균:%d\t", arr[i].avg);

		for (int i = 0; i < 5; i++) {
			if (arr[i].avg <= 100 && arr[i].avg >= 90) {
				printf("학점:A");
			}
			else if (arr[i].avg <= 89 && arr[i].avg >= 80) {
				printf("학점:B");
			}
			else if (arr[i].avg <= 79 && arr[i].avg >= 70) {
				printf("학점:C");
			}
			else if (arr[i].avg <= 69 && arr[i].avg >= 60) {
				printf("학점:D");
			}
			else {
				printf("학점:F");
			}
		printf("\n");
	}
	
}