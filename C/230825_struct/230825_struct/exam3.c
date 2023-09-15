#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()

struct customer
{
	char name[20];
	char tel[20];
	int birth;
	char addr[20];
	char job[20];
};

struct Car
{
	char car[20];
	char price[20];
	char color[20];
	int year;
};

int main()
{
	// 차량고객관리 프로그램 1.0v
	// 고객, 차량 구조체 -> (클래스로 확장)
	// 고객: 이름, 폰번호, 주소, 직업, 생일
	// 차량: 모델명, 가격, 색상, 연식
	// 10명의 고객정보를 배열에서 랜덤하게 추출하여 입력 및 출력
	struct customer cus[10] = { 0 };
	srand(time(NULL));

	char* name[10] = { "유관순", "이순신","전우치","김유신","강감찬","임꺽정","김수로","이영택","박우정","임시은" };
	char* tel[10] = { "010-1111-1111", "010-2222-2222","010-3333-3333","010-4444-4444","010-5555-5555","010-6666-6666","010-7777-7777","010-8888-8888",
		"010-9999-9999","010-0000-0000" };
	int birth[10] = { 20,25,23,28,30,35,40,32,52,50 };
	char* addr[10] = { "대구","부산","인천","전주","광주","김해","대전","서울","경기","강원" };
	char* job[10] = { "의사","판사","프리랜서","약사","교사","공무원","현장","교수","학생","영업" };
	
	struct Car caa[10] = {0};
	
	char* car[10] = { "아반떼","소나타","그랜져","g80","k3","k5","gv80","k9","gv70","아이오닉" };
	char* price[10] = { "2천","3천","4천","5천","6천","7천","5.5천","9천","8천","6.6천" };
	char* color[10] = { "블루","레드","블랙","화이트","그린","오렌지","그레이","퍼플","핑크","딥그린" };
	int year[10] = { 2013,2014,2015,2017,2018,2019,2020,2021,2022,2023 };

	
	for (int i = 0; i < 10; i++) {
		strcpy(cus[i].name, name[rand() % 10]);
		strcpy(cus[i].tel, tel[rand() % 10]);
		strcpy(cus[i].addr, addr[rand() % 10]);
		strcpy(cus[i].job, job[rand() % 10]);
		cus[i].birth = birth[rand() % 10];
		strcpy(caa[i].car, car[rand() % 10]);
		strcpy(caa[i].price, price[rand() % 10]);
		strcpy(caa[i].color, color[rand() % 10]);
		caa[i].year = year[rand() % 10];

		printf("이름:%s\t", cus[i].name);
		printf("번호:%s\t", cus[i].tel);
		printf("주소:%s\t", cus[i].addr);
		printf("직업:%s\t", cus[i].job);
		printf("\n");
		printf("생일:%d\t", cus[i].birth);
		printf("차종:%s\t", caa[i].car);
		printf("가격:%s\t", caa[i].price);
		printf("색:%s\t", caa[i].color);
		printf("년식:%d\t", caa[i].year);
		printf("\n\n");
	}
	printf("\n");
}	
