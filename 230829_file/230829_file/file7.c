#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	

int main()
{
	char name[10];
	char sex;
	int age;
	FILE* fp = fopen("friend.txt", "wt");
	for (int i = 0; i < 3; i++) {
		printf("이름 성별 나이 순 입력:");
		scanf("%s %c %d",name, & sex, &age);
		getchar(); // 버퍼에 남아있는 \n의 소멸을 위하여 사용, 나중에 쓰이니 중요
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);
}