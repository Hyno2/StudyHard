#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
			// ���������� �ϵ��ڵ��� ����!
			// �ϵ��ڵ��� ������ ��� ����(const) �Ǵ� #define�� ���
			// ��������� ��κ� �빮�ڷ� ǥ��

/* �ּ����� �ǹ����� �̷��� ���� �ص�
* FUNC : ShowArr
* PARAM : row - ��, col - ��
* RETURN : None
* COMM : 2���� �迭�� ������ �޾� ���
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

	Show_arr(arr1,2,3); // �迭�ּ�, ��, ��  �࿭ �� �������ֱ�
	Show_arr(arr2,3,3);
	Show_arr(arr3,2,3);

}
