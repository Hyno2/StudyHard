#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
                      // continue���ǹ� 
int main()
{
	int num;
	printf("start!\n");
	for (num = 1; num < 20; num++) {
		if (num % 2 == 0 || num % 3 == 0) { //2�� ��� or 3�� ��� �� �����Ѵ�
			continue; //������ �˻��Ϸ� �ٽÿö�
		}
		printf("%d\n", num);
	}
	printf("end!\n");





}