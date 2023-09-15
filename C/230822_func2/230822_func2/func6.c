#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>



void Show_arr(int a[2][4],int b[3][3],int c[2][2])
{
	/*for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", a[i][j]);
		}printf("\n");
	}printf("\n");
			
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++) {
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	} printf("\n");

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d\t", c[i][j]);
		}printf("\n");
	} 방법 1*/

	 //방법 2 함수를 3개 만들어서 해도 댐

	/*if (a == 2 && j == 4) {
		printf("%d\t", a[2][4]);
		}
	else if (i == 3 && j == 3) {
		printf("%d\t", b[3][3]);
		}
	else if (i == 2 && j == 2) {
		printf("%d\t", c[2][2]);
		}
	else {
			continue;
		}*/

}
int main()
{
int arr1[2][4] = {
		{1,2,3,30},
		{4,5,6,60}
};

int arr2[3][3] = {
		{10},
		{20,30},
		{40,50,60}
};

int arr3[2][2] = { 100,200,300,400 };

Show_arr(arr1,arr2,arr3);
}





