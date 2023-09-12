#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
								//함수 4가지의 형태가 있음
								//사용자 정의함수: 원하는 함수를 만들어서 쉽게 반복적으로 사용하려고 쓰는거 같음
								//표준함수 : 프로그래밍언어에서 기본으로 제공해주는 함수
void greeting(); // main함수 아래쪽에 정의가 있으면 적어줌(프로토타입 선언)

int main() // main함수 : 1개만 존재해야함
{
	greeting(); // greeting 함수 정의를 호출함
	printf("main함수의 다른 동작\n");
	greeting(); // 함수의 호출은 다른 함수에서 가능
}

//함수의 정의는 실행되지 못함! -> 사용하기 위해서는 
//반드시 다른 함수에서 해당 함수 호출(CALL)이 필요

void greeting() // 내가 만든 함수의 정의 (사용자 정의 함수)
// 첫번째 형태 실무에서 많이쓰이진않음 10프로정도
{
	printf(">>>>함수 시작<<<<\n");
	printf("안녕하세요\n");
	printf("반갑습니다\n");
	printf(">>>>함수 종료<<<<\n");
}