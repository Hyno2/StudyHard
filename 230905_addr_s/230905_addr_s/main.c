// main.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
#include <time.h>	// time()
#include <string.h>	// strcpy()
#include <conio.h>
#include <windows.h>// Sleep()
#include "menu.h"
#include "ui.h"
#include "file.h"
#include "rdata.h"

int main()
{
	char file[] = "address.bin";
	srand(time(NULL)); // 랜덤함수 사용을 위한 시드 설정
	set_cursor_type(NOCURSOR);
	font_color(LIGHT_GREEN);
	title();
	_getch();// system("pause")랑같음		

	system("cls");// 화면 청소
	font_color(LIGHT_GRAY);
	set_cursor_type(NORMAL_CURSOR);
	while (1) {
		switch (main_menu()) {
		case MAIN_RAND_INS:
		{
			ADDR ad[RAND_SIZE] = { 0 };
			int len = sizeof(ad) / sizeof(ADDR); // 배열 크기 // 배열 크기 : 구조체크기 x 10개의 크기 / 구조체크기
			for (int i = 0; i < len; i++) {
				ad[i].id = id[rand() % 5];
				strcpy(ad[i].name, name[rand() % 5]);// 문자열은 strcpy로 복사
				strcpy(ad[i].addr, addr[rand() % 5]);
				strcpy(ad[i].tel, tel[rand() % 5]);
				strcpy(ad[i].email, email[rand() % 5]);
			}
			file_write_rand(ad, file, len);	//주소전달, 주소전달, 값전달
			printf("랜덤 데이터를 생성중입니다......\n");
			Sleep(2000); // sec - ms - us - ns딜레이를 줌 1000이 1sec
			system("pause");// 효과주기 위해 잠시 멈춤
			break;
		}
		case MAIN_DIR_INS:
		{
			ADDR ad = { 0 };// 한명 정보니깐 배열을 쓸 필요 없다
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
		case MAIN_ALL_DEL:
			file_del_all(file);
			printf("전체 데이터를 삭제중입니다......\n");
			Sleep(1000);
			system("pause");
			break;
		case MAIN_VIEW:
			file_read(file);
			system("pause");
			break;
		case MAIN_SEARCH://	검색
			//	1. 검색할 이름을 입력받아야하고
			//	2. 입력받은 이름과 파일에서 읽어온 이름과 비교
		{
			while (1) {
				system("cls");
				int submenu = search_menu();
				if (submenu == 1) {
					char name[20] = { 0 };
					printf("검색할 이름을 입력하세요:");
					scanf("%s", name);
					// 이름 검색
					file_search(file, name, EMAIL_EMPTY, ID_EMPTY);
					system("pause");
				}
				else if (submenu == 2) {
					int id = 0;
					printf("검색할 ID를 입력하세요:");
					scanf("%d", &id);
					// ID 검색
					file_search(file, NAME_EMPTY, EMAIL_EMPTY, id);
					system("pause");
				}
				else if (submenu == 3) {
					char email[20] = { 0 };
					printf("검색할 Email을 입력하세요:");
					scanf("%s", email);
					// 이메일 검색
					file_search(file, NAME_EMPTY, email, ID_EMPTY);
					system("pause");
				}
				else if (submenu == 4) {
					break; // while() 탈출
				}
			}
			break;
		}
		case MAIN_DELETE:// 삭제
		{			// 1. 삭제할 이름 입력받기 
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
		case MAIN_UPDATE:	// 수정
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
		case MAIN_EXIT:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택!!\n");
		}
		system("cls");
		}
	}
}