#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	
															// ����ü �����ϳ��� ���ؼ� 
typedef struct _PERSON // typedef ~ PERSON �ϸ� �����Ҷ� struct �� �����ȴ�
{
	char name[20];
	int age;
	char tel[20];
	char addr[50];

}PERSON;

int main()
{
	PERSON son = { "ȫ�浿",100,"010-1234-1234","�Ѿ� ȫ�밨��" };		//  ����ü ����
	PERSON so2 = { "����ġ",200,"010-1234-4321","���� �θ޻��" };		//  ����ü ���� 
	
	// ���� ����
	FILE* fp = fopen("person.bin", "wb"); // FILE*fp = fopen("���ϸ�","���");
	if (fp == NULL) { // fp == 0�ϰ��
		printf("���� ���� ����!!\n");
		return -1; // ���α׷��� �����ϰڴٴ� �� , 0�� success�ڵ��϶� ���̾� 
	}
	fwrite(&son, sizeof(son/*PERSON�ᵵ��*/), 1, fp); // fwrite����(&�ּҰ�����, ũ��, 1����, ���� �� ���=person.bin)
	fwrite(&so2, sizeof(so2), 1, fp);
	printf("���Ͽ� ���������� �ԷµǾ����ϴ�\n");
	fclose(fp);

	// ���� �б�      �������� ����� �̹� ���� �ؾ� �Ѵ�
	FILE* fp2 = fopen("person.bin", "rb");
	if (fp2 == NULL) {
		printf("���� �б� ���� ����!!\n");
		return -1;
	}

	PERSON temp = { 0 }; // ���Ͽ��� ����ü ������ �о� �����ϴ� �� ����ü �ӽ÷� ����������

	// ���Ͽ��� ���������� ����ü 1���� �о��ٸ�
	while (fread(&temp, sizeof(temp), 1, fp2) == 1); { // fread(&�ּҰ�,ũ��,1����,�б� �� ���) == 1= ���������� 1�� �о��ٸ�
		printf("�̸�:%s ����:%d ��ȣ:%s �ּ�:%s\n", temp.name, temp.age, temp.tel, temp.addr);
	}
		fclose(fp2);
	

}