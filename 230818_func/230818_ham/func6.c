#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int Add(int num1, int num2) //�Ű����� o ���ϰ� o 
{						//�Լ� ������ ���� ����

	return num1 + num2;
}
void ShowAddResult(int num) //�Ű����� o ���ϰ� x
{
	printf("������� ���: %d\n", num);
}
int ReadNum() //�Ű����� x ���� �� 0
{
	int num;
	scanf("%d", &num);
	return num;
}
void HowToUseThisProg() //�Ű����� x ���ϰ� x
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�.\n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���.\n");
}

int main() // main �Լ����� ������(entry point)
{
	int result, num1, num2; //  main �Լ����� ���� result num1 num2 ����

	HowToUseThisProg(); // �Լ� HowToUseThisProg 
	num1 = ReadNum(); // �Լ� ReadNum �� main ���� num1 �� ���� 
	num2 = ReadNum(); // �Լ� ReadNum �� main ���� num2 �� ����
	result = Add(num1, num2); // �Լ� Add(num1,num2) �� main ���� result�� ����
	ShowAddResult(result); // ���κ��� result ���� �Լ� ShowAddResult�� ����

}