#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy
								// 파일 불러오는 방식은 다양하지만 구조체를 이용해서 쓰는게 실전에 좋다!
int main()
{
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}
	while ((ch = fgetc(fp)) != EOF) { // get = 파일에서 읽어오기, 파일의 끝까지 읽어와라
		printf("%c", ch);
	}
	/*while (1) {        위의 말이랑 이거랑 같은의미임
		ch = fgetc(fp);		한글자씩 무한반복 하고 만약 EOF = 파일의 끝이라면 탈출해라
		if (ch == EOF)break;
		printf("%c", ch);
	}*/
	fclose(fp);
}
