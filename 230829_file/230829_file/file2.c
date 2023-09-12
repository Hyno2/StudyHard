#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	
									// file 읽기
int main()
{
	int ch, i;
	FILE* fp = fopen("data.txt", "rt"); // rt는 파일이 존재해야지 오픈 가능
	if (fp == NULL) {
		puts("파일오픈 실패");
		return -1;
	}
	for (i = 0; i < 3; i++) { // 3글자니깐 i<3
		ch = fgetc(fp);		// fgetc 파일에서 자겨온다(fp)
		printf("%c \n", ch);
	}
	fclose(fp);

}