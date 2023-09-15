#include <stdio.h>

int main()
{
	char* name = "이현오";
	int age = 200;
	char* number = "010-1234-4321";
	char* address = "대구광역시 수성구 시지로21";
	float h = 182.1;
	float k = 84.5;
	char o = 'O';

	printf("---------------------------------\n");
	printf("         수강생 정보 확인서    \n");
	printf("---------------------------------\n");
	printf("이름:%s\n", name);
	printf("나이:%d\n", age);
	printf("전화:%s\n", number);
	printf("주소:%s\n", address);
	printf("키:%.1fcm\n", h); 
	printf("몸무게:%.1fkg\n", k);
	printf("혈액형:%c형\n", o);

	printf("---------------------------------\n");

	int a = 100; 
	int b = 200;
	int c = a + b;


	printf("정수형변수a:%d\n", a);
	printf("정수형변수b:%d\n", b);
	printf("정수형변수c:%d\n", c);
	printf("덧셈값:%d\n", c);
	printf("%d+%d=%d\n", a, b, c);
	printf("%d와 %d의 합은 %d이다.\n", a, b, c);




}