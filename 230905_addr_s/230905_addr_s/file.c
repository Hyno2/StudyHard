#define _CRT_SECURE_NO_WARNINGS	// scanf
#include <stdio.h>	// file, printf
#include <stdlib.h>	// exit()
#include <string.h>	// strcpy
#include "file.h"

void file_write_rand(ADDR ad[], char filename[], int len)// 구조체 배열 , 파일이름배열 , 구조체의 크기
{
	FILE* fp = fopen(filename, "ab");//ab,wb,rb , at,wt,rt 이어쓰기,덮어쓰기,읽기
	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}

	for (int i = 0; i < len; i++) {
		fwrite(&ad[i], sizeof(ADDR), 1, fp);// &주소값 ad[i]배열일반변수, sizeof크기 , 1덩어리, file에
	
	}
	fclose(fp);
}

void file_write(ADDR ad, char filename[])
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}
	fwrite(&ad, sizeof(ADDR), 1, fp);
	fclose(fp);
}

void file_read(char filename[])
{
	// 데이터가 없으면 "데이터가 존재하지 않습니다" 에러 메시지를 출력!
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 읽기 오류!\n");
		exit(0);
	}
	ADDR ad = { 0 };	// 여기다 읽기 위해 빈 구조체를 만들어준다
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {	// 리턴값이 1이면있으면 반복해라
		printf("번호:%d\n", count++);
		printf("ID:%d\n", ad.id);
		printf("이름:%s\n", ad.name);
		printf("전화:%s\n", ad.tel);
		printf("주소:%s\n", ad.addr);
		printf("이메일:%s\n", ad.email);
		printf("==========================\n");
		check = 1;// while문이 동작하면(데이터가 있으면) check가 1이 되게 해서 반복실행하고
	}
	fclose(fp);
	if (check == 0) {// 만약 0일경우는(데이터가 존재하지않기에) 데이터 존재 하지 않습니다.
		printf("데이터가 존재하지 않습니다.\n");
	}
}

void file_del_all(char filename[])// 파일을 삭제하는 기능이 없으므로 아무것도 안쓰고 쓰기모드하면 다 지워짐
{
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("파일 읽기 오류!\n");
		exit(0);
	}
	fclose(fp);
}

void file_search_name(char filename[], char name[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 오류!\n");
		exit(0);
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, name) == 0) {	// strcmp(비교 대상, 비교대상) 동일하다면 == 0 
			printf("번호:%d\n", count++);
			printf("ID:%d\n", ad.id);
			printf("이름:%s\n", ad.name);
			printf("전화:%s\n", ad.tel);
			printf("주소:%s\n", ad.addr);
			printf("이메일:%s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("검색할 데이터가 존재하지 않습니다.\n");
	}
}

void file_search_id(char filename[], int id)
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 오류!\n");
		exit(0);
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (ad.id == id) {
			printf("번호:%d\n", count++);
			printf("ID:%d\n", ad.id);
			printf("이름:%s\n", ad.name);
			printf("전화:%s\n", ad.tel);
			printf("주소:%s\n", ad.addr);
			printf("이메일:%s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("검색할 데이터가 존재하지 않습니다.\n");
	}
}

void file_search_email(char filename[], char email[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 오류!\n");
		exit(0);
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, email) == 0) {
			printf("번호:%d\n", count++);
			printf("ID:%d\n", ad.id);
			printf("이름:%s\n", ad.name);
			printf("전화:%s\n", ad.tel);
			printf("주소:%s\n", ad.addr);
			printf("이메일:%s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("검색할 데이터가 존재하지 않습니다.\n");
	}
}

void file_search(char filename[], char name[], char email[], int id)
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 오류!\n");
		exit(0);
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, name) == 0 || strcmp(ad.email, email) == 0
			|| ad.id == id) {
			printf("번호:%d\n", count++);
			printf("ID:%d\n", ad.id);
			printf("이름:%s\n", ad.name);
			printf("전화:%s\n", ad.tel);
			printf("주소:%s\n", ad.addr);
			printf("이메일:%s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}		
	}
	fclose(fp);
	if (check == 0) {
		printf("검색할 데이터가 존재하지 않습니다.\n");
	}
}

