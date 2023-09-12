#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	

											// 실전에선 배열보다 리스트를 쓴다 
											// 배열은 공간이 지정되있는곳인데
											// 리스트는 가변적인 공간이다
								
	// 주의 파일에 저장할때 기존 데이터가 계속 존재해야함 !!
	// 고객 정보: 이름, 전화, 주소
	// 차량 정보: 모델명, 가격, 연식
	//===============================
	//	고객 차량 관리 프로그램 v2.0
	//===============================
	// 1. 고객 정보 직접 입력
	// 2. 고객 정보 랜덤 입력
	// 3. 고객 정보 보기
	//===============================
	// 메뉴 선택:

typedef struct _CAR{
	char model[20];
	char price[20];
	int year;
}CAR;

typedef struct _CUST {
	char name[20];
	char tel[20];
	char addr[20];
	CAR car;
}CUST;

int main_menu() {
	printf("=============================\n");
	printf(" 고객 차량 관리 프로그램 v2.0\n");
	printf("=============================\n");
	printf("1. 고객 정보 직접 입력\n");
	printf("2. 고객 정보 랜덤 입력\n");
	printf("3. 고객 정보 보기\n");
	printf("4. 고객 정보 삭제\n");
	printf("5. 종료\n");
	printf("=============================\n");
	int menu;
	printf("메뉴 선택:"), scanf("%d", &menu);
	return menu;
}	

void select_input(CUST cus) {
	FILE* fp = fopen("select.bin", "wb");
	if (fp == NULL) {
		printf("파일 오픈 에러!!\n");
		return -1;
	}
	printf("구매자 고객정보를 입력하세요.\n");
	printf("이름:"), scanf("%s",cus.name); // getchar(); gets(cus.name);  공백을 입력받기위해 사용
	printf("번호:"), scanf("%s",cus.tel);
	printf("주소:"), scanf("%s",cus.addr);
	printf("차종:"), scanf("%s",cus.car.model);
	printf("가격:"), scanf("%s",cus.car.price);
	printf("연식:"), scanf("%d",&cus.car.year);

	fwrite(&cus, sizeof(CUST), 1, fp);

	fclose(fp);
	printf("고객 정보 직접 입력 완료!\n");
}

void random_input(CUST cus[]) {
	char* name[] = { "홍길동","전우치","강감찬","유관순" };
	char* tel[] = { "010-1111-1111","010-2222-2222","010-3333-3333","010-4444-4444" };
	char* addr[] = { "대구","서울","부산","대전" };

	char* model[] = { "아반떼","소나타","그랜져","K5" };
	char* price[] = { "2천","3천","4천","5천" };
	int year[] = { 2019,2020,2021,2022 };

	FILE* fp = fopen("select.bin", "ab");
		if (fp == NULL) {
			printf("파일 오픈 에러!!\n");
			return -1;
		}
	srand(time(NULL));
		for (int i = 0; i < 5; i++) {
			strcpy(cus[i].name, name[rand() % 4]);
			strcpy(cus[i].tel, tel[rand() % 4]);
			strcpy(cus[i].addr, addr[rand() % 4]);
			strcpy(cus[i].car.model, model[rand() % 4]);
			strcpy(cus[i].car.price, price[rand() % 4]);
			cus[i].car.year = year[rand() % 4];
			fwrite(&cus[i], sizeof(cus[i]), 1, fp);
	}
		fclose(fp);
		printf("고객 정보 랜덤 입력 완료!\n");
}

void show_cus(){
	FILE* fp = fopen("select.bin", "rb");
	CUST temp = { 0 };
	while (fread(&temp, sizeof(CUST), 1, fp) == 1) {
		printf("이름:%s 번호:%s 주소:%s 차종:%s 가격:%s 연식:%d\n",
		temp.name ,temp.tel, temp.addr,temp.car.model,temp.car.price,temp.car.year);
	}
	fclose(fp);
}

void del_cus() {
	char ch;
	printf("전체 데이터를 삭제하시겠습니까? (Y/N)\n");

	while (1) {
		scanf(" %c", &ch); // %c앞은 띄어주는게 좋다
		if (ch == 'Y' || ch == 'y') {
			FILE* fp = fopen("select.bin", "wb");
			fclose(fp);
			printf("전체 데이터를 삭제 하였습니다.\n");
			break;
		}
		else if (ch == 'N' || ch == 'n') {
			printf("전체 데이터 삭제를 취소하였습니다.\n");
			break;
		}
		else {
			printf("잘못된 입력! 다시 입력해주세요.\n"); 
		}
	}
}
int main()
{
	CUST cust = { 0 };
	CUST customer[4] = {0};

	while (1) {
		switch(main_menu()){
		case 1:
			select_input(cust);
			break;
		case 2:
			random_input(customer);
			break;
		case 3:
			show_cus();
			break;
		case 4:
			del_cus();
			break; 
		case 5:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택입니다!!\n");
			break;
		}
	}
}