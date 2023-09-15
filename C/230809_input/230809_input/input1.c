#define _CRT_SECURE_NO_WARNINGS // 최상단에 입력시 scanf 사용가능
#include <stdio.h>

int main()
{
	                              // 정수입력 Scanf함수
								  
	// ★증요 scanf 함수에는 \n쓰면 안됌, 변수 앞에 &붙음
	// 최신 비주얼 스튜디오에선 scanf가 사용 불가
	// scanf_s라는 함수로 대체되었음

	int result;
	int num1, num2;

	printf("정수 one:");
	scanf("%d", &num1);
	printf("정수 two:");
	scanf("%d", &num2);

	result = num1 + num2;
	printf("%d+%d=%d\n", num1, num2, result);




}