#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	

int main()
{
	char name[10];
	char sex;
	int age;
	FILE* fp = fopen("friend.txt", "wt");
	for (int i = 0; i < 3; i++) {
		printf("�̸� ���� ���� �� �Է�:");
		scanf("%s %c %d",name, & sex, &age);
		getchar(); // ���ۿ� �����ִ� \n�� �Ҹ��� ���Ͽ� ���, ���߿� ���̴� �߿�
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);
}