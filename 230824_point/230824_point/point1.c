#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
							// point�� �⺻����
							// point ������ �ּҸ� �����ϴ� �����̴�
int main()
{
	int num = 10;
	printf("1.num(������ ����� ��):%d\n", num); // 10
	printf(".num(pnum������ ����� �ּҰ�) :0x % p\n", &num); //0x0000...
	// �����ͺ��� pnum�� num������ �ּҰ� ����
	int* pnum = &num; // &num�� num�� �ּҰ�(����) ����Ʈ���� *pnum�� �ּҰ�(����)�� ����
	printf("2.*pnum(����� �ּҿ� ����ִ� ��):%d\n", *pnum); // 10

	*pnum = 20; // *pnum�� 2�����̹Ƿ� 2�������� num �� 10�� ���� �Ǿ� ������ 20���� �����ϸ鼭 num�� 20�̵ȴ�
	printf("3.*pnum(����� �ּҿ� ����ִ� ��):%d\n", *pnum); // 20

	printf("4.num(������ ����� ��):%d\n", num); // 20
	printf("5.pnum(pnum������ ����� �ּҰ�):0x%p\n", pnum); // 0x0000
}