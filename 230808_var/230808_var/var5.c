#include <stdio.h>

int main()
{
	//복합 대입 연산자
	//a = a + b 랑 a + = b는 같다
	//a = a - b     a - = b 같다
	//* / % 다같음

	int num11 = 2, num22 = 4, num33 = 6;
	num11 += 3;
	num22 *= 4;
	num33 %= 5;

	printf("결과:%d,%d,%d\n\n", num11, num22, num33);

	// 증가감소 연산자
	//++num, --num : 변수값을 선 1증가,감소시켜줌
	//num++, num-- : 변수값을 다음번 부터 1증가,감소시켜줌
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