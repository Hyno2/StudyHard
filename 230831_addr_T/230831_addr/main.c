// main.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
#include <time.h>	// time()
#include <string.h>	// strcpy()
#include <windows.h>// win32 api 사용 (윈도우 환경에서만 사용 가능)
#include <conio.h>
											//	디버깅 습관 들이고 디버깅할떄 디버그 창 조사직이용해라
											//	화면 디자인, 기능 추가를 혼자해보면 좋다 그 과정을 포트폴리오로 만들어라
											//	조시식: 변수를 값을 직접 입력해서 디버깅 할수있다
											//	형상관리 프로그램 : 
											//	NAS, github, perforce
// #define NOCURSOR			0
// #define SOLID_CURSOR		1
// #define NORMAL_CURSOR	2

#define RAND_SIZE	5	//define 된 값을 쓸수잇다 RAND_SIZE 값변경할떄 얘만바꾸면되서 편함

typedef enum {
	NOCURSOR,		// 커서 없앰		0
	SOLID_CURSOR,	// solid 형태	1
	NORMAL_CURSOR	// 일반 형태		2
} CURSOR_TYPE;		

typedef enum {
	BLACK,	// 0
	BLUE,	// 1
	GREEN,	// 2
	CYAN,
	RED,
	PURPLE,
	YELLOW,
	WHITE,
	GRAY,
	LIGHT_BLUE,
	LIGHT_GREEN,
	LIGHT_CYAN,
	LIGHT_RED,
	LIGHT_PURPLE,
	LIGHT_YELLOW,
	LIGHT_GRAY	// 15
} FONT_COLOR;		

typedef struct _ADDR {
	int id;
	char name[20];
	char tel[20];
	char addr[30];
	char email[50];
} ADDR;		

const int id[] = { 111, 222, 333, 444, 555 };
const char* name[] = { "홍길동", "전우치", "강감찬", "유관순", "이순신" };
const char* tel[] = { "010-1234-1234", "010-1234-1111", "010-1234-2222",
	"010-1234-3333", "010-1234-4444" };
const char* addr[] = { "대구 동구 신암4동", "서울 동구 신암4동" ,
	"광주 동구 신암4동", 	"대전 동구 신암4동", "부산 동구 신암4동" };
const char* email[] = { "hong@naver.com", "joen@kakao.com",
	"kang@gmail.com", "yu@msn.com", "lee@daum.net" };

// 함수 정의 프로토타입	main 위에쓰는것보다 장점이 있음
int main_menu();
void title();
void gotoxy(int x, int y);
void set_cursor_type(CURSOR_TYPE type);
void font_color(FONT_COLOR color);
void file_write_rand(ADDR ad[], char filename[], int len);
void file_write(ADDR ad, char filename[]);
void file_read(char filename[]);
void file_del_all(char filename[]);
void file_search(char filename[], char name[]);
void file_delete(char filename[], char delName[]);
void file_delete2(char filename[], char delName[]);
void file_update(char filename[], char sname[], char dname[]);

