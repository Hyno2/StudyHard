#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 };
	int ar1Len, ar2Len, ar3Len, i;

	printf("�迭 arr1�� ũ��:%dbyte\n", sizeof(arr1)); //sizeof ������ �迭�� ����Ʈũ��������ȯ
	printf("�迭 arr2�� ũ��:%dbyte\n", sizeof(arr2));
	printf("�迭 arr3�� ũ��:%dbyte\n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int); // �迭 arr1�� ���� ��� ���
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

		// char�� �迭: ���鵵 ��ĭ�̰� �������� \0(�ι���)�� ��ĭ ����
		char str[] = "Good Morning!"; //14ĭ, �ƽ�Ű�ڵ�, ��ĭ�� 4byte�� ���
		printf("���ڿ����:%s\n", str);

		char han[] = "������"; // 7ĭ, ��� ������ ��� �����ڵ�, ��ĭ�� 2byte�� ��� 
		printf("�̸���\n", han);



}