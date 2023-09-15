#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
									// switch : if else if 대신 쓸수 있지만 범위가 있는 형태는 사용불가능하다
									// switch()안에 값은 case의 값과 동일한 형태를 가지고 있어야 한다
									//★중요 반복문 내에서 switch 사용시 break 사용할떄 주의해야한다
int main()
{
	int num;
	printf("1이상 5이하의 정수 입력:");
	scanf("%d", &num);
	switch (num) {
	case 1:
			printf("1은 ONE\n");
			break;
	case 2:
			printf("2는 TWO\n");
			break;
	case 3:
			printf("3은 THREE\n");
			break; 
	case 4:
			printf("4은 FOUR\n");
			break;
	case 5:
			printf("5은 FIVE\n");
			break;
	default:
			printf("default\n");
	}












}