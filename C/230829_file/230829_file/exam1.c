#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	
		// --------------------------------
		//		���� ���� ���α׷� v1.0
		// --------------------------------
		// 1. ģ�� ���� ����
		// 2. ģ�� ���� �б�
		// 3. ����
		// --------------------------------
		// �޴� ����:
typedef struct fren
{
	char name[10];
	char sex;
	int age;
}Friend;

int main_menu()
{
	int menu;
	printf("--------------------------------\n");
	printf("	���� ���� ���α׷� v1.0\n");
	printf("--------------------------------\n");
	printf("1. ģ�� ���� ����\n");
	printf("2. ģ�� ���� �б�\n");
	printf("3. ����\n");
	printf("--------------------------------\n");
	printf("�޴� ���� :"), scanf("%d", &menu);
	return menu;
}
void menu1()
{
	FILE* fp;
	Friend myfren1;
	fp = fopen("friend.bin", "wb");
	printf("�̸�, ����, ���� �� �Է�:");
	scanf("%s %c %d", myfren1.name, &myfren1.sex, &myfren1.age); //name �� �迭 , �������� �Ϲݺ����� &
	fwrite(&myfren1, sizeof(myfren1), 1, fp); // 
	fclose(fp);
}
void menu2()
{
	FILE* fp;
	Friend myfren2;
	fp = fopen("friend.bin", "rb");
	fread(&myfren2, sizeof(myfren2), 1, fp);
	printf("%s %c %d\n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);
}
						//	FILE*fp;�� �������� ���̴ϱ� �Ű������� ��� �ص� �ȴ�
int main()
{
	while (1) {
		switch (main_menu()) {
		case 1: menu1();
			break;
		case 2: menu2();
			break;
		case 3:
			printf("���α׷� ����!"); 
			exit(0);
		default:
			printf("�߸��� �Է��Դϴ�!!\n");
			break;
		}
	}

}