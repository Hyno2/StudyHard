#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
							// point의 기본개념
							// point 변수는 주소를 참조하는 변수이다
int main()
{
	int num = 10;
	printf("1.num(변수에 저장된 값):%d\n", num); // 10
	printf(".num(pnum변수의 저장된 주소값) :0x % p\n", &num); //0x0000...
	// 포인터변수 pnum에 num변수의 주소값 저장
	int* pnum = &num; // &num은 num의 주소값(번지) 포인트변수 *pnum에 주소값(번지)가 대입
	printf("2.*pnum(저장된 주소에 들어있는 값):%d\n", *pnum); // 10

	*pnum = 20; // *pnum은 2번지이므로 2번지에는 num 값 10이 대입 되어 있지만 20으로 대입하면서 num도 20이된다
	printf("3.*pnum(저장된 주소에 들어있는 값):%d\n", *pnum); // 20

	printf("4.num(변수에 저장된 값):%d\n", num); // 20
	printf("5.pnum(pnum변수의 저장된 주소값):0x%p\n", pnum); // 0x0000
}