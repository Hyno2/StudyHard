#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void show_num(int n)
{
	printf("%d\n",n);
}
int main()
{
	// 1~5까지 연속적으로 매개변수로 전달하여
	// 출력하는 함수 작성
	// 함수명: show_num
	for (int n = 1; n < 6; n++) {
		show_num(n); // 함수 호출(실행)
	}
	
	
	
	
}