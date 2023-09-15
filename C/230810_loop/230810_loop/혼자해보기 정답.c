#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// Test 1 while문으로 입력하여 구구단 만들어보기
	int dan = 0; // while문은 int 변수로 먼저 정의해준다
	int num = 1;
	printf("몇 단?");
	scanf("%d", &dan);
	while (num < 10)
	{
		printf("%dx%d=%d\n", dan, num, dan * num);
		num++;
	}
	// test 2 while문 중첩으로 1단부터 9단 구구단나열하기 
	int a = 1;
	int b = 0;
	printf("구구단\n");
	while (a < 10)
	{
		b = 1;
		while (b < 10)
		{
			printf("%dx%d=%d\n", a, b, a * b);
			b++;
		}
		a++;
	}

	// test 3 do while문으로 정수는입력0 to quit 합계 출력해보기

	// test 4 for문 0부터 num 덧셈결과를 출력하기 num은 입력

	// test 5 for문 중첩으로 1단부터 9단 구구단 만들기

	// test 6 시작값과 마지막값을 입력받아 합을 구하는 프로그램.
	// ex) 1번째 입력:2, 2번째 입력:5 2+3+4+5 = 14
	// 조건) 만약에 2번째 수가 1번째 수보다 작거나 같으면 다시 입력.
	
	int start, end;
	printf("시작값");
	scanf("%d", &start);
	int backup = start;
	//printf("마지막값"); //간결하게하려면 do while 문 써야함
	//scanf("%d", &end);
	//while (end <= start) // while 문 쓰려면 이렇게 해야함
	//{
	//	printf("마지막값");
	//	scanf("%d", &end);
	//}
	do
	{
		printf("마지막값");
		scanf("%d", &end);
	} while (end <= start);

	int total = 0;
	//for (; start <= end; start++) 이렇게 해도댐
	for (int i = start; i <= end; i++)
	{
		total = total + i;
	}
	printf("%d ~ %d의 합:%d\n", backup, end, total);


	// test 7 구구단 전체 출력. (2~9단 출력)
	// 조건) 2x1=2 3x1=3 4x1=4 .... 9x1=9
	//      2x2=4 3x2=6 4x2=8 .... 9x2=18
	//      ....
	//      2x9=18 3x9=27 4x9=36....9x9=81

	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			printf("%dx%d=%d\t", j, i, j * i);
		}
		printf("\n");
	}



	// test 8 구구단 입력으로 하고 홀수값만 나오게하기 ex)1x3 1x5 1x7 1x9











}