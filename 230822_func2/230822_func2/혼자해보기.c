#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>  // time()
	// 1.main()���� 10���� ���ڸ� �����ϴ� 1���� �迭 ����
	// 2.�����ϰ� 10���� ���ڸ� �迭�� ����
	// 3.�迭�� �ּҰ��� �Ű������� �����ϰ� Ȧ,¦�� �����Ͽ� ��� �Լ�
/*void show_num(int a[])
{
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 == 0) {
			printf("%d\n", a[i]);
		}
		else {
			printf("%d\n", a[i]);
		}
	}
}
int main()
{
	int arr[10] = { 0 };
	srand(time(NULL));	// �Ź� �ٸ� �õ尪 ����
	int random = 0;	// ������ ������ ����
	for (int i = 0; i < 10; i++) { // 10ȸ �ݺ�
		random = (rand() % 45) + 1; // ���� ���� 1 ~ 45����
		arr[i] = random;
	}
	show_num(arr);
}*/
	/*printf("--------------------------------\n");
	printf(" �������� ����ϴ� �Լ� ���� 1.0v\n");
	printf("--------------------------------\n");
	printf(" 1. ������ ¦���� ���(2~8)\n");
	printf(" 2. ������ Ȧ���� ���(3~9)\n");
	printf(" 3. ������ ��ü ���(2~9)\n");
	printf(" 4. ����\n");
	printf("--------------------------------\n");
	printf(" �޴� ����:");
	*/
/*void comm_func(int a)
	{
		for (int i = 1; i < 10; i++) {
			for (int j = 2; j < 10; j++) {
				if (a == 1 && j % 2 == 0) {
					printf("%dx%d=%d\t", j, i, j * i);
				}
				else if (a == 2 && j % 2 != 0) {
					printf("%dx%d=%d\t", j, i, j * i);
				}
				else if (a == 3 ) {
					printf("%dx%d=%d\t", j, i, j * i);
				}
			}printf("\n");
		}

	}
	int main_menu()
	{
		printf("--------------------------------\n");
		printf(" �������� ����ϴ� �Լ� ���� 1.0v\n");
		printf("--------------------------------\n");
		printf(" 1. ������ ¦���� ���(2~8)\n");
		printf(" 2. ������ Ȧ���� ���(3~9)\n");
		printf(" 3. ������ ��ü ���(2~9)\n");
		printf(" 4. ����\n");
		printf("--------------------------------\n");
		printf(" �޴� ����:");
		int menu;
		scanf("%d", &menu);
		return menu;
	}

	int main()
	{
		while (1) {
			switch (main_menu()) {
			case 1:
				comm_func(1); break;
			case 2:
				comm_func(2); break;
			case 3:
				comm_func(3); break;
			case 4:
				printf("����"); exit(0);
			default:
				printf("�߸��� �Է��Դϴ�."); break;
			}
		}
	}*/
	/*�ζ����α׷� 6�� �����
	6���� �迭�� ����� �ߺ����� �ʴ� ���ڸ� ���� �� ��ȣ�� ���ؼ� �ض�
	���� ��ȣ�� exam1�� �ִ°� �����*/



