#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int i, j;
	/* 2차원 배열 초기화의 예 1*/
	int arr1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	/* 2차원 배열 초기화의 예 2*/
	int arr2[3][3] = {
		{1},
		{4,5},
		{7,8,9}
	};

	/* 2차원 배열 초기화의 예 3*/             //이방법으로 사용해서는 안됌
	int arr3[3][3] = { 1,2,3,4,5,6,7 };

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", arr2[i][j]);
		}	
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}




}