int main()
{
	char file[] = "address.bin";	//  =char*file = "address.bin" ; 과같은데 포인트가 다른데 안쓰여서 배열로 표시
	srand(time(NULL)); // 랜덤함수 사용을 위한 시드 설정
	set_cursor_type(NOCURSOR);
	font_color(LIGHT_GREEN);
	title();
	_getch();

	system("cls");	// 화면 청소해라
	font_color(LIGHT_GRAY);
	set_cursor_type(NORMAL_CURSOR);
	while (1) {
		switch (main_menu()) {
		case 1:
		{
			ADDR ad[RAND_SIZE] = { 0 };
			int len = sizeof(ad) / sizeof(ADDR); // 배열 크기 : 구조체크기 x 10개의 크기 / 구조체크기
			for (int i = 0; i < len; i++) {
				ad[i].id = id[rand() % 5];
				strcpy(ad[i].name, name[rand() % 5]);	// 문자열은 strcpy로 복사
				strcpy(ad[i].addr, addr[rand() % 5]);
				strcpy(ad[i].tel, tel[rand() % 5]);
				strcpy(ad[i].email, email[rand() % 5]);
			}
			file_write_rand(ad, file, len);	//주소전달, 주소전달, 값전달
			printf("랜덤 데이터를 생성중입니다......\n");// 효과주기위해
			Sleep(2000); // sec - ms - us - ns	딜레이를 줌 1000이 1sec
			system("pause");	// 효과주기 위해 잠시 멈춤
			break;
		}
		case 2:
		{
			ADDR ad = { 0 };	// 한명 정보니깐 배열을 쓸 필요 없다
			printf("ID:");
			scanf("%d", &ad.id);
			
			printf("이름:");
			scanf("%s", ad.name);
			
			printf("전화:");
			scanf("%s", ad.tel);
			
			printf("주소:");
			getchar();
			gets(ad.addr);
			
			printf("Email:");
			scanf("%s", ad.email);	
			file_write(ad, file);	//값에 의한 전달(구조체 일반변수) , 주소의 의한 전달(배열변수)
			printf("데이터가 입력중입니다......\n");
			Sleep(1000);
			system("pause");
			break;
		}
		case 3:
			file_del_all(file);
			printf("전체 데이터를 삭제중입니다......\n");
			Sleep(1000);
			system("pause");
			break;
		case 4:
			file_read(file);
			system("pause");
			break;
		case 5:	 //	검색
					//	1. 검색할 이름을 입력받아야하고
					//	2. 입력받은 이름과 파일에서 읽어온 이름과 비교
		{
			char name[20] = { 0 };
			printf("검색할 이름을 입력하세요:");
			scanf("%s", name);
			file_search(file, name);
			system("pause");
			break;
		}
		case 6:	// 삭제
					// 1. 삭제할 이름 입력받기 
					// 2. 파일에서 읽은 이름과 삭제할 이름을 비교한다
					// 3. 이름이 다른 구조체들을 배열에 복사한다 (입력받은 이름과 같으면 복사X)
					// 4. 기존 파일에 w모드로 열어서 파일에 쓰기
		{
			printf("삭제할 이름 입력:");
			char name[20];
			scanf("%s", name);
			printf("%s 데이터를 삭제중입니다...\n", name);
			file_delete2(file, name);
			Sleep(1000);
			system("pause");
			break;
		}
		case 7:// 수정
				// 1. 수정(검색)할 이름과 입력하고, 수정할 이름을 입력받는다
				// 2. 파일에서 읽어와서 검색값과 비교한다.
				// 3. 값이 같다면 수정할 이름으로 바꾸어서 빈 배열에 복사한다.
				// 4. 다시 덮어쓴다
		{
			printf("검색할 이름 입력:");
			char sname[20];
			scanf("%s", sname);
			printf("수정할 이름 입력:");
			char dname[20];
			scanf("%s", dname);
			printf("%s 데이터를 수정중입니다...\n", sname);
			file_update(file, sname, dname);
			Sleep(1000);
			system("pause");
			break;
		}
		case 8:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택!!\n");
		}
		system("cls");
	}
}

int main_menu()	// return 이있으므로 void를 쓰면안댄다
{
	printf("=============================\n");
	printf("주소록 관리 프로그램 v1.0\n");
	printf("=============================\n");
	printf("1.주소록 자동 생성\n");
	printf("2.주소록 직접 입력\n");
	printf("3.주소록 전체 삭제\n");
	printf("4.주소록 보기\n");
	printf("5.주소록 검색\n");
	printf("6.주소록 삭제\n");
	printf("7.주소록 수정\n");
	printf("8.종료\n");
	printf("=============================\n");
	printf("메뉴 선택:");
	int menu;
	scanf("%d", &menu);
	return menu;
}

