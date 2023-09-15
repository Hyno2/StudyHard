#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
			//do ~ while 문 : 맨처음 조건이 없으므로 최소한 1번은 무조건 동작해라
			// do를 꼭 실행 시키고 while 조건이 뒤에 옴
int main()
{
	int total =0 , num = 0;
	do
	{
		printf("정수입력(0 to quit):");
		scanf("%d", &num);
		total += num; // total = total + num 
	                  // 풀이: 입력num에 1을 대입하면 total = 1이되고 
		              // 다시 반복하여 입력num에 2대입시 total=1이였으니 total = 1 + 2가되어서
		              // 조건에 맞지않기전까지 합계를 구한다

	} while (num!=0); //0과 같지않다

	printf("합계: %d\n", total);


}