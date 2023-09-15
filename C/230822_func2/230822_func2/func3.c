#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void call_by_addr(int a[]);

int main()
{
	// Call by Address(주소값에 의한 전달)
	// 배열, 전역변수, 포인트
	int arr[2] = { 10,20 };
	printf("1.main()=>arr[0]:%d, arr[1]:%d\n", arr[0], arr[1]);
	call_by_addr(arr); // 배열을 함수호출에 쓸때 배열 이름만(배열 이름이 주소값) 넣기
	printf("2.main()=>arr[0]:%d, arr[1]:%d\n", arr[0], arr[1]);
}

void call_by_addr(int a[]) // 함수는 실행되고나서 안에 정의된 값들은 사용 후 소멸 된다
							// 주소값으로 전달 했을시(배열,전역변수,포인트) 소멸되지않는다
{
	// arr[0]와 arr[1]의 값을 서로 바꿔치기
	int temp = a[0]; //a의 값을 temp 변수에 백업 temp는 10
	a[0] = a[1]; //
	a[1] = temp; //

	printf("call_by_addr()=>arr[0]:%d, arr[1]:%d\n", a[0], a[1]);
}