#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	int total = 0;
	printf("0부터 num까지의 덧셈, num은 ? ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		total += i; // = total = total + i 합계구하는것
	}
	printf("0부터 %d까지 덧셈결과: %d\n", num, total);
	
}