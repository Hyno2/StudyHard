#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
                          // break ���ǹ�: break�� �ڽ��� ���� �ݺ����� Ż���Ѵ�! ���߿� ���־���
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









