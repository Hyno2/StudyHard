#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	

// for (int i = 0; i < 5; i++);{
//		if (strcmp(cu[i].name,"") == 0) {	//cu[i].name의값이 ""과 같다면 즉 고객 정보가 없으면 탈출함!
//          strcmp = 문자열을 비교한다
//			모르는 함수나 모르는 걸 봤을때 구글링으로 샘플링코드를 보고 이해하며 공부해야한다!
//			break;
//		}
//	printf("고객명: %s",cu[i].name);
//	printf("차종: %s",cu[i].ca.model);
//	printf("매니저명: %s",cu[i].man.manager);
// }

	// 고객이름, 차량모델, 매니저명
	//------------------------------------
	//	고객 차량 관리 프로그램 v1.6
	//------------------------------------
	// 1. 고객정보 직접 입력
	// 2. 고객정보 랜덤 입력
	// 3. 고객정보 보기
	// 4. 종료
	//------------------------------------
	// 메뉴선택:
struct car // 구조체 car 정의
{
	char model[20]; 
};

struct manager
{
	char manager[20];
};

struct customer
{
	char cusname[20];
	struct car ca;
	struct manager man;
};

int main_menu()
{
	int input;
	printf("------------------------------------\n");
	printf("고객 차량 관리 프로그램 v1.6\n");
	printf("------------------------------------\n");
	printf("1. 고객정보 직접 입력\n");
	printf("2. 고객정보 랜덤 입력\n");
	printf("3. 고객정보 보기\n");
	printf("4. 종료\n");
	printf("------------------------------------\n");
	printf("메뉴선택:"), scanf("%d", &input);
	return input;
}

char menu1(struct customer cus[]) 
{
	for (int i = 0; i < 5; i++) {
		printf("고객명:"), scanf("%s", &cus[i].cusname);
		printf("차종:"), scanf("%s", &cus[i].ca.model);
		printf("매니저명:"), scanf("%s", &cus[i].man.manager);
	}
	printf("입력되었습니다!\n");
	return cus;
}

char menu2(struct customer cus[])
{
	srand(time(NULL));
	char* model[5] = { "K5","K3","아반떼","소나타","그랜져" };
	char* manager[5] = { "이순신","이경화","박주은","김경식","이우성" };
	char* cusname[5] = { "박종팔","이종팔","김종팔","금종팔","차종팔" };
	for (int i = 0; i < 5; i++) {
		strcpy(cus[i].cusname, cusname[rand() % 5]);
		strcpy(cus[i].ca.model, model[rand() % 5]);
		strcpy(cus[i].man.manager, manager[rand() % 5]);
	}
	printf("랜덤 입력되었습니다!\n");
	return cus;
}

void show_menu(struct customer cus[])
{
	for (int i = 0; i < 5; i++) {
		printf("------------------------------------\n");
		printf("고객명:%s\t", cus[i].cusname);
		printf("차종:%s\t", cus[i].ca.model);
		printf("매니저명:%s\t", cus[i].man.manager);
		printf("\n\n");
	}
	printf("\n");
}

int main()
{
	struct customer cus[5] = {0};
	while (1) {
		switch (main_menu()) {
		case 1:
			menu1(cus);
			break;
		case 2:
			menu2(cus);
			break;
		case 3:
			show_menu(cus);
			break;
		case 4:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("잘못입력하셨습니다!!\n");
			break;
		}
	}
}