#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 };
	int ar1Len, ar2Len, ar3Len, i;

	printf("배열 arr1의 크기:%dbyte\n", sizeof(arr1)); //sizeof 연산읜 배열의 바이트크기정보반환
	printf("배열 arr2의 크기:%dbyte\n", sizeof(arr2));
	printf("배열 arr3의 크기:%dbyte\n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int); // 배열 arr1의 길이 계산 방법
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1Len; i++) {
		printf("%d ", arr1[i]);
	}
		printf("\n");
	for (i = 0; i < ar2Len; i++) {
		printf("%d ", arr2[i]);
	}
		printf("\n");
	for (i = 0; i < ar3Len; i++) {
		printf("%d ", arr3[i]);
	}
		printf("\n");

		// char형 배열: 공백도 한칸이고 마지막에 \0(널문자)이 한칸 들어간다
		char str[] = "Good Morning!"; //14칸, 아스키코드, 한칸에 4byte를 사용
		printf("문자열출력:%s\n", str);

		char han[] = "이현오"; // 7칸, 영어를 제외한 언어 유니코드, 한칸에 2byte를 사용 
		printf("이름이\n", han);



}