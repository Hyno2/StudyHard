#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void show_day(int n)
{
	switch (n) {
	case 1:
		printf("������\n"); break;
	case 2:
		printf("ȭ����\n"); break;
	case 3:
		printf("������\n"); break;
	case 4:
		printf("�����\n"); break;
	case 5:
		printf("�ݿ���\n"); break;
	case 6:
		printf("�����\n"); break;
	case 7:
		printf("�Ͽ���\n"); break;
	}
	
}

int main()
{
	// main()���� 1~7 ������ ���ڸ� �Է� �޾Ƽ�
	// �Ű������� �����Ͽ� �Ű������� ����
	// 1�̸�, ������ ���.
	// 2�̸�, ȭ���� ���.
	// ...
	// 7�̸�, �Ͽ��� ����ϴ� �Լ� �ۼ�
	printf("���� �Է�(1:������ 2:ȭ���� ~ 7:�Ͽ���=>");
	int day;
	scanf("%d", &day);
	show_day(day);
	
	}
	