#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
							// ����ü �迭�� �ʱ�ȭ ����

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};
				// st5.c���� �ʱⰪ�� �����ʰ� scanf�� ����Ͽ� ��������
int main()
{
	struct person arr[3]=
	{
		{"�̽±�","010-1212-0001",21}, // ����ü ������ ���Եȴ�(�ʱ�ȭ)
		{"������","010-1313-0002",22},
		{"������","010-1717-0003",19}
	};
	int i;
	for (i = 0; i < 3; i++) {
		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
	}

}