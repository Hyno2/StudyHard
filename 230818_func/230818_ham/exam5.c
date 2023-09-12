#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void gugudan(int gugu)
{
	for (int a = 1; a < 10; a++) {
		printf("%d x %d = %d\n", gugu, a, gugu * a);
	}
}



int main()
{
	// test 5
	// 1. 구구단을 출력하는 숫자를 main()에서 입력 받음
	// 2. ex) 3을 입력받아 매개변수를 전달하면 3단 출력
	// 3. 입력받은 숫자를 매개변수로 전달하여 함수에서 구구단 출력
	int gugu;
	printf("몇 단?");
	scanf("%d", &gugu);
	gugudan(gugu);
}