#include <stdio.h>

int main()
{
	//���� ���� ������
	//a = a + b �� a + = b�� ����
	//a = a - b     a - = b ����
	//* / % �ٰ���

	int num11 = 2, num22 = 4, num33 = 6;
	num11 += 3;
	num22 *= 4;
	num33 %= 5;

	printf("���:%d,%d,%d\n\n", num11, num22, num33);

	// �������� ������
	//++num, --num : �������� �� 1����,���ҽ�����
	//num++, num-- : �������� ������ ���� 1����,���ҽ�����
	int num1 = 12;
	int num2 = 12;

	printf("num1: %d\n", num1);
	printf("num1++:%d\n", num1++);
	printf("num1:%d\n\n", num1);

	printf("num2: %d\n", num2);
	printf("++num2: %d\n", ++num2);
	printf("num2: %d\n\n", num2);

	printf("num1: %d\n", num1);
	printf("num1--:%d\n", num1--);
	printf("num1:%d\n\n", num1);

	printf("num2: %d\n", num2);
	printf("--num2:%d\n", --num2);
	printf("num2:%d\n", num2);

}