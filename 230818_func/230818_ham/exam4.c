#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int Calc(int n1, int n2, char m) // 함수 정의할떄 일단 처음엔 void로 시작해서 보고 바꿔라
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
	// 정수 2개와 사칙연산자를 main()에서 입력받음.
	// 사칙연산자는 문자로 입력받음.(+, -, x, /)
	// 3개의 정보를 매개변수로 전달
	// 계산결과값을 리턴하여 main()에서 출력하기
	int n1, n2;
	char m;

	printf("첫번째 정수입력:");
	scanf("%d",&n1);
	printf("두번째 정수입력:");
	scanf("%d",&n2);
	printf("사칙연산자(+,-,x,/)입력:");
	scanf(" %c",&m);

	int result = Calc(n1, n2, m);

	printf("결과값:%d", result);
}