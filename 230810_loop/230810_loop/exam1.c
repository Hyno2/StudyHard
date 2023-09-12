#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 1. 1개의 숫자를 입력받아 구구단 출력하는 프로그램.
	// ex) 3을 입력하면 구구단 3단 출력
	int dan=0;
	printf("몇 단?");
	scanf("%d", &dan);
	for (int i = 1; i < 10; i++)
	{
		printf("%dx%d=%d\n", dan, i,dan*i);
		
	}
	// 2. 시작값과 마지막값을 입력받아 합을 구하는 프로그램.
	// ex) 1번째 입력:2, 2번째 입력:5 2+3+4+5 = 14
	// 조건) 만약에 2번째 수가 1번째 수보다 작거나 같으면 다시 입력.

	int n1, n2, total = 0; //n1 시작값정의 n2 마지막값정의
		printf("시작값:");
		scanf("%d", &n1);
		do {
			printf("마지막값:"); // n2가 n1보다 큰경우 탈출한다. 그전까지는 다시 마지막 값을 다시 반복입력
			scanf("%d", &n2);
		} while (n2 <= n1);

		for (int i = n1; i <=n2;i++) //int i에 시작값을 정의시켜버린다
		{
			total = total + i; // total += i;
		}
		printf("%d~%d까지의 합:%d\n",n1,n2,total);

	// 3. 구구단 전체 출력. (2~9단 출력)
	// 조건) 2x1=2 3x1=3 4x1=4 .... 9x1=9
	//      2x2=4 3x2=6 4x2=8 .... 9x2=18
	//      ....
	//      2x9=18 3x9=27 4x9=36....9x9=81

	for(int cur = 1; cur < 10; cur++) // 가로로나오길원할때 숫자변수 먼저쓴다
	{
		for (int is = 2; is < 10; is++) // 단 변수으로쓰고 
		{
			printf("%dx%d=%d\t", is, cur, cur * is); // \t = 줄맞춤 해줌 
		}
		printf("\n");
	}


	printf("구구단입력:");
	int gugu;
	scanf("%d", &gugu);

	printf("%dx%d=%d\n", gugu, 1, gugu*1);
	printf("%dx%d=%d\n", gugu, 2, gugu*2);
	printf("%dx%d=%d\n", gugu, 3, gugu*3);
	printf("%dx%d=%d\n", gugu, 4, gugu*4);
	printf("%dx%d=%d\n", gugu, 5, gugu*5);
	printf("%dx%d=%d\n", gugu, 6, gugu*6);
	printf("%dx%d=%d\n", gugu, 7, gugu*7);
	printf("%dx%d=%d\n", gugu, 8, gugu*8);
	printf("%dx%d=%d\n", gugu, 9, gugu*9);
	printf("-------------------------\n");
	for (int i = 2; i< 10; i=i+1) // i+=1 와같다  / i= i+1를하면 1 3 5 7 9 이런식으로나옴 , i=2로하고 i+=1하면 2 4 6 8나옴
	{
		printf("%dx%d=%d\n", gugu, i, gugu * i);
		i++;
	}
}