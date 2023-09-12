#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int Add(int num1, int num2) //매개변수 o 리턴값 o 
{						//함수 선언은 값이 없음

	return num1 + num2;
}
void ShowAddResult(int num) //매개변수 o 리턴값 x
{
	printf("덧셈결과 출력: %d\n", num);
}
int ReadNum() //매개변수 x 리턴 값 0
{
	int num;
	scanf("%d", &num);
	return num;
}
void HowToUseThisProg() //매개변수 x 리턴값 x
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다.\n");
	printf("자! 그럼 두 개의 정수를 입력하세요.\n");
}

int main() // main 함수부터 시작점(entry point)
{
	int result, num1, num2; //  main 함수에서 변수 result num1 num2 선언

	HowToUseThisProg(); // 함수 HowToUseThisProg 
	num1 = ReadNum(); // 함수 ReadNum 을 main 변수 num1 에 대입 
	num2 = ReadNum(); // 함수 ReadNum 을 main 변수 num2 에 대입
	result = Add(num1, num2); // 함수 Add(num1,num2) 를 main 변수 result에 대입
	ShowAddResult(result); // 메인변수 result 값을 함수 ShowAddResult에 적용

}