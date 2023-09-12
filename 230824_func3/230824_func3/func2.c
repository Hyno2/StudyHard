#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
//#define DEBUG 1	// 주석으로 막혀있으면 디버깅코드가 동작X

								// 거품정렬, 삽입정렬, 선택정렬: 1차원 배열이지만 비교를 위해서 반복문을 두개 써야함
// 1.로또 생성(중복방지) - 배열까지의 학습 내용
// 2.함수로 처리 - 함수 학습
// 로또 번호를 저장할 배열 생성

void show_lotto(int lotto[]) {
	
	for (int i = 0; i < 6; i++) {
		lotto[i] = (rand() % 45) + 1; //1~45까지
		for (int j = 0; j < i; j++) {
			// 배열에 있는 숫자와 새로 획득한 숫자 비교
			if (lotto[i] == lotto[j]) {
				i--;
				break;
			}
		}
	}
}
int main()
{
	int lotto[6] = { 0 };	// 로또 번호를 저장할 배열
	srand(time(NULL));		// 매번 다른 시드값 생성
	show_lotto(lotto);		// 함수 호출
	for (int i = 0; i < 6; i++) {
		printf("%d\n", lotto[i]);
	}
	
}