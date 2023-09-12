#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

float get_number(); //프로토타입 선언
char get_char(); //프로토타입 선언

void main()
{
	// 3번째 유형: 리턴값의 데이터타입 함수명() {return 값} -> 매개변수 x
	// 4번째 유형: 리턴값의 데이터타입 함수명(매개변수) {return 값} 
	
	// return한 1.3의 값을 변수 n 에 저장
	float n = get_number(); 
	printf("리턴받은 값:%.1f\n", n);
	char c = get_char();
	printf("리턴받은 문자:%c\n",c);
	
	// 변수를 사용해서 리턴값을 받지 않고
	// 직접 함수 리턴값을 %c에 전달
	printf("함수리턴값:%c\n", get_char());
}

float get_number() // 리턴값과 같은 타입을 사용해야 한다 
{
	float n = 1.3; // 지역변수
	// 함수가 종료되기전에 return 값을 
	// 호출한 곳으로 되돌려 줌
	return n; // 리턴값은 1개의 값만 가능
}

char get_char()
{
	char c = 'B';
	return c;
}