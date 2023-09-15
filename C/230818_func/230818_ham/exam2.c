#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void show_day(int n)
{
	switch (n) {
	case 1:
		printf("월요일\n"); break;
	case 2:
		printf("화요일\n"); break;
	case 3:
		printf("수요일\n"); break;
	case 4:
		printf("목요일\n"); break;
	case 5:
		printf("금요일\n"); break;
	case 6:
		printf("토요일\n"); break;
	case 7:
		printf("일요일\n"); break;
	}
	
}

int main()
{
	// main()에서 1~7 사이의 숫자를 입력 받아서
	// 매개변수로 전달하여 매개변수의 값이
	// 1이면, 월요일 출력.
	// 2이면, 화요일 출력.
	// ...
	// 7이면, 일요일 출력하는 함수 작성
	printf("요일 입력(1:월요일 2:화요일 ~ 7:일요일=>");
	int day;
	scanf("%d", &day);
	show_day(day);
	
	}
	