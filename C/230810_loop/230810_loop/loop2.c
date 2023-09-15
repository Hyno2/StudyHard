#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dan = 0, num = 1;
	printf("몇 단? ");
	scanf("%d", &dan); // dan 은 입력을 위한 변수

	while (num < 10) // while(1)일 경우 : 무한루프한다 숫자1이 참을 의미하므로
	{
		printf("%dx%d=%d\n", dan, num, dan * num);
		num++; // 9까지 계속 1씩 증가 하여 반복 출력 한다.

	}




}