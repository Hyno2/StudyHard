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
	int arr2[5][3] = { 0 }; //  0�� ���� ������ 2�� 3��(2x3)

	for (int i = 0; i < 5; i++) { // ��    �ٱ��� �ݺ����� ��
		for (int j = 0; j < 3; j++) { // ��     ���� �ݺ����� ��
			// arr2�� 1~6���� ���� �ֱ�
			arr2[i][j] = num++;
			printf("%d\t", arr2[i][j]);
		}
		printf("\n");
	}









}