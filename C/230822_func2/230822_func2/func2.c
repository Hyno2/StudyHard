#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void call_by_val(int a, int b);

int main()
{
	// Call by Value(���� ���� ����)
	
	int a = 10;
	int b = 20;
	call_by_val(a, b);
	printf("main()=>a:%d, b:%d\n", a, b);
}

void call_by_val(int a, int b) // �Լ��� ����ǰ��� �ȿ� ������ ��� �� �Ҹ� �ȴ�
{
	// a�� b�� ���� ���� �ٲ�ġ��
	int temp = a; //a�� ���� temp ������ ��� temp�� 10
	a = b; //a�� 20
	b = temp; // b�� 10

	printf("call_by_val()=>a:%d, b:%d\n", a, b);
}