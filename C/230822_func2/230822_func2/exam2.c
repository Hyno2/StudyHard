#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h> exit()

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

// 1���� �Ẹ��
void comm_gugu(int a)
{
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			if (a==1 && j%2==0) {
				printf("%dx%d=%d\t", j, i, j * i);
			}
			else if (a==2 && j%2!=0) {
				printf("%dx%d=%d\t", j, i, j * i);
			}
			else if (a==3) {
				printf("%dx%d=%d\t", j, i, j * i);
			}

		}printf("\n");
	}
}
// ���������� �̿��ؼ� ���� �������� �ᵵ��
const char CHECK_FULL = 'f';  //const ������� (���� �����Ҽ� ���� ����
// #define CHECK_FULL�� �ᵵ �� ��������
const char CHECK_EVEN = 'e';
const char CHECK_ODD = 'o';

/* 3���� ��������
void first_gugu()
{
	for (int i = 1; i < 10; i++) { 
		for (int j = 2; j < 10; j++) {
			if (j % 2 == 0) {
				printf("%dx%d=%d\t", j , i, j * i);
			}
		}printf("\n");
	}
}
void second_gugu()
{
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			if (j % 2 != 0) {
				printf("%dx%d=%d\t", j, i, j * i);
			}
		}	printf("\n");
	}
}
void full_gugu() 
{
	for (int i = 1; i < 10; i++) { // 1~9
		for (int j = 2; j < 10; j++) { // �� 2~9
			printf("%dx%d=%d\t", j, i, j * i);
		}
		printf("\n");
	}
}
*/
int main()
{
	
	while (1) { // ���ѹݺ�
		switch (main_menu()) {
		case 1:
			//first_gugu(); break; // ����߰�
			comm_gugu(1); break;
		case 2:
			//second_gugu(); break;
			comm_gugu(2); break;
		case 3:
			//full_gugu(); break;
			comm_gugu(3); break;
		case 4:
			printf("���α׷� ����\n"); exit(0); // exit(0) ���α׷� ���� ����
		default:
			printf("�߸��� �޴� �Է�!!\n"); break;
		}
	}
	
}