#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	

// for (int i = 0; i < 5; i++);{
//		if (strcmp(cu[i].name,"") == 0) {	//cu[i].name�ǰ��� ""�� ���ٸ� �� �� ������ ������ Ż����!
//          strcmp = ���ڿ��� ���Ѵ�
//			�𸣴� �Լ��� �𸣴� �� ������ ���۸����� ���ø��ڵ带 ���� �����ϸ� �����ؾ��Ѵ�!
//			break;
//		}
//	printf("����: %s",cu[i].name);
//	printf("����: %s",cu[i].ca.model);
//	printf("�Ŵ�����: %s",cu[i].man.manager);
// }

	// ���̸�, ������, �Ŵ�����
	//------------------------------------
	//	�� ���� ���� ���α׷� v1.6
	//------------------------------------
	// 1. ������ ���� �Է�
	// 2. ������ ���� �Է�
	// 3. ������ ����
	// 4. ����
	//------------------------------------
	// �޴�����:
struct car // ����ü car ����
{
	char model[20]; 
};

struct manager
{
	char manager[20];
};

struct customer
{
	char cusname[20];
	struct car ca;
	struct manager man;
};

int main_menu()
{
	int input;
	printf("------------------------------------\n");
	printf("�� ���� ���� ���α׷� v1.6\n");
	printf("------------------------------------\n");
	printf("1. ������ ���� �Է�\n");
	printf("2. ������ ���� �Է�\n");
	printf("3. ������ ����\n");
	printf("4. ����\n");
	printf("------------------------------------\n");
	printf("�޴�����:"), scanf("%d", &input);
	return input;
}

char menu1(struct customer cus[]) 
{
	for (int i = 0; i < 5; i++) {
		printf("����:"), scanf("%s", &cus[i].cusname);
		printf("����:"), scanf("%s", &cus[i].ca.model);
		printf("�Ŵ�����:"), scanf("%s", &cus[i].man.manager);
	}
	printf("�ԷµǾ����ϴ�!\n");
	return cus;
}

char menu2(struct customer cus[])
{
	srand(time(NULL));
	char* model[5] = { "K5","K3","�ƹݶ�","�ҳ�Ÿ","�׷���" };
	char* manager[5] = { "�̼���","�̰�ȭ","������","����","�̿켺" };
	char* cusname[5] = { "������","������","������","������","������" };
	for (int i = 0; i < 5; i++) {
		strcpy(cus[i].cusname, cusname[rand() % 5]);
		strcpy(cus[i].ca.model, model[rand() % 5]);
		strcpy(cus[i].man.manager, manager[rand() % 5]);
	}
	printf("���� �ԷµǾ����ϴ�!\n");
	return cus;
}

void show_menu(struct customer cus[])
{
	for (int i = 0; i < 5; i++) {
		printf("------------------------------------\n");
		printf("����:%s\t", cus[i].cusname);
		printf("����:%s\t", cus[i].ca.model);
		printf("�Ŵ�����:%s\t", cus[i].man.manager);
		printf("\n\n");
	}
	printf("\n");
}

int main()
{
	struct customer cus[5] = {0};
	while (1) {
		switch (main_menu()) {
		case 1:
			menu1(cus);
			break;
		case 2:
			menu2(cus);
			break;
		case 3:
			show_menu(cus);
			break;
		case 4:
			printf("���α׷� ����!\n");
			exit(0);
		default:
			printf("�߸��Է��ϼ̽��ϴ�!!\n");
			break;
		}
	}
}