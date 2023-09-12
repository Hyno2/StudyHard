#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	
	// ----------------------------
	//	파일 제어 프로그램 v1.0
	// ----------------------------
	// 1. 랜덤한 데어타 파일 입력
	// 2. 파일에서 읽어오기
	// 3. 종료
	// ----------------------------

typedef struct _PERSON {
	char name[30];
	int age;
	char tel[40];
	char addr[30];
}PERSON;
// const 상수변수로 해놓는 건 전역변수 고정값이라는 걸 다른 사람들에게 알려주기위해
const char* name[] = { "홍길동","전우치","강감찬","유관순","이순신" };
const int age[] = { 20,30,40,50,60 };
const char* tel[] = { "010-1111-1111","010-2222-2222","010-3333-3333","010-4444-4444","010-5555-5555"};
const char* addr[] = { "대구","서울","부산","대전","인천" };

int main_menu()
{
	int menu;
	printf("--------------------------\n");
	printf(" 파일 제어 프로그램 v1.0\n");
	printf("--------------------------\n");
	printf("1. 랜덤한 데이터 파일 입력\n");
	printf("2. 파일에서 읽어오기\n");
	printf("3. 종료\n");
	printf("--------------------------\n");
	printf("메뉴 입력:"), scanf("%d", &menu);
	return menu;
}

void menu1(PERSON son[])
{
	FILE* fp = fopen("person_exam.bin", "wb");
	if (fp == NULL) {
		printf("파일 오픈 에러!!\n");
		return -1;
	}
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		strcpy(son[i].name, name[rand() % 5]);
		son[i].age = age[rand() % 5];
		strcpy(son[i].tel, tel[rand() % 5]);
		strcpy(son[i].addr, addr[rand() % 5]);

		fwrite(&son[i], sizeof(son[i]), 1, fp);
	}
	fclose(fp);
	printf("파일에 정상적으로 입력되었습니다\n");
}

void menu2() {
	FILE* fp = fopen("person_exam.bin", "rb");
	PERSON temp = { 0 }; 
	while (fread(&temp, sizeof(PERSON), 1, fp) == 1) {
		printf("이름:%s 나이:%d 번호:%s 주소:%s\n", temp.name, temp.age, temp.tel, temp.addr);
	}
	fclose(fp);
}

int main()
{
	PERSON son[5] = { 0 };
	while (1) {
		switch (main_menu()) {
		case 1: menu1(son);
			break;
		case 2:	menu2();
			break;
		case 3:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택!!\n");
			break;
		}
	}

}