#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy

int main()
{
	FILE* src = fopen("src.txt", "rt"); // read �Ϸ��� ������ �־���Ѵ�
	FILE* des = fopen("dst.txt", "wt");
	int ch=0;
	if (src == NULL || des == NULL) {
		puts("���� ���� ����!");
		return -1;
	} 
	// ���� ������ ���� 1���� ����
	while ((ch = fgetc(src)) != EOF) { //!=EOF ������ ���̾ƴ� ��� ,End Of File =������ ��
		fputc(ch, des);
	}
	// ������ ���� �����ߴٸ�
	if (feof(src) != 0) { 
		puts("���Ϻ��� �Ϸ�!");
	}
	else {
		puts("���Ϻ��� ����!");
	}
	fclose(src);
	fclose(des);





}