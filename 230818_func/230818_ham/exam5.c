#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void gugudan(int gugu)
{
	for (int a = 1; a < 10; a++) {
		printf("%d x %d = %d\n", gugu, a, gugu * a);
	}
}



int main()
{
	// test 5
	// 1. �������� ����ϴ� ���ڸ� main()���� �Է� ����
	// 2. ex) 3�� �Է¹޾� �Ű������� �����ϸ� 3�� ���
	// 3. �Է¹��� ���ڸ� �Ű������� �����Ͽ� �Լ����� ������ ���
	int gugu;
	printf("�� ��?");
	scanf("%d", &gugu);
	gugudan(gugu);
}