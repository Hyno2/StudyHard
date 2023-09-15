#include <stdio.h>

int main()
{
	// 일반변수: 재사용이 가능함 
	// ex) n2 = 300; 값을 변경가능
	// 상수변수(스칼라): const가 변수앞에 붙음. 대문자로 표시 (재사용 불가) 
	// ex) const int n = 100; 값을 변경 불가능

	int result;
	int num1, num2, num3; 

	printf("세 개의 실수 입력");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d + %d + %d\n", num1, num2, num3);


	printf("첫번째 정수");
	scanf_s("%d", &num1);
	printf("두번째 정수");
	scanf_s("%d", &num2);
	printf("세번째 정수");
	scanf_s("%d", &num3);

	result = num1 + num2 + num3;
	printf(" %d + %d + %d\n", num1, num2, num3);


}