#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	// 2x3 (2 by 3)
	int arr1[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	int num=1;
	int arr2[5][3] = { 0 }; //  0의 값을 가지는 2행 3열(2x3)

	for (int i = 0; i < 5; i++) { // 행    바깥쪽 반복문은 행
		for (int j = 0; j < 3; j++) { // 열     안쪽 반복문은 열
			// arr2에 1~6까지 숫자 넣기
			arr2[i][j] = num++;
			printf("%d\t", arr2[i][j]);
		}
		printf("\n");
	}









}