#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	int total = 0;
	printf("0���� num������ ����, num�� ? ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		total += i; // = total = total + i �հ豸�ϴ°�
	}
	printf("0���� %d���� �������: %d\n", num, total);
	
}