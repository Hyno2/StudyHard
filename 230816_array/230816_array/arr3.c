#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	char str[50];
	//int idx = 0;

	printf("문자열 입력");
	scanf("%s", str);  // 문자열을 입력받아 배열 str에 저장 배열이름 
                       //★중요 :배열 str의 앞에는 &연산자를 붙이지않는다

	printf("입력 받은 문자열: %s \n", str);

	printf("문자 단위 출력: ");
	//while (str[idx] != '\0') {                while 방법
		//printf("% c", str[idx]);
		//idx++;
	//}
		for (int idx = 0; str[idx] != '\0'; idx++) { // for 방법
			printf("%c", str[idx]);
}
	printf("\n");











}