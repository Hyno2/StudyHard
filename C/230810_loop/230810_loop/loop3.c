#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
				//���� �ݺ��� : �˰��� �� ���������� ������ �ִ�
int main()
{
	int cur = 1; // �ٱ��� �ݺ��� Ƚ�� ����
	int is = 0; // ���� �ݺ��� Ƚ�� ����
	printf("������\n");

	while (cur < 10) // cur 2���� 9���� �ݺ��ض�
	{
		is = 1; //���ο� ���� ������ ���� 
		while (is < 10) // is 1���� 9���� �ݺ��ض�
		{
			printf("%dx%d=%d\n", cur, is, cur * is);
			is++;
		}

		cur++;
	}



}