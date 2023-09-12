#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand() exit()
#include <time.h>	// time
#include <string.h> // strcpy()		//[rand()%4]
	// ���ϸ� : address.bin --> �Ű� ������ ����
	//============================
	//	�ּҷ� ���� ���α׷� v1.0
	//============================
	// 1. �ּҷ� �ڵ� ���� (����)
	// 2. �ּҷ� ���� �Է�
	// 3. �ּҷ� ��ü ����
	// 4. �ּҷ� ����
	// 5. ����
	//============================
	// �޴� ���� :
	

typedef struct _ADDR { // typedef struct _����ü�� { }����ü��; : �̷��� ���� �ҽ� �������� ����ü�����Ҷ� struct���� ����ü �� ����ȴ�
	int id;	// 1111 ���ڰ�
	char name[20];
	char tel[20];
	char addr[30];
	char email[50];
}ADDR;
// �������� �Է½� const ��������� �����ϸ� Ÿ���� ������ �˾ƺ��� ����
const int id[] = { 111, 222, 333, 444, 555 };
const char* name[] = { "�̼���","������","������","�Ӳ���","�庸��"};
const char* tel[] = {"010-1111-1111","010-2222-2222","010-3333-3333","010-4444-4444","010-5555-5555"};
const char* addr[] = { "�뱸","�λ�","����","���","��õ" };
const char* email[] = { "asd@naver.com","qwe@naver.com","qzx@gmail.com","kfd@daum.net","kgj@naver.com" };

int main_menu() { // return ���� �ֱ⿡ int �Լ� ���
	int menu;
	printf("==========================\n");
	printf(" �ּҷ� ���� ���α׷� v1.0\n");
	printf("==========================\n");
	printf("1. �ּҷ� �ڵ� ����\n");
	printf("2, �ּҷ� ���� �Է�\n");
	printf("3. �ּҷ� ��ü ����\n");
	printf("4. �ּҷ� ����\n");
	printf("5. ����\n");
	printf("==========================\n");
	printf("�޴� �Է�:"), scanf("%d", &menu);
	return menu;
}

void rand_input(char fname[], ADDR adr[]) { // �Ű����� �ΰ� ���, �Ű��������� ���Ƿ� ����ص��ȴ�, �Ű������� �Լ����� �ݺ��Ǵ� �������� �Ű������� �ؼ� ���Ͻ�Ű�� �� 
	FILE* fp = fopen(fname, "ab");	//FILE*������ = fopen("�����̸�.txt�Ǵ�.bin" "at,wt,ab,wb,rt,rb 
	if (fp == NULL) {
		printf("���� ���� ����!!\n");
		return -1;
	}
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		adr[i].id = id[rand() % 5];
		strcpy(adr[i].name, name[rand() % 5]);
		strcpy(adr[i].tel, tel[rand() % 5]);
		strcpy(adr[i].addr, addr[rand() % 5]);
		strcpy(adr[i].email , email[rand() % 5]);

		fwrite(&adr[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
	printf("�ּҷ� �ڵ� ���� �Ϸ�!\n");
}

void sel_input(char fname[], ADDR adr[]) {
	FILE* fp = fopen(fname, "ab");
	if (fp == NULL) {
		printf("���� ���� ����!!\n");
		return -1;
	}
	printf("�ּҷ��� ���� �Է� ���ּ���.\n");
	for (int i = 0; i < 1; i++) {
		printf("id:"), scanf("%d",&adr[i].id);
		printf("�̸�:"), scanf("%s",adr[i].name);
		printf("��ȣ:"), scanf("%s",adr[i].tel);
		printf("�ּ�:"), scanf("%s",adr[i].addr);
		printf("�̸���:"), scanf("%s",adr[i].email);

		fwrite(&adr[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
	printf("�ּҷ� ���� �Է� �Ϸ�!\n");
}

void del_data(char fname[]) {
	char ch;
	while (1) {
		printf("�ּҷ��� ��ü ���� �Ͻðڽ��ϱ�? (Y/N)\n");
		scanf(" %c", &ch);
		if (ch == 'Y' || ch == 'y') {
			FILE* fp = fopen(fname, "wb");
			fclose(fp);
			printf("�ּҷ��� ��ü ���� �Ǿ����ϴ�.\n");
			break;
		}
		else if (ch == 'N' || ch == 'n') {
			printf("�ּҷ� ��ü ���� ����Ͽ����ϴ�\n");
			break;
		}
		else {
			printf("�߸��� �Է� �Դϴ�. �ٽ� �Է����ּ���.\n");
		}
	}
}

void show_data(char fname[]) {
	FILE* fp = fopen(fname, "rb");
	ADDR temp = { 0 };
	while (fread(&temp, sizeof(ADDR), 1, fp) == 1) {
		printf("ID:%d �̸�:%s ��ȣ:%s �ּ�:%s �̸���:%s\n",
			temp.id, temp.name, temp.tel, temp.addr, temp.email);
	}
	fclose(fp);
}

int main()		
{
	ADDR adr[5] = {0};
	char fname[] = "address.bin";
	
	while (1) {
		switch (main_menu()) {
		case 1:
			rand_input(fname,adr);
			break;
		case 2:
			sel_input(fname,adr);
			break;
		case 3:
			del_data(fname);
			break;
		case 4:
			show_data(fname);
			break;
		case 5:
			printf("���α׷� ����!\n");
			exit(0);
		default:
			printf("�߸��� �Է��Դϴ�!!\n");
			break;
		}
	}
}