#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	//1. 3개의 숫자를 입력받아서 홀수,짝수 구분하기.
	//조건) 반복문을 사용해서 입력받기
	for (int num = 0; num < 3; num++) {
		printf("숫자 %d 입력:", num + 1);
		int n;
		scanf("%d", &n);
		//홀수 짝수 제어문으로 만들기 switch도 가능
		//switch(n){
		//case1:
			//printf("%d는 짝수\n", n%2 ==0);
			//break;
		//case2:
			//printf("%d는 홀수\n", n%2 !=0);
			//break;
		//}
		if (n % 2 == 0) {
			printf("%d는 짝수\n", n);
		}
		else {
			printf("%d는 홀수\n", n);
		}
	}
	//2. 1~100 까지의 숫자 중에서 5의 배수만 출력하기.
	//조건) 반복문 for, while 사용하기
	int i = 1;
	while (i <= 100) {
		if (i % 5 == 0) {   // 5의 배수 5로나눈 나머지가 0일떄
			printf("%d", i);
		}
		i++;
	}
	
	printf("\n-----------------------------------\n");
	//for로 하는법
	for (int i = 1; i <= 100; i++) {
		if (i % 5 == 0) {
			printf("%d",i);
		}
		
	}
	






















}