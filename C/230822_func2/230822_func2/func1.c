#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void ShowArr(int a[]);

int main()
{
							// 1. 배열 변수를 매개변수로 전달하는 방법
							// 2. 지역변수, 전역변수 개념 이해 및 활용
							// 3. Call by Value(값에 의한 전달)
							// 4. Call by Address(주소값에 의한 전달)
							
							// 배열: 정보를 저장할 수있는 연속적인 공간
							// 배열의 시작 위치(주소값)

	int arr[10]; // 정수값을 10개 저장할수 있는 arr 배열 변수, arr은 일반 변수가 아님  ㅁㅁㅁㅁㅁ
	int a;		 // 정수값을 1개 저장하는 일반 변수
	
	// 1~ 10까지를 arr배열에 저장
	for (int i = 0; i < 10; i++) { // 배열은 거의 반복문과 함께 쓰여짐
		arr[i] = i + 1;
		//printf("%d\n", arr[i]);
		
	}
	ShowArr(arr);	// 배열을 매개변수로 전체를 옮기는게 아니라 주소값만 알려주는 것이다 
					// 배열을 함수호출에 쓸때 배열 이름만 넣기
}


void ShowArr(int a[])
{
	// main()에서 만든 배열을 이 함수에서 출력
	// arr배열 변수의 주소값을 매개변수로 전달.
	for (int i = 0; i < 10; i++) {
		printf("a[%d]=%d\n",i, a[i]);
	}

}