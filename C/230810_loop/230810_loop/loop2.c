#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dan = 0, num = 1;
	printf("�� ��? ");
	scanf("%d", &dan); // dan �� �Է��� ���� ����

	while (num < 10) // while(1)�� ��� : ���ѷ����Ѵ� ����1�� ���� �ǹ��ϹǷ�
	{
		printf("%dx%d=%d\n", dan, num, dan * num);
		num++; // 9���� ��� 1�� ���� �Ͽ� �ݺ� ��� �Ѵ�.

	}




}