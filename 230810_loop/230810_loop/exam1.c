#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 1. 1���� ���ڸ� �Է¹޾� ������ ����ϴ� ���α׷�.
	// ex) 3�� �Է��ϸ� ������ 3�� ���
	int dan=0;
	printf("�� ��?");
	scanf("%d", &dan);
	for (int i = 1; i < 10; i++)
	{
		printf("%dx%d=%d\n", dan, i,dan*i);
		
	}
	// 2. ���۰��� ���������� �Է¹޾� ���� ���ϴ� ���α׷�.
	// ex) 1��° �Է�:2, 2��° �Է�:5 2+3+4+5 = 14
	// ����) ���࿡ 2��° ���� 1��° ������ �۰ų� ������ �ٽ� �Է�.

	int n1, n2, total = 0; //n1 ���۰����� n2 ������������
		printf("���۰�:");
		scanf("%d", &n1);
		do {
			printf("��������:"); // n2�� n1���� ū��� Ż���Ѵ�. ���������� �ٽ� ������ ���� �ٽ� �ݺ��Է�
			scanf("%d", &n2);
		} while (n2 <= n1);

		for (int i = n1; i <=n2;i++) //int i�� ���۰��� ���ǽ��ѹ�����
		{
			total = total + i; // total += i;
		}
		printf("%d~%d������ ��:%d\n",n1,n2,total);

	// 3. ������ ��ü ���. (2~9�� ���)
	// ����) 2x1=2 3x1=3 4x1=4 .... 9x1=9
	//      2x2=4 3x2=6 4x2=8 .... 9x2=18
	//      ....
	//      2x9=18 3x9=27 4x9=36....9x9=81

	for(int cur = 1; cur < 10; cur++) // ���ηγ�������Ҷ� ���ں��� ��������
	{
		for (int is = 2; is < 10; is++) // �� �������ξ��� 
		{
			printf("%dx%d=%d\t", is, cur, cur * is); // \t = �ٸ��� ���� 
		}
		printf("\n");
	}


	printf("�������Է�:");
	int gugu;
	scanf("%d", &gugu);

	printf("%dx%d=%d\n", gugu, 1, gugu*1);
	printf("%dx%d=%d\n", gugu, 2, gugu*2);
	printf("%dx%d=%d\n", gugu, 3, gugu*3);
	printf("%dx%d=%d\n", gugu, 4, gugu*4);
	printf("%dx%d=%d\n", gugu, 5, gugu*5);
	printf("%dx%d=%d\n", gugu, 6, gugu*6);
	printf("%dx%d=%d\n", gugu, 7, gugu*7);
	printf("%dx%d=%d\n", gugu, 8, gugu*8);
	printf("%dx%d=%d\n", gugu, 9, gugu*9);
	printf("-------------------------\n");
	for (int i = 2; i< 10; i=i+1) // i+=1 �Ͱ���  / i= i+1���ϸ� 1 3 5 7 9 �̷������γ��� , i=2���ϰ� i+=1�ϸ� 2 4 6 8����
	{
		printf("%dx%d=%d\n", gugu, i, gugu * i);
		i++;
	}
}