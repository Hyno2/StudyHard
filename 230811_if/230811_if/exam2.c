#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
									// if 써서 풀기
int main()
{
	//1) 간단한 계산기. (if m switch 둘다가능)
	//1. 2개의 숫자를 입력박고, 문자 +, -, *, / 를 입력받음.
	//2. 출력 형태는 아래를 참고
	// >>> 동작 예시 <<<
	// 1번째 숫자 입력: 10
	// 2번째 숫자 입력: 20
	// 연산자 입력(+,-,*,/): +

	// >>> 출력 예시 <<<
	// 10 + 5 = 15

	int a, b; // 정수형 변수생성 숫자 2개 1,2번쨰 숫자 입력을 위해
	char op; // 문자형 변수생성 연산자 입력을 위해
	printf("1번째 숫자 입력:");
	scanf("%d", &a);
	printf("2번째 숫자 입력:");
	scanf("%d", &b);
	// 바로 위에서 숫자를 입력하고 엔터키를 치면 엔터키값이
	// op변수에 자동으로 저장되어지는 오류 발생.
	// 해결방법 : (" %c", &op); %c앞에 공백을 하나 준다
	printf("연산자 입력(+,-,*,/):");
	scanf(" %c", &op);
	if (op == '+') {
		printf("%d+%d=%d\n", a, b, a + b);
	}
	else if (op == '-') {
		printf("%d-%d=%d\n", a, b, a - b);
	}
	else if (op == '*') {
		printf("%d*%d=%d\n", a, b, a * b);
	}
	else if (op == '/') {
		printf("%d/%d=%d\n", a, b, a / b);
	}
	/*switch (op) {             스위치문 사용시 이렇게쓰면됌
	case '+':
		printf("%d+%d=%d\n", a, b, a + b);
		break;
		switch (op)
	case '-':
		printf("%d-%d=%d\n", a, b, a - b);
		break;
		switch (op)
	case '*':
		printf("%d*%d=%d\n", a, b, a * b);
		break;
		switch (op)
	case '/':
		printf("%d/%d=%d\n", a, b, a / b);
		break;
	}
	*/
	//2) 윤년 구분하는 프로그램 (switch 사용 불가)
	//1. 입력한 년도를 4로 나누면 나머지가 0이고, 100으로 나누면 0이 아님. -> 윤년
	//2. 입력한 년도를 400으로 나누면 나머지가 0 -> 윤년
	int sin;
	printf("년도를 입력하세요");
	scanf("%d", &sin);
	// 방법 1
	if (sin % 4 == 0 && sin % 100 != 0) {
		printf("윤년");
	}
	else if (sin % 400 == 0) {
		printf("윤년");
	}
	else {
		printf("윤년이 아닙니다.");
	}

	// 방법2
	if ((sin % 4 == 0 && sin % 100 != 0) || (sin % 400 == 0)) {
	}
	else {
		printf("윤년이 아닙니다.");
	}





}