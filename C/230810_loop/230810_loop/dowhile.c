#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
			//do ~ while �� : ��ó�� ������ �����Ƿ� �ּ��� 1���� ������ �����ض�
			// do�� �� ���� ��Ű�� while ������ �ڿ� ��
int main()
{
	int total =0 , num = 0;
	do
	{
		printf("�����Է�(0 to quit):");
		scanf("%d", &num);
		total += num; // total = total + num 
	                  // Ǯ��: �Է�num�� 1�� �����ϸ� total = 1�̵ǰ� 
		              // �ٽ� �ݺ��Ͽ� �Է�num�� 2���Խ� total=1�̿����� total = 1 + 2���Ǿ
		              // ���ǿ� �����ʱ������� �հ踦 ���Ѵ�

	} while (num!=0); //0�� �����ʴ�

	printf("�հ�: %d\n", total);


}