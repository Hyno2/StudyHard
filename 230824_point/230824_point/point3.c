#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 100; //  값 (100)
	int* p = &n; // 포인터변수 p에 변수n의 (주소값)을 참조 
	//int *p = NULL;
	//p = &n;

	int arr[5] = { 10,20,30,40,50 };
	// 포인터변수 p에 배열변수arr의 주소값을 참조
	p = arr;
	printf("p[0]:%d\n", p[0]);
	printf("p:%d\n", *p);
	printf("arr[0]:%d\n", arr[0]);

	printf("p[1]:%d\n", p[1]); 
	printf("p:%d\n", *(p+1)); // 여기 1은 주소값을 표기함 p= p+0번지3

	printf("arr[1]:%d\n", arr[1]);
	printf("\n");
	// 위의 printf출력을 반복문을 사용하여 출력
	for (int i = 0; i < 5; i++) {
		printf("p[%d]:%d\n",i, p[i]);
		printf("*(p+%d):%d\n", i, *(p+i) );
		printf("arr[%d]:%d\n",i, arr[i]);
	}
		// void*
		// 함수포인터
		// 메모리 동적 할당
		// 포인터배열
		// 이중포인터

		
	
}