#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
				// 4��° ����: ���ϰ��� ������Ÿ�� �Լ���(�Ű�����) {return ��} 
int add(int n1, int n2); // ������Ÿ�� ����
int sub(int n1, int n2); // ������Ÿ�� ����

int main()
{
	int n1 = 200; //��������
	int n2 = 50;

	int a = add(n1,n2); // �Ű������� ���� ���� �ش�
	printf("add�Լ�:%d\n", a);
	int b = sub(n1,n2);
	printf("sub�Լ�:%d\n", b);

	// ���� ���� ���ϰ� �ϴ¹�
	// printf("add�Լ�:%d\n", add(n1,n2));
	// printf("sub�Լ�:%d\n", sub(n1,n2));
}
int add(int n1, int n2)
{
	return n1 + n2; // ���ϰ��� �Լ��� ���� �ȴ�
}
int sub(int n1, int n2)
{
	return n1 - n2;
}