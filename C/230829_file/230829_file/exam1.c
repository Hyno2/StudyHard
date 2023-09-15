#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	
		// --------------------------------
		//		파일 제어 프로그램 v1.0
		// --------------------------------
		// 1. 친구 정보 쓰기
		// 2. 친구 정보 읽기
		// 3. 종료
		// --------------------------------
		// 메뉴 선택:
typedef struct fren
{
	char name[10];
	char sex;
	int age;
}Friend;

int main_menu()
{
	int menu;
	printf("--------------------------------\n");
	printf("	파일 제어 프로그램 v1.0\n");
	printf("--------------------------------\n");
	printf("1. 친구 정보 쓰기\n");
	printf("2. 친구 정보 읽기\n");
	printf("3. 종료\n");
	printf("--------------------------------\n");
	printf("메뉴 선택 :"), scanf("%d", &menu);
	return menu;
}
void menu1()
{
	FILE* fp;
	Friend myfren1;
	fp = fopen("friend.bin", "wb");
	printf("이름, 성별, 나이 순 입력:");
	scanf("%s %c %d", myfren1.name, &myfren1.sex, &myfren1.age); //name 은 배열 , 나머지는 일반변수라 &
	fwrite(&myfren1, sizeof(myfren1), 1, fp); // 
	fclose(fp);
}
void menu2()
{
	FILE* fp;
	Friend myfren2;
	fp = fopen("friend.bin", "rb");
	fread(&myfren2, sizeof(myfren2), 1, fp);
	printf("%s %c %d\n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);
}
						//	FILE*fp;는 공통으로 쓰이니깐 매개변수로 사용 해도 된다
int main()
{
	while (1) {
		switch (main_menu()) {
		case 1: menu1();
			break;
		case 2: menu2();
			break;
		case 3:
			printf("프로그램 종료!"); 
			exit(0);
		default:
			printf("잘못된 입력입니다!!\n");
			break;
		}
	}

}