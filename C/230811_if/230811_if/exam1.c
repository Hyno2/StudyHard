#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	//관계연산자, 논리연산자가 if문의 조건으로 많이 사용
	
	//Test 1 1개의 숫자를 입력받아서 짝수, 홀수인지 체크하는 프로그램 작성
	//나머지 연산자 활용
	int num1; // 정수형 변수 선언!
	printf("숫자입력:"); 
	scanf("%d", &num1); //키보드를 데이터에 입력받아 번수 num1에 저장
	if (num1%2==0) {
		printf("짝수\n");
	}
	else {
		printf("홀수\n");
	}
	
	//Test 2 2개의 숫자를 입력받아서 크가,작다,같다를 체크하는 프로그램 작성
	int a;
	int b;
	printf("숫자1:");
	scanf("%d", &a);
	printf("숫자2:");
	scanf("%d", &b);
	if (a > b) {
		printf("숫자1은 숫자2보다 크다.");
	}
	else if (a < b) {
		printf("숫자1은 숫자2보다 작다.");
	}
	else {
		printf("숫자1은 숫자2과 같다.");
	}
	printf("\n\n");
	//Test 3 국어, 영어, 수학 점수를 입력받아서 총점, 평균, 학점을 구하는 프로그램작성
	// 학점: 100~90:A학점, 89~80:B학점 79~70:C학점 69~60:D학점 59~0:F학점
	//if(num >=90 && num <=100) 범위는 이렇게쓰면댐
	int kor, eng, math, j, p;
	printf("국어:");
	scanf("%d", &kor);
	printf("영어:");
	scanf("%d", &eng);
	printf("수학:");
	scanf("%d", &math);

	j = kor + eng + math;
	p = j / 3;
	printf("총점:%d ", j);
	printf("평균:%d\n", p);
	if (j >= 90 && j <=  100) { // 범위를 표기하는방법은 비교연산자 사이에 논리연산자 넣는방법 뿐이다.
		printf("학점:A ");
	}
	else if (j >= 80 && j <= 89) {
		printf("학점:B ");
	}
	else if (j >= 70 && j <= 79) {
		printf("학점:C ");
	}
	else if (j >= 60 && j <= 69) {
		printf("학점:D ");
	}
	else {
		printf("학점:F ");
	}
	

}