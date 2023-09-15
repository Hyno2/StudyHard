#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	// 두개의 배열의 합을 배열 c에 출력하라

	int arr1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int arr2[3][3] = {
		{10,20,30},
		{40,50,60},
		{70,80,90}
	};
	int arr3[3][3] = { 0 };

	int sum = 0;

	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 3; b++) {
			arr3[a][b] = arr1[a][b] + arr2[a][b];
			printf("%d\t", arr3[a][b]);
		}
		printf("\n");
	}
	printf("\n");
	// 구구단의 결과값을 저장할 2차원 배열 생성
	// 2x1=2 3x1=3 4x1=4 ... 9x1=9
	// 2x2=4 3x2=6 4x2=8 ... 9x1=18
	// ...
	// 2x9=18 3x9=27 4x9=36 ... 9x9=81
	// 출력 형태는 위와 같이하고 결과값은
	// 배열에서 읽어와서 출력

	int arr4[9][8] = { 0 };
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			arr4[i - 1][j - 2] = j * i;
			printf("%dx%d=%d\t", j, i, arr4[i-1][j-2]);
		}
		printf("\n");
	}




}