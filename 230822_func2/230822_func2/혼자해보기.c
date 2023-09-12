#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>  // time()
	// 1.main()에서 10개의 숫자를 저장하는 1차원 배열 생성
	// 2.랜덤하게 10개의 숫자를 배열에 저장
	// 3.배열의 주소값을 매개변수로 전달하고 홀,짝을 구분하여 출력 함수
/*void show_num(int a[])
{
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 == 0) {
			printf("%d\n", a[i]);
		}
		else {
			printf("%d\n", a[i]);
		}
	}
}
int main()
{
	int arr[10] = { 0 };
	srand(time(NULL));	// 매번 다른 시드값 생성
	int random = 0;	// 난수를 저장할 변수
	for (int i = 0; i < 10; i++) { // 10회 반복
		random = (rand() % 45) + 1; // 난수 생성 1 ~ 45까지
		arr[i] = random;
	}
	show_num(arr);
}*/
	/*printf("--------------------------------\n");
	printf(" 구구단을 출력하는 함수 연습 1.0v\n");
	printf("--------------------------------\n");
	printf(" 1. 구구단 짝수단 출력(2~8)\n");
	printf(" 2. 구구단 홀수단 출력(3~9)\n");
	printf(" 3. 구구단 전체 출력(2~9)\n");
	printf(" 4. 종료\n");
	printf("--------------------------------\n");
	printf(" 메뉴 선택:");
	*/
/*void comm_func(int a)
	{
		for (int i = 1; i < 10; i++) {
			for (int j = 2; j < 10; j++) {
				if (a == 1 && j % 2 == 0) {
					printf("%dx%d=%d\t", j, i, j * i);
				}
				else if (a == 2 && j % 2 != 0) {
					printf("%dx%d=%d\t", j, i, j * i);
				}
				else if (a == 3 ) {
					printf("%dx%d=%d\t", j, i, j * i);
				}
			}printf("\n");
		}

	}
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

	int main()
	{
		while (1) {
			switch (main_menu()) {
			case 1:
				comm_func(1); break;
			case 2:
				comm_func(2); break;
			case 3:
				comm_func(3); break;
			case 4:
				printf("종료"); exit(0);
			default:
				printf("잘못된 입력입니다."); break;
			}
		}
	}*/
	/*로또프로그램 6번 만들기
	6개의 배열을 만들고 중복되지 않는 숫자를 위해 전 번호랑 비교해서 해라
	랜덤 번호는 exam1에 있는거 쓰면됌*/



