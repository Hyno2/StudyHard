#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	

											// �������� �迭���� ����Ʈ�� ���� 
											// �迭�� ������ �������ִ°��ε�
											// ����Ʈ�� �������� �����̴�
								
	// ���� ���Ͽ� �����Ҷ� ���� �����Ͱ� ��� �����ؾ��� !!
	// �� ����: �̸�, ��ȭ, �ּ�
	// ���� ����: �𵨸�, ����, ����
	//===============================
	//	�� ���� ���� ���α׷� v2.0
	//===============================
	// 1. �� ���� ���� �Է�
	// 2. �� ���� ���� �Է�
	// 3. �� ���� ����
	//===============================
	// �޴� ����:

typedef struct _CAR{
	char model[20];
	char price[20];
	int year;
}CAR;

typedef struct _CUST {
	char name[20];
	char tel[20];
	char addr[20];
	CAR car;
}CUST;

int main_menu() {
	printf("=============================\n");
	printf(" �� ���� ���� ���α׷� v2.0\n");
	printf("=============================\n");
	printf("1. �� ���� ���� �Է�\n");
	printf("2. �� ���� ���� �Է�\n");
	printf("3. �� ���� ����\n");
	printf("4. �� ���� ����\n");
	printf("5. ����\n");
	printf("=============================\n");
	int menu;
	printf("�޴� ����:"), scanf("%d", &menu);
	return menu;
}	

void select_input(CUST cus) {
	FILE* fp = fopen("select.bin", "wb");
	if (fp == NULL) {
		printf("���� ���� ����!!\n");
		return -1;
	}
	printf("������ �������� �Է��ϼ���.\n");
	printf("�̸�:"), scanf("%s",cus.name); // getchar(); gets(cus.name);  ������ �Է¹ޱ����� ���
	printf("��ȣ:"), scanf("%s",cus.tel);
	printf("�ּ�:"), scanf("%s",cus.addr);
	printf("����:"), scanf("%s",cus.car.model);
	printf("����:"), scanf("%s",cus.car.price);
	printf("����:"), scanf("%d",&cus.car.year);

	fwrite(&cus, sizeof(CUST), 1, fp);

	fclose(fp);
	printf("�� ���� ���� �Է� �Ϸ�!\n");
}

void random_input(CUST cus[]) {
	char* name[] = { "ȫ�浿","����ġ","������","������" };
	char* tel[] = { "010-1111-1111","010-2222-2222","010-3333-3333","010-4444-4444" };
	char* addr[] = { "�뱸","����","�λ�","����" };

	char* model[] = { "�ƹݶ�","�ҳ�Ÿ","�׷���","K5" };
	char* price[] = { "2õ","3õ","4õ","5õ" };
	int year[] = { 2019,2020,2021,2022 };

	FILE* fp = fopen("select.bin", "ab");
		if (fp == NULL) {
			printf("���� ���� ����!!\n");
			return -1;
		}
	srand(time(NULL));
		for (int i = 0; i < 5; i++) {
			strcpy(cus[i].name, name[rand() % 4]);
			strcpy(cus[i].tel, tel[rand() % 4]);
			strcpy(cus[i].addr, addr[rand() % 4]);
			strcpy(cus[i].car.model, model[rand() % 4]);
			strcpy(cus[i].car.price, price[rand() % 4]);
			cus[i].car.year = year[rand() % 4];
			fwrite(&cus[i], sizeof(cus[i]), 1, fp);
	}
		fclose(fp);
		printf("�� ���� ���� �Է� �Ϸ�!\n");
}

void show_cus(){
	FILE* fp = fopen("select.bin", "rb");
	CUST temp = { 0 };
	while (fread(&temp, sizeof(CUST), 1, fp) == 1) {
		printf("�̸�:%s ��ȣ:%s �ּ�:%s ����:%s ����:%s ����:%d\n",
		temp.name ,temp.tel, temp.addr,temp.car.model,temp.car.price,temp.car.year);
	}
	fclose(fp);
}

void del_cus() {
	char ch;
	printf("��ü �����͸� �����Ͻðڽ��ϱ�? (Y/N)\n");

	while (1) {
		scanf(" %c", &ch); // %c���� ����ִ°� ����
		if (ch == 'Y' || ch == 'y') {
			FILE* fp = fopen("select.bin", "wb");
			fclose(fp);
			printf("��ü �����͸� ���� �Ͽ����ϴ�.\n");
			break;
		}
		else if (ch == 'N' || ch == 'n') {
			printf("��ü ������ ������ ����Ͽ����ϴ�.\n");
			break;
		}
		else {
			printf("�߸��� �Է�! �ٽ� �Է����ּ���.\n"); 
		}
	}
}
int main()
{
	CUST cust = { 0 };
	CUST customer[4] = {0};

	while (1) {
		switch(main_menu()){
		case 1:
			select_input(cust);
			break;
		case 2:
			random_input(customer);
			break;
		case 3:
			show_cus();
			break;
		case 4:
			del_cus();
			break; 
		case 5:
			printf("���α׷� ����!\n");
			exit(0);
		default:
			printf("�߸��� �޴� �����Դϴ�!!\n");
			break;
		}
	}
}