void file_delete(char filename[], char delName[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 오류!\n");
		exit(0);
	}
	
	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	// 파일에 데이터가 1개 남았을때 미삭제 되는 버그 
	//	side effect : 내가 한 수정때문에 오류가 오류를 불러냄, 내가 한 수정을 지우고 원인분석을 정확히 다시 해본다
	//	데이터가 1개 남았을때 삭제가 되지 않는 버그가 존재한다 [230905_hyuno] <-- 실무에서 이런식으로 오류에 표기해둔다 다른사람이 이해하기 쉽게
	//	while 문에서 한개남았을때의 처리기능,방법이 없어서 그렇다 문제는 한개남은 것이 지울이름과 같기에 그렇다
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {// 한글자씩 읽는다, ad크기만큼, 1덩어리 fp파일
		if (strcmp(ad.name, delName) != 0) { // 삭제할 이름이 아니라면
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);// 문자열 복사
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].email, ad.email);
			check = 1;
			i++;
		}
	}
	fclose(fp);
	printf("복사한 개수:%d\n", i);
	if (check == 0 && strcmp(ad.name, delName) != 0) {// 조건을 좀더 까다롭게 한다
		printf("삭제할 데이터가 존재하지 않습니다.\n");
		return; // 만일 삭제할 정보가 없다면 리턴으로 처리	void 함수가 종료된다
	}
	// 배열에 저장된 구조체 정보를 파일에 쓰기
	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}
	// 존재하는 구조체 정보만 파일에 저장
	for (int i = 0; i < 200; i++) {
		// 배열에 데이터가 없으면 반복문 탈출
		if (del_arr[i].id == 0) break;
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
		// 갯수를 i로 해서 반복되는 횟수만 표시하게 할수도 있다.
		//printf("del_arr[%d]:%d\n", i, del_arr[i].id);	// 디버깅 하기싫으면 계속 값을 printf로 찍어봐라
		// 존재하는 구조체 정보만 파일에 저장 (빈공백 제거)
		//if (strcmp(del_arr[i].name, "") != 0) {	문자열으로 비교하기
		//if (del_arr[i].id != 0) {
	}
	fclose(fp2);
}

void file_delete2(char filename[], char delName[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 오류!\n");
		exit(0);
	}

	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;

	// 데이터가 1개 남았으면 삭제가 되지 않는 버그 존재함
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, delName) != 0) { // 삭제할 이름이 아니라면
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].email, ad.email);
			check = 1;
			i++;
		}
	}
	fclose(fp);
	printf("복사한 개수:%d\n", i);
	int size = i;
	if (check == 0 && strcmp(ad.name, delName) != 0) {
		printf("삭제할 데이터가 존재하지 않습니다.\n");
		return; // void 함수 종료
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}

	for (int i = 0; i < size; i++) {// size 가 0이므로 탈출
		printf("del_arr[%d]:%d\n", i, del_arr[i].id);
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);
}

void file_update(char filename[], char sname[], char dname[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 오류!\n");
		exit(0);
	}

	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, sname) == 0) { // 수정할 이름과 같다면
			strcpy(del_arr[i].name, dname);
			check = 1;
		}
		else {
			strcpy(del_arr[i].name, ad.name);
		}
		del_arr[i].id = ad.id;
		strcpy(del_arr[i].addr, ad.addr);
		strcpy(del_arr[i].tel, ad.tel);
		strcpy(del_arr[i].email, ad.email);
		i++;
	}
	fclose(fp);
	int size = i;
	if (check == 0) {
		printf("수정할 데이터가 존재하지 않습니다.\n");
		return; // void 함수 종료
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}

	for (int i = 0; i < size; i++) {
		printf("del_arr[%d]:%d\n", i, del_arr[i].id);
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);
}