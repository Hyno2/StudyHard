#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int Calc(int n1, int n2, char m) // �Լ� �����ҋ� �ϴ� ó���� void�� �����ؼ� ���� �ٲ��
{
	switch (m) {
	case '+':
		return n1 + n2; break;
	case '-':
		return n1 - n2; break;
	case 'x':
		return n1 * n2; break;
	case '/':
		return n1 / n2; break;
	}
}

int main()
{
	// test 4
	// ���� 2���� ��Ģ�����ڸ� main()���� �Է¹���.
	// ��Ģ�����ڴ� ���ڷ� �Է¹���.(+, -, x, /)
	// 3���� ������ �Ű������� ����
	// ��������� �����Ͽ� main()���� ����ϱ�
	int n1, n2;
	char m;

	printf("ù��° �����Է�:");
	scanf("%d",&n1);
	printf("�ι�° �����Է�:");
	scanf("%d",&n2);
	printf("��Ģ������(+,-,x,/)�Է�:");
	scanf(" %c",&m);

	int result = Calc(n1, n2, m);

	printf("�����:%d", result);
}