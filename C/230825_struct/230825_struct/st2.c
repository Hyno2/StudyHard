#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // 문자열 처리 관련 strcpy

struct person // 구조체 정의 (정의로만은 동작하지 않음)
{
	char name[20];
	char phoneNum[20];              // 구조체의 멤버 변수
	int age;
};

int main()
{
	struct person man1, man2; // person은 사용자 정의 데이터타입, man1, man2는 구조체 변수
	strcpy(man1.name, "안성준"); // "안성준"을 man1.name에 복사 // strcpy : stringcopy 문자열 복사
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;

	// 이름을 키보드로 직접 입력받음
	printf("이름 입력:"); scanf("%s", man2.name); // &안붙는이유 strcpy가 주소변수이니깐
	printf("번호 입력:"); scanf("%s", man2.phoneNum);
	printf("나이 입력:"); scanf("%d", &man2.age); // age변수는 일반변수라서 &이필요

	printf(">>>>> 구조체에 저장된 정보 출력 <<<<<\n");
	printf("이름:%s\n", man1.name);
	printf("번호:%s\n", man1.phoneNum);
	printf("나이:%d\n", man1.age);

	printf("이름:%s\n", man2.name);
	printf("번호:%s\n", man2.phoneNum);
	printf("나이:%d\n", man2.age);

}