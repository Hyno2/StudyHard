#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	for (int cur = 2; cur < 10; cur++) // cur�� 2���� 9���� 
	{
		for (int is = 1; is < 10; is++) // is�� 1���� 9����
			{
			printf("%dx%d=%d\n", cur, is, cur * is);
		
		}
		printf("\n");
	}
	//printf("j:%d\n"); // ����Ʈf�� ������ ã�ƺ��� Ʈ���̽�
	// ���� Ŭ���ؼ� ������ �ؼ� ���� windows ����� ->����� â -> ���� -> f11������ �ѹ��徿 ������غ�

	// ���߿� : ��� ���� ������ �ݵ�� 2�� �ݺ������� ����
	for (int i = 0; i < 3; i++) {
		printf("1���� %d\t", i + 1);
	}
	printf("\n\n");
	for (int i = 0; i < 3; i++) { // �ٱ����� �� (3��)
		for (int j = 0; j < 3; j++) { //���ʹ��� �� (2��)

			printf("%d�� %d��\t", i + 1, j + 1);

		}printf("\n");
	}
}