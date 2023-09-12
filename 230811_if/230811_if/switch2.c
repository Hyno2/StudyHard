#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	char c;					// 문자형 변수이므로 
	printf("A~ E 문자 입력:");
	scanf("%c", &c);
	switch (c) {			// switch()의 값도 문자형변수 
	case 'A':				// case 값도 문자형변수이므로 ''를 붙인다
		printf("A은 ONE\n");
		break;
	case 'B':
		printf("B는 TWO\n");
		break;
	case 'C':
		printf("C은 THREE\n");
		break;
	case 'D':
		printf("D은 FOUR\n");
		break;
	case 'E':
		printf("E은 FIVE\n");
		break;
	default:
		printf("default\n");
	}










}