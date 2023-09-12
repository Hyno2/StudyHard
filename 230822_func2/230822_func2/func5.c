#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

// 전역변수는 모든 함수 안에 영향이 간다
// 전역변수의 값을 변경시 모든 전역변수값에 영향이 가서 값바꿀시 주의 해야 한다.
// 매개변수를 항상 먼저 고려해 사용하고 전역변수는 최대한 적게쓰게 고려해야한다
// 함수안의 변수는 지역변수 , 전역변수는 함수 밖에 선언 해야함
// 주의) 전역변수는 무조건 함수 밖에 선언!!!

int b = 100; // 전역 변수 b

void test_func()
{
	int a = 20; // test_func() 지역변수 a
	printf("test_func()=>a:%d, b:%d\n", a,b); // %d는 가장가까운 값을 찾으려고한다

}
int main()
{
	int a = 10; // main() 지역변수 a
	printf("main()=>a:%d\n", a);
	test_func();
}