void title()
{
	int x = 5;
	int y = 3;
	gotoxy(x, y + 0); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	gotoxy(x, y + 1); printf("■							     ■");
	gotoxy(x, y + 2); printf("■							     ■");
	gotoxy(x, y + 3); printf("■							     ■");
	gotoxy(x, y + 4); printf("■							     ■");
	gotoxy(x, y + 5); printf("■							     ■");
	gotoxy(x, y + 6); printf("■							     ■");
	gotoxy(x, y + 7); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	gotoxy(x + 12, y + 2); printf("주소록 관리 프로그램 v1.5");
	gotoxy(x + 33, y + 4); printf("개발날짜	: 2023.09.01");
	gotoxy(x + 33, y + 5); printf("개발자	: 이현오");
	gotoxy(x, y + 12); printf("메인화면 이동은 아무키나 누르세요!!!");
}

void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	// 윈도우 콘솔에서 커서 위치 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void set_cursor_type(CURSOR_TYPE type)
{
	CONSOLE_CURSOR_INFO info = { 0 };
	switch (type) {
	case NOCURSOR:
		info.dwSize = 1;
		info.bVisible = FALSE;
		break;
	case SOLID_CURSOR:
		info.dwSize = 100;
		info.bVisible = TRUE;
		break;
	case NORMAL_CURSOR:
		info.dwSize = 20;
		info.bVisible = TRUE;
		break;
	}
	// 커서 타입을 설정 (win32 API)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

void font_color(FONT_COLOR color)
{
	// 폰트에 색생 적용
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void file_write_rand(ADDR ad[], char filename[], int len)	// 구조체 배열 , 파일이름배열 , 구조체의 크기	
{
	FILE* fp = fopen(filename, "ab");	//ab,wb,rb , at,wt,rt 이어쓰기,덮어쓰기,읽기
	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}

	for (int i = 0; i < len; i++) {
		fwrite(&ad[i], sizeof(ADDR), 1, fp);	// &주소값 ad[i]배열일반변수, sizeof크기 , 1덩어리, file에
	}
	fclose(fp);
}

void file_write(ADDR ad, char filename[])
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}
	fwrite(&ad, sizeof(ADDR), 1, fp);
	fclose(fp);
}

void file_read(char filename[])
{
	// 데이터가 없으면 "데이터가 존재하지 않습니다" 에러 메시지를 출력!
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 읽기 오류!\n");
		exit(0);
	}
	ADDR ad = { 0 };	// 여기다 읽기 위해 빈 구조체를 만들어준다
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {	// 리턴값이 1이면있으면 반복해라
		printf("번호:%d\n", count++);		
		printf("ID:%d\n", ad.id);
		printf("이름:%s\n", ad.name);
		printf("전화:%s\n", ad.tel);
		printf("주소:%s\n", ad.addr);
		printf("이메일:%s\n", ad.email);
		printf("==========================\n");
		check = 1; // while문이 동작하면(데이터가 있으면) check가 1이 되게 해서 반복실행하고
	}
	fclose(fp);
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");// 만약 0일경우는(데이터가 존재하지않기에) 데이터 존재 하지 않습니다.
	}
}

void file_del_all(char filename[])	// 파일을 삭제하는 기능이 없으므로 아무것도 안쓰고 쓰기모드하면 다 지워짐
{
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("파일 읽기 오류!\n");
		exit(0);
	}
	fclose(fp);
}

void file_search(char filename[], char name[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 오류!\n");
		exit(0);
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, name) == 0) {	// strcmp(비교 대상, 비교대상) 동일하다면 == 0 
			printf("번호:%d\n", count++);
			printf("ID:%d\n", ad.id);
			printf("이름:%s\n", ad.name);
			printf("전화:%s\n", ad.tel);
			printf("주소:%s\n", ad.addr);
			printf("이메일:%s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("검색할 데이터가 존재하지 않습니다.\n");
	}
}

