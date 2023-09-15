#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
                          // break 조건문: break는 자신이 속한 반복문만 탈출한다! ★중요 자주쓰임
int main()
{
	int sum = 0, num = 0;

	while(1){
		sum += num;

		if (sum > 5000) {
			break;
		}
			num++;
		}
	
		printf("sum:%d", sum);
		printf("num:%d", num);








	}









