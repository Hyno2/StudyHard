#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	
									// file �б�
int main()
{
	int ch, i;
	FILE* fp = fopen("data.txt", "rt"); // rt�� ������ �����ؾ��� ���� ����
	if (fp == NULL) {
		puts("���Ͽ��� ����");
		return -1;
	}
	for (i = 0; i < 3; i++) { // 3���ڴϱ� i<3
		ch = fgetc(fp);		// fgetc ���Ͽ��� �ڰܿ´�(fp)
		printf("%c \n", ch);
	}
	fclose(fp);

}