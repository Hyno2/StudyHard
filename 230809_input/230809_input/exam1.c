#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//1. 원주율PI를 저장하는 실수형 상수 변수를 생성하고 값을 설정(PI=3.14)
	//2. 원의 반지름을 저장하는 실수형 변수를 생성하고 입력 받기
	//3. 원의 면적을 출력하기(반지름 * 반지름 * PI = 원의 면적)
	const float PI = 3.14;
	float r;

	printf("반지름:");
	scanf("%f", &r);

	float t = r * r * PI;
	printf("원의 면적:%f\n\n", t);

	// 1. 국어, 영어, 수학, 과학 정수형 변수 생성
	// 2. 국어, 영어, 수학, 과학 점수 입력 받기
	// 3. 모든 과목의 평균값과 총점을 저장할 변수를 생성
	// 4. 평균값과 총점을 출력
	
	int kor;
	int eng;
	int math;
	int sci;

	printf("국어:");
	scanf("%d", &kor);
	printf("영어:");
	scanf("%d", &eng);
	printf("수학:");
	scanf("%d", &math);
	printf("과학:");
	scanf("%d", &sci);

	int T = kor + eng + math + sci;
	int avg = T / 4;
	printf("총점:%d\n",T);
	printf("평균값:%d\n\n",avg);

	// 1.화씨 온도를 저장하는 정수형 변수 생성
	// 2.화씨 온도를 입력 받기
	// 3.섭씨 온도를 저장하는 실수형 변수 생성
	// 4.화씨 온도를 섭씨 온도로 변환하세요 섭씨온도=(화씨온도 - 32) / 1.8
	// 5.섭씨 온도를 출력

	int hwa;
	float sup;
	printf("화씨온도:");
	scanf("%d", &hwa);

	sup = (hwa - 32) / 1.8;
	printf("섭씨온도:%f", sup);



}