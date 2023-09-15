#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
				//이중 반복문 : 알고리즘 상 좋진않으나 쓸때도 있다
int main()
{
	int cur = 1; // 바깥쪽 반복문 횟수 제어
	int is = 0; // 안쪽 반복문 횟수 제어
	printf("구구단\n");

	while (cur < 10) // cur 2부터 9까지 반복해라
	{
		is = 1; //새로운 단의 시작을 위해 
		while (is < 10) // is 1부터 9까지 반복해라
		{
			printf("%dx%d=%d\n", cur, is, cur * is);
			is++;
		}

		cur++;
	}



}