#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()
										//  ���� ������ ����Ǹ� ���ư��ϱ� DB, Cloud �� ����Ѵ�
struct professor
{
	char name[20];	// ������
	char major[20];	// ��������
	int age;		// ��������
};

struct student         // 1�� ���� ����(Ʋ)
{
	char name[20];	// �л���
	char tel[20];	// ��ȭ��ȣ
	int age;		// ����
	char addr[20];	// �ּ�

	struct professor pro;	// ��米��
};

int main()
{
	/* 1. �л� ���� ����ü �����
	// 2. �л� ������ �̸�, ����ȣ, ����, �ּ�
	// 3. 100���� �л� ������ �����ϰ� �����Ͽ� ���
	// 4. �������� �迭�� ���� �����ϰ� �����ϰ� �ҷ����� ó��

	// ���ڿ��� �����ϴ� �迭 ���� �ڵ�
	char* name[5] = {"ȫ�浿", "����ġ", "������", "������","������"};
	printf("�̸�[0]:%s\n", name[0]);
	printf("�̸�[4]:%s\n", name[4]);

	struct student st;
	strcpy(st.name, name[2]);
	printf("st.name:%s\n", st.name);
	//-----------------------------------------------------------------------------*/
	char* name[5] = { "ȫ�浿", "����ġ", "������", "������","������" };
	char* tel[5] = { "010-1111-1111", "010-2222-2222", "010-3333-3333", "010-4444-4444","010-5555-5555" };
	char* addr[5] = { "�뱸", "����", "�λ�", "����","����" };
	int age[5] = { 20, 30,40,50,60 };

	struct student st[100] = {0};
	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		// 5���� �迭���߿��� 1���� �����ؼ� ����
		strcpy(st[i].name, name[rand()%5]); 
		strcpy(st[i].tel, tel[rand()%5]);
		strcpy(st[i].addr, addr[rand()%5]);
		st[i].age = age[rand()%5];
	}

	for (int i = 0; i < 100; i++) {
		printf(">>> %d��° �л� ���� <<<\n", i + 1);
		printf("�̸�:%s\n", st[i].name);
		printf("��ȣ:%s\n", st[i].tel);
		printf("�ּ�:%s\n", st[i].addr);
		printf("����:%d\n", st[i].age);
	}
	
	// ���� ����ü
	st[0].pro.age = 50;				 // ù��° �л��� ��米�� ����
	strcpy(st[0].pro.name, "ȫ����"); // ù��° �л��� ��米�� �̸�
	printf("%s �л��� ��米��:%s\n", st[0].name, st[0].pro.name);

}