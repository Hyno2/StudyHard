#include <stdio.h>

int main()
{
	char* name = "������";
	int age = 200;
	char* number = "010-1234-4321";
	char* address = "�뱸������ ������ ������21";
	float h = 182.1;
	float k = 84.5;
	char o = 'O';

	printf("---------------------------------\n");
	printf("         ������ ���� Ȯ�μ�    \n");
	printf("---------------------------------\n");
	printf("�̸�:%s\n", name);
	printf("����:%d\n", age);
	printf("��ȭ:%s\n", number);
	printf("�ּ�:%s\n", address);
	printf("Ű:%.1fcm\n", h); 
	printf("������:%.1fkg\n", k);
	printf("������:%c��\n", o);

	printf("---------------------------------\n");

	int a = 100; 
	int b = 200;
	int c = a + b;


	printf("����������a:%d\n", a);
	printf("����������b:%d\n", b);
	printf("����������c:%d\n", c);
	printf("������:%d\n", c);
	printf("%d+%d=%d\n", a, b, c);
	printf("%d�� %d�� ���� %d�̴�.\n", a, b, c);




}