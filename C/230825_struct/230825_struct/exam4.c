#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()					
//									C���-������ ���α׷��� = ������ �켱���Ѵ�
//									��ü���� ���α׷��� - ��ü�� �켱���Ѵ�
//												ERP =ȸ�� ���� ���α׷��� ��Ī�Ͽ� ���Ѵ�
//						���� ���� :����ȸ�� - �䱸����(B2B,B2C,B2G) - ����(UI,DB,���α׷�) - ����(�ڵ�,�˰��� �߿�) - �׽�Ʈ - ��������
// -------------------------------------
	//		������ ���� ���α׷� v1.5
	//--------------------------------------
	// 1. �������� �� �� ���� �Է�
	// 2. �������� �� �� ���� ����
	// 3. ����
	//--------------------------------------
struct caa
{
	char car[20];
	char price[20];
	char color[20];
	int year;
};
struct customer
{
	char name[20];
	char tel[20];
	int birth;
	char addr[20];
	char job[20];
	struct caa ca;	// ��������
};


// �Լ��� ������� ��Ȱ, ����ü�� �������� �����������ִ�.
// �������� ���� �Ű������� ��� �ұ� ����غ���, �Ű������� �ʹ� ���� ����ϹǷ� ���������� ���°� �´�
// �׻� �Ű����� ���� �����غ��� �ȵǸ� ���������� ����Ѵ�
// ū �迭������ ���� ���������� ���ȴ� ���������� ���� stackoverflow�Ǽ� �޸𸮿����ȴ�

char* name[10] = { "������", "�̼���","����ġ","������","������","�Ӳ���","�����","�̿���","�ڿ���","�ӽ���" };
char* tel[10] = { "010-1111-1111", "010-2222-2222","010-3333-3333","010-4444-4444","010-5555-5555","010-6666-6666","010-7777-7777","010-8888-8888",
	"010-9999-9999","010-0000-0000" };
int birth[10] = { 20,25,23,28,30,35,40,32,52,50 };
char* addr[10] = { "�뱸","�λ�","��õ","����","����","����","����","����","���","����" };
char* job[10] = { "�ǻ�","�ǻ�","��������","���","����","������","����","����","�л�","����" };
char* car[10] = { "�ƹݶ�","�ҳ�Ÿ","�׷���","g80","k3","k5","gv80","k9","gv70","���̿���" };
char* price[10] = { "2õ","3õ","4õ","5õ","6õ","7õ","5.5õ","9õ","8õ","6.6õ" };
char* color[10] = { "���","����","��","ȭ��Ʈ","�׸�","������","�׷���","����","��ũ","���׸�" };
int year[10] = { 2013,2014,2015,2017,2018,2019,2020,2021,2022,2023 };

int main_menu()
{
	int input;
	printf("-------------------------------------\n");
	printf("	������ ���� ���α׷� v1.5\n");
	printf("-------------------------------------\n");
	printf("1. �������� �� �� ���� �Է�\n");
	printf("2. �������� �� �� ���� ����\n");
	printf("3. ����\n");
	printf("-------------------------------------\n");
	printf("�Է��ϼ���:"), scanf("%d", &input);
	return input;
}
void menu1(struct customer cus[])
{
	 
	for (int i = 0; i < 10; i++) {
		strcpy(cus[i].name, name[rand() % 10]);
		strcpy(cus[i].tel, tel[rand() % 10]);
		strcpy(cus[i].addr, addr[rand() % 10]);
		strcpy(cus[i].job, job[rand() % 10]);
		cus[i].birth = birth[rand() % 10];
		strcpy(cus[i].ca.car, car[rand() % 10]);
		strcpy(cus[i].ca.price, price[rand() % 10]);
		strcpy(cus[i].ca.color, color[rand() % 10]);
		cus[i].ca.year = year[rand() % 10];
	}
	printf("�ԷµǾ����ϴ�!\n");
}
void menu2(struct customer cus[])
{
	for (int i = 0; i < 10; i++) {
		printf("�̸�:%s\t", cus[i].name);
		printf("��ȣ:%s\t", cus[i].tel);
		printf("�ּ�:%s\t", cus[i].addr);
		printf("����:%s\t", cus[i].job);
		printf("\n");
		printf("����:%d\t", cus[i].birth);
		printf("����:%s\t", cus[i].ca.car);
		printf("����:%s\t", cus[i].ca.price);
		printf("��:%s\t", cus[i].ca.color);
		printf("���:%d\t", cus[i].ca.year);
		printf("\n\n");
	}
	printf("\n");
}

int main()
{
	struct customer cus[10] = { 0 };	// customer�� ����ü �̸� (������ Ÿ��), ������ Ÿ���̶�°� ����ض�
	srand(time(NULL));	//�����Լ��� ����ϱ� ���� ����
	while (1) {
		switch (main_menu()) {
		case 1:
			menu1(cus); break;
		case 2:
			menu2(cus); break;
		case 3:
			printf("���α׷� ����!\n"); exit(0);
		default:
			printf("�߸� ���� �ϼ˽��ϴ�!!\n"); break;
		}
	}
}