void file_delete(char filename[], char delName[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 오류!\n");
		exit(0);
	}

	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	//	side effect : 내가 한 수정때문에 오류가 오류를 불러냄, 내가 한 수정을 지우고 원인분석을 정확히 다시 해본다
	//	데이터가 1개 남았을때 삭제가 되지 않는 버그가 존재한다 [230905_hyuno] <-- 실무에서 이런식으로 오류에 표기해둔다 다른사람이 이해하기 쉽게
	//	while 문에서 한개남았을때의 처리기능,방법이 없어서 그렇다 문제는 한개남은 것이 지울이름과 같기에 그렇다

	while (fread(&ad, sizeof(ad), 1, fp) == 1) {	// 한글자씩 읽는다, ad크기만큼, 1덩어리 fp파일
		if (strcmp(ad.name, delName) != 0) { // 삭제할 이름이 아니라면 
			del_arr[i].id = ad.id;	// 정수 복사
			strcpy(del_arr[i].name, ad.name);	// 문자열 복사
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].email, ad.email);
			check = 1;
			i++;
		}
	}
	fclose(fp);
	printf("복사한 개수:%d\n", i);
	if (check == 0&& strcmp(ad.name, delName) != 0) {	// 조건을 좀더 까다롭게 한다
		printf("삭제할 데이터가 존재하지 않습니다.\n");
		return; // 만일 삭제할 정보가 없다면 리턴으로 처리	void 함수가 종료된다
	}
	// 배열에 저장된 구조체 정보를 파일에 쓰기
	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}
	// 존재하는 구조체 정보만 파일에 저장
	for (int i = 0; i < 200; i++) {	// 갯수를 i로 해서 반복되는 횟수만 표시하게 할수도 있다.
		//printf("del_arr[%d]:%d\n", i, del_arr[i].id);	// 디버깅 하기싫으면 계속 값을 printf로 찍어봐라
		// 존재하는 구조체 정보만 파일에 저장 (빈공백 제거)
		//if (strcmp(del_arr[i].name, "") != 0) {	문자열으로 비교하기
		//if (del_arr[i].id != 0) {
		
		// 배열에 데이터가 없으면 반복문 탈출
		if (del_arr[i].id == 0) break;{
			fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
		}
	}
	fclose(fp2);
	
}

void file_delete2(char filename[], char delName[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 오류!\n");
		exit(0);
	}

	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	// 데이터가 1개 남았으면 삭제가 되지 않는 버그 존재함   
 	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, delName) != 0) { // 삭제할 이름이 아니라면
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].email, ad.email);
			check = 1;
			i++;
		}
	}
	fclose(fp);
	printf("복사한 개수:%d\n", i);
	int size = i;
	if (check == 0	&&strcmp(ad.name, delName) != 0) {
		printf("삭제할 데이터가 존재하지 않습니다.\n");
		return; // void 함수 종료
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}

	for (int i = 0; i < size; i++) {	// size 가 0이므로 탈출
		printf("del_arr[%d]:%d\n", i, del_arr[i].id);
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);

}

void file_update(char filename[], char sname[], char dname[])
{	
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 오류!\n");
		exit(0);
	}

	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;	
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, sname) == 0) { // 수정할 이름과 같다면
			strcpy(del_arr[i].name, dname);
			check = 1;
		}
		else {
			strcpy(del_arr[i].name, ad.name);
		}
		del_arr[i].id = ad.id;			
		strcpy(del_arr[i].addr, ad.addr);
		strcpy(del_arr[i].tel, ad.tel);
		strcpy(del_arr[i].email, ad.email);		
		i++;
	}
	fclose(fp);
	int size = i;
	if (check == 0) {
		printf("수정할 데이터가 존재하지 않습니다.\n");
		return; // void 함수 종료
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}

	for (int i = 0; i < size; i++) {
		printf("del_arr[%d]:%d\n", i, del_arr[i].id);
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);
}