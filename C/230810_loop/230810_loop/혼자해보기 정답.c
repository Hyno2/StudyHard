#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// Test 1 while������ �Է��Ͽ� ������ ������
	int dan = 0; // while���� int ������ ���� �������ش�
	int num = 1;
	printf("�� ��?");
	scanf("%d", &dan);
	while (num < 10)
	{
		printf("%dx%d=%d\n", dan, num, dan * num);
		num++;
	}
	// test 2 while�� ��ø���� 1�ܺ��� 9�� �����ܳ����ϱ� 
	int a = 1;
	int b = 0;
	printf("������\n");
	while (a < 10)
	{
		b = 1;
		while (b < 10)
		{
			printf("%dx%d=%d\n", a, b, a * b);
			b++;
		}
		a++;
	}

	// test 3 do while������ �������Է�0 to quit �հ� ����غ���

	// test 4 for�� 0���� num ��������� ����ϱ� num�� �Է�

	// test 5 for�� ��ø���� 1�ܺ��� 9�� ������ �����

	// test 6 ���۰��� ���������� �Է¹޾� ���� ���ϴ� ���α׷�.
	// ex) 1��° �Է�:2, 2��° �Է�:5 2+3+4+5 = 14
	// ����) ���࿡ 2��° ���� 1��° ������ �۰ų� ������ �ٽ� �Է�.
	
	int start, end;
	printf("���۰�");
	scanf("%d", &start);
	int backup = start;
	//printf("��������"); //�����ϰ��Ϸ��� do while �� �����
	//scanf("%d", &end);
	//while (end <= start) // while �� ������ �̷��� �ؾ���
	//{
	//	printf("��������");
	//	scanf("%d", &end);
	//}
	do
	{
		printf("��������");
		scanf("%d", &end);
	} while (end <= start);

	int total = 0;
	//for (; start <= end; start++) �̷��� �ص���
	for (int i = start; i <= end; i++)
	{
		total = total + i;
	}
	printf("%d ~ %d�� ��:%d\n", backup, end, total);


	// test 7 ������ ��ü ���. (2~9�� ���)
	// ����) 2x1=2 3x1=3 4x1=4 .... 9x1=9
	//      2x2=4 3x2=6 4x2=8 .... 9x2=18
	//      ....
	//      2x9=18 3x9=27 4x9=36....9x9=81

	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			printf("%dx%d=%d\t", j, i, j * i);
		}
		printf("\n");
	}



	// test 8 ������ �Է����� �ϰ� Ȧ������ �������ϱ� ex)1x3 1x5 1x7 1x9











}