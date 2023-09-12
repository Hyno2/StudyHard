#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	
													// file 쓰기
int main()
{
	// C:/ 바로 밑에는 관리자 권한으로 생성 불가!
	// C:/폴더 에는 생성 가능함.
	// fopen 후에 끝에 꼭 fclose 해줘야함 필수
	 
	// 1. 파일 오픈 fopen(파일이름, wt= write,text 쓰기모드text)
	// w: 기존의 내용을 무시하고 덮어쓴다(기존내용 삭제)
	// a: 기존의 내용을 보존하고 뒤에 붙여씀.
	// r: 파일의 내용을 읽어옴
	// fopen(매개변수, 매개변수) fopen은 표준함수라서 C에있는 기본함수다. 만드는 함수는 사용자정의 함수
	FILE* fp = fopen("data.txt", "wt"); // FILE은 구조체 *포인트는 주소값을 참조 , data.txt 파일을 오픈하라 at,rt,wt 모드로
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}
	fputc('A', fp);	// 문자 1개를 파일에 입력 f(ile)putc(har) 
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
	// 1. 파일 오픈(쓰기, 읽기)
	// 2. 쓰거나 또는 읽거나 작업
	// 3. 파일 닫기
}

