#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	//1. 3���� ���ڸ� �Է¹޾Ƽ� Ȧ��,¦�� �����ϱ�.
	//����) �ݺ����� ����ؼ� �Է¹ޱ�
	for (int num = 0; num < 3; num++) {
		printf("���� %d �Է�:", num + 1);
		int n;
		scanf("%d", &n);
		//Ȧ�� ¦�� ������� ����� switch�� ����
		//switch(n){
		//case1:
			//printf("%d�� ¦��\n", n%2 ==0);
			//break;
		//case2:
			//printf("%d�� Ȧ��\n", n%2 !=0);
			//break;
		//}
		if (n % 2 == 0) {
			printf("%d�� ¦��\n", n);
		}
		else {
			printf("%d�� Ȧ��\n", n);
		}
	}
	//2. 1~100 ������ ���� �߿��� 5�� ����� ����ϱ�.
	//����) �ݺ��� for, while ����ϱ�
	int i = 1;
	while (i <= 100) {
		if (i % 5 == 0) {   // 5�� ��� 5�γ��� �������� 0�ϋ�
			printf("%d", i);
		}
		i++;
	}
	
	printf("\n-----------------------------------\n");
	//for�� �ϴ¹�
	for (int i = 1; i <= 100; i++) {
		if (i % 5 == 0) {
			printf("%d",i);
		}
		
	}
	






















}