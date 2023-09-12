#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
                      // continue조건문 
int main()
{
	int num;
	printf("start!\n");
	for (num = 1; num < 20; num++) {
		if (num % 2 == 0 || num % 3 == 0) { //2의 배수 or 3의 배수 를 제외한다
			continue; //조건을 검사하러 다시올라감
		}
		printf("%d\n", num);
	}
	printf("end!\n");





}