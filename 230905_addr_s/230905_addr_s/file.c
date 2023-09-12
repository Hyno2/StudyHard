#define _CRT_SECURE_NO_WARNINGS	// scanf
#include <stdio.h>	// file, printf
#include <stdlib.h>	// exit()
#include <string.h>	// strcpy
#include "file.h"

void file_write_rand(ADDR ad[], char filename[], int len)// ����ü �迭 , �����̸��迭 , ����ü�� ũ��
{
	FILE* fp = fopen(filename, "ab");//ab,wb,rb , at,wt,rt �̾��,�����,�б�
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		return;
	}

	for (int i = 0; i < len; i++) {
		fwrite(&ad[i], sizeof(ADDR), 1, fp);// &�ּҰ� ad[i]�迭�Ϲݺ���, sizeofũ�� , 1���, file��
	
	}
	fclose(fp);
}

void file_write(ADDR ad, char filename[])
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		return;
	}
	fwrite(&ad, sizeof(ADDR), 1, fp);
	fclose(fp);
}

void file_read(char filename[])
{
	// �����Ͱ� ������ "�����Ͱ� �������� �ʽ��ϴ�" ���� �޽����� ���!
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �б� ����!\n");
		exit(0);
	}
	ADDR ad = { 0 };	// ����� �б� ���� �� ����ü�� ������ش�
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {	// ���ϰ��� 1�̸������� �ݺ��ض�
		printf("��ȣ:%d\n", count++);
		printf("ID:%d\n", ad.id);
		printf("�̸�:%s\n", ad.name);
		printf("��ȭ:%s\n", ad.tel);
		printf("�ּ�:%s\n", ad.addr);
		printf("�̸���:%s\n", ad.email);
		printf("==========================\n");
		check = 1;// while���� �����ϸ�(�����Ͱ� ������) check�� 1�� �ǰ� �ؼ� �ݺ������ϰ�
	}
	fclose(fp);
	if (check == 0) {// ���� 0�ϰ���(�����Ͱ� ���������ʱ⿡) ������ ���� ���� �ʽ��ϴ�.
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}

void file_del_all(char filename[])// ������ �����ϴ� ����� �����Ƿ� �ƹ��͵� �Ⱦ��� �������ϸ� �� ������
{
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("���� �б� ����!\n");
		exit(0);
	}
	fclose(fp);
}

