#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()

struct customer
{
	char name[20];
	char tel[20];
	int birth;
	char addr[20];
	char job[20];
};

struct Car
{
	char car[20];
	char price[20];
	char color[20];
	int year;
};

int main()
{
	// ���������� ���α׷� 1.0v
	// ��, ���� ����ü -> (Ŭ������ Ȯ��)
	// ��: �̸�, ����ȣ, �ּ�, ����, ����
	// ����: �𵨸�, ����, ����, ����
	// 10���� �������� �迭���� �����ϰ� �����Ͽ� �Է� �� ���
	struct customer cus[10] = { 0 };
	srand(time(NULL));

	char* name[10] = { "������", "�̼���","����ġ","������","������","�Ӳ���","�����","�̿���","�ڿ���","�ӽ���" };
	char* tel[10] = { "010-1111-1111", "010-2222-2222","010-3333-3333","010-4444-4444","010-5555-5555","010-6666-6666","010-7777-7777","010-8888-8888",
		"010-9999-9999","010-0000-0000" };
	int birth[10] = { 20,25,23,28,30,35,40,32,52,50 };
	char* addr[10] = { "�뱸","�λ�","��õ","����","����","����","����","����","���","����" };
	char* job[10] = { "�ǻ�","�ǻ�","��������","���","����","������","����","����","�л�","����" };
	
	struct Car caa[10] = {0};
	
	char* car[10] = { "�ƹݶ�","�ҳ�Ÿ","�׷���","g80","k3","k5","gv80","k9","gv70","���̿���" };
	char* price[10] = { "2õ","3õ","4õ","5õ","6õ","7õ","5.5õ","9õ","8õ","6.6õ" };
	char* color[10] = { "���","����","��","ȭ��Ʈ","�׸�","������","�׷���","����","��ũ","���׸�" };
	int year[10] = { 2013,2014,2015,2017,2018,2019,2020,2021,2022,2023 };

	
	for (int i = 0; i < 10; i++) {
		strcpy(cus[i].name, name[rand() % 10]);
		strcpy(cus[i].tel, tel[rand() % 10]);
		strcpy(cus[i].addr, addr[rand() % 10]);
		strcpy(cus[i].job, job[rand() % 10]);
		cus[i].birth = birth[rand() % 10];
		strcpy(caa[i].car, car[rand() % 10]);
		strcpy(caa[i].price, price[rand() % 10]);
		strcpy(caa[i].color, color[rand() % 10]);
		caa[i].year = year[rand() % 10];

		printf("�̸�:%s\t", cus[i].name);
		printf("��ȣ:%s\t", cus[i].tel);
		printf("�ּ�:%s\t", cus[i].addr);
		printf("����:%s\t", cus[i].job);
		printf("\n");
		printf("����:%d\t", cus[i].birth);
		printf("����:%s\t", caa[i].car);
		printf("����:%s\t", caa[i].price);
		printf("��:%s\t", caa[i].color);
		printf("���:%d\t", caa[i].year);
		printf("\n\n");
	}
	printf("\n");
}	
