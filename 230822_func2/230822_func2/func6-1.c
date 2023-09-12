#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
			// 실전에서는 하드코딩은 금지!
			// 하드코딩된 값들은 상수 변수(const) 또는 #define을 사용
			// 상수변수는 대부분 대문자로 표기

/* 주석으로 실무에서 이렇게 설명 해둠
* FUNC : ShowArr
* PARAM : row - 행, col - 열
* RETURN : None
* COMM : 2차원 배열의 정보를 받아 출력
*/

void Show_arr(int a[][3],int row,int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d\t", a[i][j]);
		}printf("\n");
	}printf("\n");
}
int main()
{
	int arr1[2][3] = {
			{1,2,3,},
			{4,5,6,}
	};

	int arr2[3][3] = {
			{10},
			{20,30},
			{40,50,60}
	};

	int arr3[2][3] = { 100,200,300,400 };

	Show_arr(arr1,2,3); // 배열주소, 행, 열  행열 값 지정해주기
	Show_arr(arr2,3,3);
	Show_arr(arr3,2,3);

}
