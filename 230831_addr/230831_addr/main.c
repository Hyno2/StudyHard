#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand() exit()
#include <time.h>	// time
#include <string.h> // strcpy()		//[rand()%4]
	// 파일명 : address.bin --> 매개 변수로 전달
	//============================
	//	주소록 관리 프로그램 v1.0
	//============================
	// 1. 주소록 자동 생성 (랜덤)
	// 2. 주소록 직접 입력
	// 3. 주소록 전체 삭제
	// 4. 주소록 보기
	// 5. 종료
	//============================
	// 메뉴 선택 :
	

typedef struct _ADDR { // typedef struct _구조체명 { }구조체명; : 이렇게 정의 할시 다음부터 구조체선언할때 struct빼고 구조체 명만 쓰면된다
	int id;	// 1111 숫자값
	char name[20];
	char tel[20];
	char addr[30];
	char email[50];
}ADDR;
// 전역변수 입력시 const 상수변수로 기입하면 타인이 봤을때 알아보기 좋다
const int id[] = { 111, 222, 333, 444, 555 };
const char* name[] = { "이순신","강감찬","유관순","임꺽정","장보고"};
const char* tel[] = {"010-1111-1111","010-2222-2222","010-3333-3333","010-4444-4444","010-5555-5555"};
const char* addr[] = { "대구","부산","서울","울산","인천" };
const char* email[] = { "asd@naver.com","qwe@naver.com","qzx@gmail.com","kfd@daum.net","kgj@naver.com" };

int main_menu() { // return 값이 있기에 int 함수 사용
	int menu;
	printf("==========================\n");
	printf(" 주소록 관리 프로그램 v1.0\n");
	printf("==========================\n");
	printf("1. 주소록 자동 생성\n");
	printf("2, 주소록 직접 입력\n");
	printf("3. 주소록 전체 삭제\n");
	printf("4. 주소록 보기\n");
	printf("5. 종료\n");
	printf("==========================\n");
	printf("메뉴 입력:"), scanf("%d", &menu);
	return menu;
}

void rand_input(char fname[], ADDR adr[]) { // 매개변수 두개 사용, 매개변수명은 임의로 사용해도된다, 매개변수는 함수안의 반복되는 변수들을 매개변수로 해서 통일시키는 것 
	FILE* fp = fopen(fname, "ab");	//FILE*변수명 = fopen("파일이름.txt또는.bin" "at,wt,ab,wb,rt,rb 
	if (fp == NULL) {
		printf("파일 오픈 에러!!\n");
		return -1;
	}
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		adr[i].id = id[rand() % 5];
		strcpy(adr[i].name, name[rand() % 5]);
		strcpy(adr[i].tel, tel[rand() % 5]);
		strcpy(adr[i].addr, addr[rand() % 5]);
		strcpy(adr[i].email , email[rand() % 5]);

		fwrite(&adr[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
	printf("주소록 자동 생성 완료!\n");
}

void sel_input(char fname[], ADDR adr[]) {
	FILE* fp = fopen(fname, "ab");
	if (fp == NULL) {
		printf("파일 오픈 에러!!\n");
		return -1;
	}
	printf("주소록을 직접 입력 해주세요.\n");
	for (int i = 0; i < 1; i++) {
		printf("id:"), scanf("%d",&adr[i].id);
		printf("이름:"), scanf("%s",adr[i].name);
		printf("번호:"), scanf("%s",adr[i].tel);
		printf("주소:"), scanf("%s",adr[i].addr);
		printf("이메일:"), scanf("%s",adr[i].email);

		fwrite(&adr[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
	printf("주소록 직접 입력 완료!\n");
}

void del_data(char fname[]) {
	char ch;
	while (1) {
		printf("주소록을 전체 삭제 하시겠습니까? (Y/N)\n");
		scanf(" %c", &ch);
		if (ch == 'Y' || ch == 'y') {
			FILE* fp = fopen(fname, "wb");
			fclose(fp);
			printf("주소록이 전체 삭제 되었습니다.\n");
			break;
		}
		else if (ch == 'N' || ch == 'n') {
			printf("주소록 전체 삭제 취소하였습니다\n");
			break;
		}
		else {
			printf("잘못된 입력 입니다. 다시 입력해주세요.\n");
		}
	}
}

void show_data(char fname[]) {
	FILE* fp = fopen(fname, "rb");
	ADDR temp = { 0 };
	while (fread(&temp, sizeof(ADDR), 1, fp) == 1) {
		printf("ID:%d 이름:%s 번호:%s 주소:%s 이메일:%s\n",
			temp.id, temp.name, temp.tel, temp.addr, temp.email);
	}
	fclose(fp);
}

int main()		
{
	ADDR adr[5] = {0};
	char fname[] = "address.bin";
	
	while (1) {
		switch (main_menu()) {
		case 1:
			rand_input(fname,adr);
			break;
		case 2:
			sel_input(fname,adr);
			break;
		case 3:
			del_data(fname);
			break;
		case 4:
			show_data(fname);
			break;
		case 5:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("잘못된 입력입니다!!\n");
			break;
		}
	}
}