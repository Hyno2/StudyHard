#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄샘 3.곱셈 4.나눗셈\n");
	printf("선택?");
	scanf("%d", &opt);
	printf("두 개의 실수 입력:");
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
	printf("결과:%lf\n", result);


	// if ~ else 문 : 홀 짝의 개념이라고 생각하면댐
	int num;
	printf("정수 입력:");
	scanf("%d", &num);
	if (num < 0) {
		printf("입력 값은 0보다 작다.\n");
	}
	else {
		printf("입력 값은 0보다 작지 않다.\n");
	}


}