// main.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
#include <time.h>	// time()
#include <string.h>	// strcpy()
#include <conio.h>
#include <windows.h>// Sleep()
#include "menu.h"
#include "ui.h"
#include "file.h"
#include "rdata.h"

int main()
{
	char file[] = "address.bin";
	srand(time(NULL)); // �����Լ� ����� ���� �õ� ����
	set_cursor_type(NOCURSOR);
	font_color(LIGHT_GREEN);
	title();
	_getch();// system("pause")������		

	system("cls");// ȭ�� û��
	font_color(LIGHT_GRAY);
	set_cursor_type(NORMAL_CURSOR);
	while (1) {
		switch (main_menu()) {
		case MAIN_RAND_INS:
		{
			ADDR ad[RAND_SIZE] = { 0 };
			int len = sizeof(ad) / sizeof(ADDR); // �迭 ũ�� // �迭 ũ�� : ����üũ�� x 10���� ũ�� / ����üũ��
			for (int i = 0; i < len; i++) {
				ad[i].id = id[rand() % 5];
				strcpy(ad[i].name, name[rand() % 5]);// ���ڿ��� strcpy�� ����
				strcpy(ad[i].addr, addr[rand() % 5]);
				strcpy(ad[i].tel, tel[rand() % 5]);
				strcpy(ad[i].email, email[rand() % 5]);
			}
			file_write_rand(ad, file, len);	//�ּ�����, �ּ�����, ������
			printf("���� �����͸� �������Դϴ�......\n");
			Sleep(2000); // sec - ms - us - ns�����̸� �� 1000�� 1sec
			system("pause");// ȿ���ֱ� ���� ��� ����
			break;
		}
		case MAIN_DIR_INS:
		{
			ADDR ad = { 0 };// �Ѹ� �����ϱ� �迭�� �� �ʿ� ����
			printf("ID:");
			scanf("%d", &ad.id);

			printf("�̸�:");
			scanf("%s", ad.name);

			printf("��ȭ:");
			scanf("%s", ad.tel);

			printf("�ּ�:");
			getchar();
			gets(ad.addr);

			printf("Email:");
			scanf("%s", ad.email);
			file_write(ad, file);	//���� ���� ����(����ü �Ϲݺ���) , �ּ��� ���� ����(�迭����)
			printf("�����Ͱ� �Է����Դϴ�......\n");
			Sleep(1000);
			system("pause");
			break;
		}
		case MAIN_ALL_DEL:
			file_del_all(file);
			printf("��ü �����͸� �������Դϴ�......\n");
			Sleep(1000);
			system("pause");
			break;
		case MAIN_VIEW:
			file_read(file);
			system("pause");
			break;
		case MAIN_SEARCH://	�˻�
			//	1. �˻��� �̸��� �Է¹޾ƾ��ϰ�
			//	2. �Է¹��� �̸��� ���Ͽ��� �о�� �̸��� ��
		{
			while (1) {
				system("cls");
				int submenu = search_menu();
				if (submenu == 1) {
					char name[20] = { 0 };
					printf("�˻��� �̸��� �Է��ϼ���:");
					scanf("%s", name);
					// �̸� �˻�
					file_search(file, name, EMAIL_EMPTY, ID_EMPTY);
					system("pause");
				}
				else if (submenu == 2) {
					int id = 0;
					printf("�˻��� ID�� �Է��ϼ���:");
					scanf("%d", &id);
					// ID �˻�
					file_search(file, NAME_EMPTY, EMAIL_EMPTY, id);
					system("pause");
				}
				else if (submenu == 3) {
					char email[20] = { 0 };
					printf("�˻��� Email�� �Է��ϼ���:");
					scanf("%s", email);
					// �̸��� �˻�
					file_search(file, NAME_EMPTY, email, ID_EMPTY);
					system("pause");
				}
				else if (submenu == 4) {
					break; // while() Ż��
				}
			}
			break;
		}
		case MAIN_DELETE:// ����
		{			// 1. ������ �̸� �Է¹ޱ� 
					// 2. ���Ͽ��� ���� �̸��� ������ �̸��� ���Ѵ�
					// 3. �̸��� �ٸ� ����ü���� �迭�� �����Ѵ� (�Է¹��� �̸��� ������ ����X)
					// 4. ���� ���Ͽ� w���� ��� ���Ͽ� ����
			{
				printf("������ �̸� �Է�:");
				char name[20];
				scanf("%s", name);
				printf("%s �����͸� �������Դϴ�...\n", name);
				file_delete2(file, name);
				Sleep(1000);
				system("pause");
				break;
			}
		case MAIN_UPDATE:	// ����
			// 1. ����(�˻�)�� �̸��� �Է��ϰ�, ������ �̸��� �Է¹޴´�
			// 2. ���Ͽ��� �о�ͼ� �˻����� ���Ѵ�.
			// 3. ���� ���ٸ� ������ �̸����� �ٲپ �� �迭�� �����Ѵ�.
			// 4. �ٽ� �����
		{
			printf("�˻��� �̸� �Է�:");
			char sname[20];
			scanf("%s", sname);
			printf("������ �̸� �Է�:");
			char dname[20];
			scanf("%s", dname);
			printf("%s �����͸� �������Դϴ�...\n", sname);
			file_update(file, sname, dname);
			Sleep(1000);
			system("pause");
			break;
		}
		case MAIN_EXIT:
			printf("���α׷� ����!\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����!!\n");
		}
		system("cls");
		}
	}
}