#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2.���� 3.���� 4.������\n");
	printf("����?");
	scanf("%d", &opt);
	printf("�� ���� �Ǽ� �Է�:");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1) {
		result = num1 + num2;
	}
	if (opt == 2) {
		result = num1 - num2;
	}
	if (opt == 3) {
		result = num1 * num2;
	}
	if (opt == 4) {
		result = num1 / num2;
	}
	printf("���:%lf\n", result);


	// if ~ else �� : Ȧ ¦�� �����̶�� �����ϸ��
	int num;
	printf("���� �Է�:");
	scanf("%d", &num);
	if (num < 0) {
		printf("�Է� ���� 0���� �۴�.\n");
	}
	else {
		printf("�Է� ���� 0���� ���� �ʴ�.\n");
	}


}