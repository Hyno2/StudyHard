#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	
	// ----------------------------
	//	���� ���� ���α׷� v1.0
	// ----------------------------
	// 1. ������ ����Ÿ ���� �Է�
	// 2. ���Ͽ��� �о����
	// 3. ����
	// ----------------------------

typedef struct _PERSON {
	char name[30];
	int age;
	char tel[40];
	char addr[30];
}PERSON;
// const ��������� �س��� �� �������� �������̶�� �� �ٸ� ����鿡�� �˷��ֱ�����
const char* name[] = { "ȫ�浿","����ġ","������","������","�̼���" };
const int age[] = { 20,30,40,50,60 };
const char* tel[] = { "010-1111-1111","010-2222-2222","010-3333-3333","010-4444-4444","010-5555-5555"};
const char* addr[] = { "�뱸","����","�λ�","����","��õ" };

int main_menu()
{
	int menu;
	printf("--------------------------\n");
	printf(" ���� ���� ���α׷� v1.0\n");
	printf("--------------------------\n");
	printf("1. ������ ������ ���� �Է�\n");
	printf("2. ���Ͽ��� �о����\n");
	printf("3. ����\n");
	printf("--------------------------\n");
	printf("�޴� �Է�:"), scanf("%d", &menu);
	return menu;
}

void menu1(PERSON son[])
{
	FILE* fp = fopen("person_exam.bin", "wb");
	if (fp == NULL) {
		printf("���� ���� ����!!\n");
		return -1;
	}
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		strcpy(son[i].name, name[rand() % 5]);
		son[i].age = age[rand() % 5];
		strcpy(son[i].tel, tel[rand() % 5]);
		strcpy(son[i].addr, addr[rand() % 5]);

		fwrite(&son[i], sizeof(son[i]), 1, fp);
	}
	fclose(fp);
	printf("���Ͽ� ���������� �ԷµǾ����ϴ�\n");
}

void menu2() {
	FILE* fp = fopen("person_exam.bin", "rb");
	PERSON temp = { 0 }; 
	while (fread(&temp, sizeof(PERSON), 1, fp) == 1) {
		printf("�̸�:%s ����:%d ��ȣ:%s �ּ�:%s\n", temp.name, temp.age, temp.tel, temp.addr);
	}
	fclose(fp);
}

int main()
{
	PERSON son[5] = { 0 };
	while (1) {
		switch (main_menu()) {
		case 1: menu1(son);
			break;
		case 2:	menu2();
			break;
		case 3:
			printf("���α׷� ����!\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����!!\n");
			break;
		}
	}

}