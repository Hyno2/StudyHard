#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	
															// 구조체 변수하나에 대해서 
typedef struct _PERSON // typedef ~ PERSON 하면 정의할때 struct 를 빼도된다
{
	char name[20];
	int age;
	char tel[20];
	char addr[50];

}PERSON;

int main()
{
	PERSON son = { "홍길동",100,"010-1234-1234","한양 홍대감댁" };		//  구조체 변수
	PERSON so2 = { "전우치",200,"010-1234-4321","강원 두메산골" };		//  구조체 변수 
	
	// 파일 쓰기
	FILE* fp = fopen("person.bin", "wb"); // FILE*fp = fopen("파일명","모드");
	if (fp == NULL) { // fp == 0일경우
		printf("파일 오픈 에러!!\n");
		return -1; // 프로그램을 종료하겠다는 말 , 0은 success코드일때 많이씀 
	}
	fwrite(&son, sizeof(son/*PERSON써도됌*/), 1, fp); // fwrite쓰기(&주소값시작, 크기, 1덩이, 쓰기 할 대상=person.bin)
	fwrite(&so2, sizeof(so2), 1, fp);
	printf("파일에 정상적으로 입력되었습니다\n");
	fclose(fp);

	// 파일 읽기      읽을때는 대상이 이미 존재 해야 한다
	FILE* fp2 = fopen("person.bin", "rb");
	if (fp2 == NULL) {
		printf("파일 읽기 오픈 에러!!\n");
		return -1;
	}

	PERSON temp = { 0 }; // 파일에서 구조체 정보를 읽어 저장하는 빈 구조체 임시로 만들어줘야함

	// 파일에서 정상적으로 구조체 1개를 읽었다면
	while (fread(&temp, sizeof(temp), 1, fp2) == 1); { // fread(&주소값,크기,1덩이,읽기 할 대상) == 1= 정상적으로 1개 읽었다면
		printf("이름:%s 나이:%d 번호:%s 주소:%s\n", temp.name, temp.age, temp.tel, temp.addr);
	}
		fclose(fp2);
	

}