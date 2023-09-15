#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	// 1차원 배열 dmz에 지뢰가 아래처럼 매설되었음.
	// *  B  *  B  *
	// 1  1  2  1  1
	// *:지뢰가없는땅, B:지뢰
	char dmz[] = { 'B','B','*','B','*' };
	int arr[5] = { 0 };

	const int start = 0; // 상수변수 (변수값 변경 불가능)
	const int end = 4; // #define End 4 랑 같은 의미

	for (int i = 0; i < 5; i++) {
		if (dmz[i] == 'B') arr[i] += 1; //arr[i]++
		if (dmz[i - 1] == 'B' && i != start) arr[i]++;
		if (dmz[i + 1] == 'B' && i != end) arr[i]++;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");


		if (dmz[0] == '*'); {
			printf("안전지대\n");
		}
		if (dmz[1] == 'B') {
			printf("지뢰\n");
		}
	
















}