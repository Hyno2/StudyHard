#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
										//구조체 변수의 초기화
										// 초기화 방식이 배열과 유사하다.
										// 초기화할 데이터들을 중괄호 안에 순서대로 나열하면 된다.
struct point
{
	int xpos;
	int ypos;
};
struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};
	
int main()
{
	struct point pos = { 10,20 };
	struct person man = { "이승기","010-1212-0001",21 }; // 배열과다르게 다른 데이터타입도 한번에 할수있다
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);

	
	

}