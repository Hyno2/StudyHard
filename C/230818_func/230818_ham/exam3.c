#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void my_sort(int n1, int n2, int n3)
{
	if (n1 > n2 && n2 > n3) {		//세가지 비교법
		printf("%d>%d>%d", n1, n2,n3);
	}
	else if (n2 > n1 && n1 > n3) {
		printf("%d>%d>%d", n2, n1, n3);
	}
	else if (n3 > n2 && n2 > n1) {
		printf("%d>%d>%d", n3, n2, n1);
	}
	else if (n1 > n3 && n3 > n2) {
		printf("%d>%d>%d", n1, n3, n2);
	}
	else if (n2 > n3 && n3 > n1) {
		printf("%d>%d>%d", n2, n3, n1);
	}
	else if (n3 > n1 && n1 > n2) {
		printf("%d>%d>%d", n3, n1, n2);
	}
}

int main()
{
	// 1. 3개의 정수를 main()에서 입력받아서 한꺼번에 매개변수에 전달
	// 2. 함수에서 3개의 숫자를 크기 순서대로 출력
	// 3. 함수 이름: my_sort()
	// 4. n1 > n2 > n3 -->
	// 5. 출력 결과: n1 > n2 > n3
	int n1, n2, n3;
	
	printf("첫번째 정수입력:");
	scanf("%d", &n1);

	printf("두번째 정수입력:");
	scanf("%d", &n2);

	printf("세번째 정수입력:");
	scanf("%d", &n3);
	
	my_sort(n1,n2,n3);


}