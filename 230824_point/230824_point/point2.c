#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 100, num2 = 200;                         // 
	int* pnum = NULL; // ����Ʈ�������� NULL�� 0�� ���� 
	
	pnum = &num1;	// ������ pnum�� num1�� ����Ŵ
	(*pnum) += 30;	// num1+=30; �� ����

	pnum = &num2;	// ������ pnum�� num2�� ����Ŵ
	(*pnum) += 30;	// num2-=30; �� ����
	
	printf("num1:%d, num2:%d\n", num1, num2);
}