void file_search_name(char filename[], char name[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �˻� ����!\n");
		exit(0);
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, name) == 0) {	// strcmp(�� ���, �񱳴��) �����ϴٸ� == 0 
			printf("��ȣ:%d\n", count++);
			printf("ID:%d\n", ad.id);
			printf("�̸�:%s\n", ad.name);
			printf("��ȭ:%s\n", ad.tel);
			printf("�ּ�:%s\n", ad.addr);
			printf("�̸���:%s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("�˻��� �����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}

void file_search_id(char filename[], int id)
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �˻� ����!\n");
		exit(0);
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (ad.id == id) {
			printf("��ȣ:%d\n", count++);
			printf("ID:%d\n", ad.id);
			printf("�̸�:%s\n", ad.name);
			printf("��ȭ:%s\n", ad.tel);
			printf("�ּ�:%s\n", ad.addr);
			printf("�̸���:%s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("�˻��� �����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}

void file_search_email(char filename[], char email[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �˻� ����!\n");
		exit(0);
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, email) == 0) {
			printf("��ȣ:%d\n", count++);
			printf("ID:%d\n", ad.id);
			printf("�̸�:%s\n", ad.name);
			printf("��ȭ:%s\n", ad.tel);
			printf("�ּ�:%s\n", ad.addr);
			printf("�̸���:%s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("�˻��� �����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}

void file_search(char filename[], char name[], char email[], int id)
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �˻� ����!\n");
		exit(0);
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, name) == 0 || strcmp(ad.email, email) == 0
			|| ad.id == id) {
			printf("��ȣ:%d\n", count++);
			printf("ID:%d\n", ad.id);
			printf("�̸�:%s\n", ad.name);
			printf("��ȭ:%s\n", ad.tel);
			printf("�ּ�:%s\n", ad.addr);
			printf("�̸���:%s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}		
	}
	fclose(fp);
	if (check == 0) {
		printf("�˻��� �����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}

void file_delete(char filename[], char delName[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �˻� ����!\n");
		exit(0);
	}
	
	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	// ���Ͽ� �����Ͱ� 1�� �������� �̻��� �Ǵ� ���� 
	//	side effect : ���� �� ���������� ������ ������ �ҷ���, ���� �� ������ ����� ���κм��� ��Ȯ�� �ٽ� �غ���
	//	�����Ͱ� 1�� �������� ������ ���� �ʴ� ���װ� �����Ѵ� [230905_hyuno] <-- �ǹ����� �̷������� ������ ǥ���صд� �ٸ������ �����ϱ� ����
	//	while ������ �Ѱ����������� ó�����,����� ��� �׷��� ������ �Ѱ����� ���� �����̸��� ���⿡ �׷���
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {// �ѱ��ھ� �д´�, adũ�⸸ŭ, 1��� fp����
		if (strcmp(ad.name, delName) != 0) { // ������ �̸��� �ƴ϶��
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);// ���ڿ� ����
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].email, ad.email);
			check = 1;
			i++;
		}
	}
	fclose(fp);
	printf("������ ����:%d\n", i);
	if (check == 0 && strcmp(ad.name, delName) != 0) {// ������ ���� ��ٷӰ� �Ѵ�
		printf("������ �����Ͱ� �������� �ʽ��ϴ�.\n");
		return; // ���� ������ ������ ���ٸ� �������� ó��	void �Լ��� ����ȴ�
	}
	// �迭�� ����� ����ü ������ ���Ͽ� ����
	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("���� ���� ����!\n");
		return;
	}
	// �����ϴ� ����ü ������ ���Ͽ� ����
	for (int i = 0; i < 200; i++) {
		// �迭�� �����Ͱ� ������ �ݺ��� Ż��
		if (del_arr[i].id == 0) break;
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
		// ������ i�� �ؼ� �ݺ��Ǵ� Ƚ���� ǥ���ϰ� �Ҽ��� �ִ�.
		//printf("del_arr[%d]:%d\n", i, del_arr[i].id);	// ����� �ϱ������ ��� ���� printf�� ������
		// �����ϴ� ����ü ������ ���Ͽ� ���� (����� ����)
		//if (strcmp(del_arr[i].name, "") != 0) {	���ڿ����� ���ϱ�
		//if (del_arr[i].id != 0) {
	}
	fclose(fp2);
}

void file_delete2(char filename[], char delName[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �˻� ����!\n");
		exit(0);
	}

	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;

	// �����Ͱ� 1�� �������� ������ ���� �ʴ� ���� ������
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, delName) != 0) { // ������ �̸��� �ƴ϶��
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].email, ad.email);
			check = 1;
			i++;
		}
	}
	fclose(fp);
	printf("������ ����:%d\n", i);
	int size = i;
	if (check == 0 && strcmp(ad.name, delName) != 0) {
		printf("������ �����Ͱ� �������� �ʽ��ϴ�.\n");
		return; // void �Լ� ����
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("���� ���� ����!\n");
		return;
	}

	for (int i = 0; i < size; i++) {// size �� 0�̹Ƿ� Ż��
		printf("del_arr[%d]:%d\n", i, del_arr[i].id);
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);
}

void file_update(char filename[], char sname[], char dname[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �˻� ����!\n");
		exit(0);
	}

	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, sname) == 0) { // ������ �̸��� ���ٸ�
			strcpy(del_arr[i].name, dname);
			check = 1;
		}
		else {
			strcpy(del_arr[i].name, ad.name);
		}
		del_arr[i].id = ad.id;
		strcpy(del_arr[i].addr, ad.addr);
		strcpy(del_arr[i].tel, ad.tel);
		strcpy(del_arr[i].email, ad.email);
		i++;
	}
	fclose(fp);
	int size = i;
	if (check == 0) {
		printf("������ �����Ͱ� �������� �ʽ��ϴ�.\n");
		return; // void �Լ� ����
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("���� ���� ����!\n");
		return;
	}

	for (int i = 0; i < size; i++) {
		printf("del_arr[%d]:%d\n", i, del_arr[i].id);
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);
}