#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void call_by_val(int a, int b);

int main()
{
	// Call by Value(값에 의한 전달)
	
	int a = 10;
	int b = 20;
	call_by_val(a, b);
	printf("main()=>a:%d, b:%d\n", a, b);
}

void call_by_val(int a, int b) // 함수는 실행되고나서 안에 값들은 사용 후 소멸 된다
{
	// a와 b의 값을 서로 바꿔치기
	int temp = a; //a의 값을 temp 변수에 백업 temp는 10
	a = b; //a는 20
	b = temp; // b는 10

	printf("call_by_val()=>a:%d, b:%d\n", a, b);
}