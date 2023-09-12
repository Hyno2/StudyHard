/*
제 목 : Hello world 출력하기
기 능 : 문자열의 출력
파일이름 : 230808_hello.c
수정날짜 : 2023. 08. 08
작성자 : 이현오
*/
#include <stdio.h> // 헤더파일 선언

int main(void) // main 함수의 시작
{
	/*
	이 함수 내에서는 하나의 문자열을 출력한다
	문자열은 모니터로 출력된다.
	\n은 new line
	함수안의 끝맞침에는 세미클론 ; 사용
	main 함수는 한 프로젝트에 한개만 존재 가능
	*/

	printf("Hello world! \n"); // 문자열의 출력
	return 0; // 0의 반환

} // main 함수의 끝