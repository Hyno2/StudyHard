#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy
								// ���� �ҷ����� ����� �پ������� ����ü�� �̿��ؼ� ���°� ������ ����!
int main()
{
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}
	while ((ch = fgetc(fp)) != EOF) { // get = ���Ͽ��� �о����, ������ ������ �о�Ͷ�
		printf("%c", ch);
	}
	/*while (1) {        ���� ���̶� �̰Ŷ� �����ǹ���
		ch = fgetc(fp);		�ѱ��ھ� ���ѹݺ� �ϰ� ���� EOF = ������ ���̶�� Ż���ض�
		if (ch == EOF)break;
		printf("%c", ch);
	}*/
	fclose(fp);
}
