#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

									// 2���� �迭 ����Ҷ�
							// �Լ� ��� ������ �����ϰ� ����� ���� (���ȭ)

void Show_arr_comm(int a[2][3]) // �Լ��� ������ �� �ʿ� ���� �ϳ��� ����ǰ� ����ϸ� �ȴ�
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main()
{
	int arr1[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	Show_arr_comm(arr1);

	int arr2[2][3] = {
		{10},
		{20,30}
	};
	Show_arr_comm(arr2);

	int arr3[2][3] = { 100,200,300,400 };
	Show_arr_comm(arr3);
}