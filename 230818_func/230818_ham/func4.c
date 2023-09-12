#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
				// 4번째 유형: 리턴값의 데이터타입 함수명(매개변수) {return 값} 
int add(int n1, int n2); // 프로토타입 선언
int sub(int n1, int n2); // 프로토타입 선언

int main()
{
	int n1 = 200; //지역변수
	int n2 = 50;

	int a = add(n1,n2); // 매개변수로 값을 던져 준다
	printf("add함수:%d\n", a);
	int b = sub(n1,n2);
	printf("sub함수:%d\n", b);

	// 변수 선언 안하고 하는법
	// printf("add함수:%d\n", add(n1,n2));
	// printf("sub함수:%d\n", sub(n1,n2));
}
int add(int n1, int n2)
{
	return n1 + n2; // 리턴값은 함수에 대입 된다
}
int sub(int n1, int n2)
{
	return n1 - n2;
}