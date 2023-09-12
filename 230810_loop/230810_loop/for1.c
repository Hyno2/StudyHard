#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
				// for문 for(int 변수설정; 조건문(i<3); 증감식(i++);
int main()
{        //1       2       4
	for (int i = 0; i < 3; i++)
	{   //3
		printf("Hi~\n");

	}

	// 똑같은 걸 while문으로 풀시

	int j = 0;
	while (j < 3)
	{
		printf("while hi~\n");
		j++;
	}


}