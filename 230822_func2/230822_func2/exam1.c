#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>  // time()
	
	// test 1
	// 1.main()에서 10개의 숫자를 저장하는 1차원 배열 생성
	// 2.랜덤하게 10개의 숫자를 배열에 저장
	// 3.배열의 주소값을 매개변수로 전달하고 홀,짝을 구분하여 출력 함수

	// test 2
	//--------------------------------//
	// 구구단을 출력하는 함수 연습 1.0
	//--------------------------------//
	// 1. 구구단 짝수단 출력(2~8)
	// 2. 구구단 홀수단 출력(3~9)
	// 3. 구구단 전체 출력(2~9)
	// 4. 종료
	//--------------------------------//
	// 메뉴 선택:
void Show_num(int a[])
{
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 == 0) {
			printf("%d 짝수\n", a[i]);
		}
		else {
			printf("%d 홀수\n", a[i]);
		}
	}
}
int main()
{
	int arr[10] = { 0 }; // 10개의 숫자를 저장하는 1차원 배열선언

	srand(time(NULL));	// 매번 다른 시드값 생성
	int random = 0;	// 난수를 저장할 변수
	for (int i = 0; i < 10; i++) { // 10회 반복
		random = (rand() % 45) + 1; // 난수 생성 1 ~ 45까지
		arr[i] = random; //arr[0] ~ arr[9]에 난수를 저장
	}
	Show_num(arr);
}