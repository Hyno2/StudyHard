#define _CRT_SECURE_NO_WARNINGS // �ֻ�ܿ� �Է½� scanf ��밡��
#include <stdio.h>

int main()
{
	                              // �����Է� Scanf�Լ�
								  
	// ������ scanf �Լ����� \n���� �ȉ�, ���� �տ� &����
	// �ֽ� ���־� ��Ʃ������� scanf�� ��� �Ұ�
	// scanf_s��� �Լ��� ��ü�Ǿ���

	int result;
	int num1, num2;

	printf("���� one:");
	scanf("%d", &num1);
	printf("���� two:");
	scanf("%d", &num2);

	result = num1 + num2;
	printf("%d+%d=%d\n", num1, num2, result);




}