#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()
										//  안의 값들은 종료되면 날아가니깐 DB, Cloud 를 사용한다
struct professor
{
	char name[20];	// 교수명
	char major[20];	// 전공과목
	int age;		// 교수나이
};

struct student         // 1명에 대한 정의(틀)
{
	char name[20];	// 학생명
	char tel[20];	// 전화번호
	int age;		// 나이
	char addr[20];	// 주소

	struct professor pro;	// 담당교수
};

int main()
{
	/* 1. 학생 정보 구조체 만들기
	// 2. 학생 정보는 이름, 폰번호, 나이, 주소
	// 3. 100명의 학생 정보를 랜덤하게 저장하여 출력
	// 4. 랜덤값은 배열에 값을 저장하고 랜덤하게 불러오게 처리

	// 문자열을 저장하는 배열 샘플 코드
	char* name[5] = {"홍길동", "전우치", "김유신", "유관순","강감찬"};
	printf("이름[0]:%s\n", name[0]);
	printf("이름[4]:%s\n", name[4]);

	struct student st;
	strcpy(st.name, name[2]);
	printf("st.name:%s\n", st.name);
	//-----------------------------------------------------------------------------*/
	char* name[5] = { "홍길동", "전우치", "김유신", "유관순","강감찬" };
	char* tel[5] = { "010-1111-1111", "010-2222-2222", "010-3333-3333", "010-4444-4444","010-5555-5555" };
	char* addr[5] = { "대구", "서울", "부산", "대전","광주" };
	int age[5] = { 20, 30,40,50,60 };

	struct student st[100] = {0};
	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		// 5개의 배열값중에서 1개를 추출해서 복사
		strcpy(st[i].name, name[rand()%5]); 
		strcpy(st[i].tel, tel[rand()%5]);
		strcpy(st[i].addr, addr[rand()%5]);
		st[i].age = age[rand()%5];
	}

	for (int i = 0; i < 100; i++) {
		printf(">>> %d번째 학생 정보 <<<\n", i + 1);
		printf("이름:%s\n", st[i].name);
		printf("번호:%s\n", st[i].tel);
		printf("주소:%s\n", st[i].addr);
		printf("나이:%d\n", st[i].age);
	}
	
	// 이중 구조체
	st[0].pro.age = 50;				 // 첫번째 학생의 담당교수 나이
	strcpy(st[0].pro.name, "홍교수"); // 첫번째 학생의 담당교수 이름
	printf("%s 학생의 담당교수:%s\n", st[0].name, st[0].pro.name);

}