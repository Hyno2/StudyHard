#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	
									// 구조체 변수 입출력 (중요) 다른 프로그래밍 언어와 공통은 아니다!
									// 구조체는 대부분 바이너리모드 rb wb로 쓴다 bin
typedef struct fren // typedef 타입을 내가 정의한다
{
	char name[10];
	char sex;
	int age;
}Friend; // 구조체 정의

int main()
{
	FILE* fp;
	Friend myfren1; // 구조체의 변수
	Friend myfren2;	// 구조체의 변수

	/*** file write ***/
	fp = fopen("friend.bin", "wb");
	printf("이름, 성별, 나이 순 입력:");
	scanf("%s %c %d", myfren1.name, &myfren1.sex, &myfren1.age);
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp); // void*는 생략해도댐, sizeof 크기, 1덩이리 통째로 써라(하나씩 안써도대서 편리함),
	fclose(fp);

	/*** file read ***/
	fp = fopen("friend.bin", "rb");
	fread(&myfren2, sizeof(myfren2), 1, fp);
	printf("%s %c %d\n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);

}