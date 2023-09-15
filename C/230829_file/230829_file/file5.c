#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy

int main()
{
	FILE* src = fopen("src.txt", "rt"); // read 하려면 파일이 있어야한다
	FILE* des = fopen("dst.txt", "wt");
	int ch=0;
	if (src == NULL || des == NULL) {
		puts("파일 오픈 실패!");
		return -1;
	} 
	// 파일 끝까지 문자 1개씩 읽음
	while ((ch = fgetc(src)) != EOF) { //!=EOF 파일의 끝이아닐 경우 ,End Of File =파일의 끝
		fputc(ch, des);
	}
	// 파일의 끝에 도달했다면
	if (feof(src) != 0) { 
		puts("파일복사 완료!");
	}
	else {
		puts("파일복사 실패!");
	}
	fclose(src);
	fclose(des);





}