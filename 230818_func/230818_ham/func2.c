#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
										//매개변수(인수,인자)로 불리기도 함
// 코딩 스타일
// 스네이크 방식: show_number -> C언어 스타일
// 카멜방식: showNumber -> 자바,자바 스크립트 스타일 (객체지향)
// 파스칼 방식: ShowNumber -> C++, C# 스타일 (객체지향)

void show_number(int n); // main함수 아래쪽에 정의가 있으면 적어줌(프로토타입 선언)
void show_number2(int n, int n2);

int main() // 항상 메인부터 시작되니 메인부터 보면된다
{
	// 1번째 유형: void 함수명() -> 매개변수가 없다 (void생략가능)   잘안씀 
	// 2번째 유형: void 함수명(매개변수, ...) 매개변수는 n개 가능    많이씀

	// ★중요 반드시 매개변수가 있는 함수를 호출할 경우
	// ()안에 매개변수로 전달하는 값(변수)을 넣어줘야함
	show_number(100); //함수 호출
	int n = 100;
	int n2 = 200;
	show_number2(n, n2); // 함수 호출, show_number2(100,200)과 같은 의미 
}


void show_number(int n) // 매개변수가 있는 함수의 정의
						// 매개변수안에 중괄호{} 안의 변수들은 지역변수라고 한다.
						// 지역변수들은 쓰고 소멸된다
						// 다른 함수안에서 같은 변수명을 써도 상관이 없다
						// 서로 사용하는 공간이 다르다(한 함수를 한 메모리 공간이라 생각하면 댐)
{
	int sum =n + 100;
	printf("함수의 변수 sum:%d\n", sum);
}

void show_number2(int n,int n2) // 매개변수가 있는 함수의 정의
{
	int sum = n + n2;
	printf("함수의 변수2 sum:%d\n", sum);
}