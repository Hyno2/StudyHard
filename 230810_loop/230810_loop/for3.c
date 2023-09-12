#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	for (int cur = 2; cur < 10; cur++) // cur은 2부터 9까지 
	{
		for (int is = 1; is < 10; is++) // is는 1부터 9까지
			{
			printf("%dx%d=%d\n", cur, is, cur * is);
		
		}
		printf("\n");
	}
	//printf("j:%d\n"); // 프린트f로 문제점 찾아보기 트레이스
	// 왼쪽 클릭해서 빨간점 해서 로컬 windows 디버거 ->디버그 창 -> 지역 -> f11번으로 한문장씩 디버깅해봄

	// ★중요 : 행과 열의 개념은 반드시 2중 반복문에서 적용
	for (int i = 0; i < 3; i++) {
		printf("1행의 %d\t", i + 1);
	}
	printf("\n\n");
	for (int i = 0; i < 3; i++) { // 바깥쪽이 행 (3행)
		for (int j = 0; j < 3; j++) { //안쪽문이 열 (2열)

			printf("%d행 %d열\t", i + 1, j + 1);

		}printf("\n");
	}
}