#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
							// 구조체 배열의 초기화 예제

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};
				// st5.c에서 초기값을 받지않고 scanf를 사용하여 만들어봐라
int main()
{
	struct person arr[3]=
	{
		{"이승기","010-1212-0001",21}, // 구조체 값들이 대입된다(초기화)
		{"정지영","010-1313-0002",22},
		{"한지수","010-1717-0003",19}
	};
	int i;
	for (i = 0; i < 3; i++) {
		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
	}

}