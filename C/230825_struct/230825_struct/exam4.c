#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()					
//									C언어-구조적 프로그래밍 = 데이터 우선시한다
//									객체지향 프로그래밍 - 객체를 우선시한다
//												ERP =회사 관리 프로그램을 통칭하여 말한다
//						개발 순서 :주제회의 - 요구사항(B2B,B2C,B2G) - 설계(UI,DB,프로그램) - 구현(코딩,알고리즘 중요) - 테스트 - 유지보수
// -------------------------------------
	//		고객차량 관리 프로그램 v1.5
	//--------------------------------------
	// 1. 구매차량 및 고객 랜덤 입력
	// 2. 구매차량 및 고객 정보 보기
	// 3. 종료
	//--------------------------------------
struct caa
{
	char car[20];
	char price[20];
	char color[20];
	int year;
};
struct customer
{
	char name[20];
	char tel[20];
	int birth;
	char addr[20];
	char job[20];
	struct caa ca;	// 구매차량
};


// 함수는 기능적인 역활, 구조체는 변수들을 여러개쓸수있다.
// 전역변수 쓴걸 매개변수로 어떻게 할까 고민해보자, 매개변수가 너무 많아 곤란하므로 전역변수로 쓰는게 맞다
// 항상 매개변수 먼저 생각해보고 안되면 전역변수로 써야한다
// 큰 배열값들은 보통 전역변수로 사용된다 지역변수로 사용시 stackoverflow되서 메모리오버된다

char* name[10] = { "유관순", "이순신","전우치","김유신","강감찬","임꺽정","김수로","이영택","박우정","임시은" };
char* tel[10] = { "010-1111-1111", "010-2222-2222","010-3333-3333","010-4444-4444","010-5555-5555","010-6666-6666","010-7777-7777","010-8888-8888",
	"010-9999-9999","010-0000-0000" };
int birth[10] = { 20,25,23,28,30,35,40,32,52,50 };
char* addr[10] = { "대구","부산","인천","전주","광주","김해","대전","서울","경기","강원" };
char* job[10] = { "의사","판사","프리랜서","약사","교사","공무원","현장","교수","학생","영업" };
char* car[10] = { "아반떼","소나타","그랜져","g80","k3","k5","gv80","k9","gv70","아이오닉" };
char* price[10] = { "2천","3천","4천","5천","6천","7천","5.5천","9천","8천","6.6천" };
char* color[10] = { "블루","레드","블랙","화이트","그린","오렌지","그레이","퍼플","핑크","딥그린" };
int year[10] = { 2013,2014,2015,2017,2018,2019,2020,2021,2022,2023 };

int main_menu()
{
	int input;
	printf("-------------------------------------\n");
	printf("	고객차량 관리 프로그램 v1.5\n");
	printf("-------------------------------------\n");
	printf("1. 구매차량 및 고객 랜덤 입력\n");
	printf("2. 구매차량 및 고객 정보 보기\n");
	printf("3. 종료\n");
	printf("-------------------------------------\n");
	printf("입력하세요:"), scanf("%d", &input);
	return input;
}
void menu1(struct customer cus[])
{
	 
	for (int i = 0; i < 10; i++) {
		strcpy(cus[i].name, name[rand() % 10]);
		strcpy(cus[i].tel, tel[rand() % 10]);
		strcpy(cus[i].addr, addr[rand() % 10]);
		strcpy(cus[i].job, job[rand() % 10]);
		cus[i].birth = birth[rand() % 10];
		strcpy(cus[i].ca.car, car[rand() % 10]);
		strcpy(cus[i].ca.price, price[rand() % 10]);
		strcpy(cus[i].ca.color, color[rand() % 10]);
		cus[i].ca.year = year[rand() % 10];
	}
	printf("입력되었습니다!\n");
}
void menu2(struct customer cus[])
{
	for (int i = 0; i < 10; i++) {
		printf("이름:%s\t", cus[i].name);
		printf("번호:%s\t", cus[i].tel);
		printf("주소:%s\t", cus[i].addr);
		printf("직업:%s\t", cus[i].job);
		printf("\n");
		printf("생일:%d\t", cus[i].birth);
		printf("차종:%s\t", cus[i].ca.car);
		printf("가격:%s\t", cus[i].ca.price);
		printf("색:%s\t", cus[i].ca.color);
		printf("년식:%d\t", cus[i].ca.year);
		printf("\n\n");
	}
	printf("\n");
}

int main()
{
	struct customer cus[10] = { 0 };	// customer는 구조체 이름 (데이터 타입), 데이터 타입이라는걸 명심해라
	srand(time(NULL));	//랜덤함수를 사용하기 위한 조건
	while (1) {
		switch (main_menu()) {
		case 1:
			menu1(cus); break;
		case 2:
			menu2(cus); break;
		case 3:
			printf("프로그램 종료!\n"); exit(0);
		default:
			printf("잘못 선택 하셧습니다!!\n"); break;
		}
	}
}