#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // ���ڿ� ó�� ���� strcpy

struct person // ����ü ���� (���Ƿθ��� �������� ����)
{
	char name[20];
	char phoneNum[20];              // ����ü�� ��� ����
	int age;
};

int main()
{
	struct person man1, man2; // person�� ����� ���� ������Ÿ��, man1, man2�� ����ü ����
	strcpy(man1.name, "�ȼ���"); // "�ȼ���"�� man1.name�� ���� // strcpy : stringcopy ���ڿ� ����
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;

	// �̸��� Ű����� ���� �Է¹���
	printf("�̸� �Է�:"); scanf("%s", man2.name); // &�Ⱥٴ����� strcpy�� �ּҺ����̴ϱ�
	printf("��ȣ �Է�:"); scanf("%s", man2.phoneNum);
	printf("���� �Է�:"); scanf("%d", &man2.age); // age������ �Ϲݺ����� &���ʿ�

	printf(">>>>> ����ü�� ����� ���� ��� <<<<<\n");
	printf("�̸�:%s\n", man1.name);
	printf("��ȣ:%s\n", man1.phoneNum);
	printf("����:%d\n", man1.age);

	printf("�̸�:%s\n", man2.name);
	printf("��ȣ:%s\n", man2.phoneNum);
	printf("����:%d\n", man2.age);

}