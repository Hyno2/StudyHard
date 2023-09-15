#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	
										// 언어에서 공통되는 것 중요한거
											// 1. 변수
											// 2. 연산자 (%, 관계, 논리)
											// 3. 제어문
											// 4. 반복문
											// 5. 배열
											// 6. 함수
											// 7. 구조체
											//3456 바쁘다하면
											//346 너무바쁘다
											// 함수> 제어,반복,배열 순으로 중요
				//	구조체 배열 표현식
typedef struct _PERSON
{
	char name[20];
	int age;
	char tel[20];
	char addr[50];

}PERSON;

int main()
{
	PERSON son[2] = {
		{"홍길동",100,"010-1234-1234","한양 홍대감댁"},
		{"전우치",200,"010-1234-4321","강원 두메산골"}
	};

	// 파일 쓰기
	FILE* fp = fopen("person_arr.bin", "wb");
	if (fp == NULL) {
		printf("파일 오픈 에러!!\n");
		return -1;
	}
	fwrite(&son[0], sizeof(son[0]), 1, fp);
	fwrite(&son[1], sizeof(son[1]), 1, fp);
	printf("파일에 정상적으로 입력되었습니다\n");
	fclose(fp);


	// 파일 읽기 
	FILE* fp2 = fopen("person_arr.bin", "rb");
	if (fp2 == NULL) {
		printf("파일 읽기 오픈 에러!!\n");
		return -1;
	}
	PERSON temp = { 0 }; // 파일에서 구조체 정보를 읽어 저장하는 빈 구조체
	// 파일에서 정상적으로 구조체 1개를 읽었다면
	while (fread(&temp, sizeof(temp), 1, fp2) == 1); {
		printf("이름:%s 나이:%d 번호:%s 주소:%s\n", temp.name, temp.age, temp.tel, temp.addr);
	}
	fclose(fp2);
							
}