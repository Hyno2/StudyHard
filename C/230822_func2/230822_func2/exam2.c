#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h> exit()

int main_menu()
{
	printf("--------------------------------\n");
	printf(" 구구단을 출력하는 함수 연습 1.0v\n");
	printf("--------------------------------\n");
	printf(" 1. 구구단 짝수단 출력(2~8)\n");
	printf(" 2. 구구단 홀수단 출력(3~9)\n");
	printf(" 3. 구구단 전체 출력(2~9)\n");
	printf(" 4. 종료\n");
	printf("--------------------------------\n");
	printf(" 메뉴 선택:");
	int menu;
	scanf("%d", &menu);
	return menu;
}

// 1개로 써보기
void comm_gugu(int a)
{
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			if (a==1 && j%2==0) {
				printf("%dx%d=%d\t", j, i, j * i);
			}
			else if (a==2 && j%2!=0) {
				printf("%dx%d=%d\t", j, i, j * i);
			}
			else if (a==3) {
				printf("%dx%d=%d\t", j, i, j * i);
			}

		}printf("\n");
	}
}
// 전역변수를 이용해서 값에 대입한후 써도됌
const char CHECK_FULL = 'f';  //const 상수변수 (값을 변경할수 없는 변수
// #define CHECK_FULL로 써도 됌 같은거임
const char CHECK_EVEN = 'e';
const char CHECK_ODD = 'o';

/* 3개로 나눠쓰기
void first_gugu()
{
	for (int i = 1; i < 10; i++) { 
		for (int j = 2; j < 10; j++) {
			if (j % 2 == 0) {
				printf("%dx%d=%d\t", j , i, j * i);
			}
		}printf("\n");
	}
}
void second_gugu()
{
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			if (j % 2 != 0) {
				printf("%dx%d=%d\t", j, i, j * i);
			}
		}	printf("\n");
	}
}
void full_gugu() 
{
	for (int i = 1; i < 10; i++) { // 1~9
		for (int j = 2; j < 10; j++) { // 단 2~9
			printf("%dx%d=%d\t", j, i, j * i);
		}
		printf("\n");
	}
}
*/
int main()
{
	
	while (1) { // 무한반복
		switch (main_menu()) {
		case 1:
			//first_gugu(); break; // 기능추가
			comm_gugu(1); break;
		case 2:
			//second_gugu(); break;
			comm_gugu(2); break;
		case 3:
			//full_gugu(); break;
			comm_gugu(3); break;
		case 4:
			printf("프로그램 종료\n"); exit(0); // exit(0) 프로그램 강제 종료
		default:
			printf("잘못된 메뉴 입력!!\n"); break;
		}
	}
	
}