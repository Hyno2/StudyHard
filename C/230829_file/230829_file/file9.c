#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	
									// ����ü ���� ����� (�߿�) �ٸ� ���α׷��� ���� ������ �ƴϴ�!
									// ����ü�� ��κ� ���̳ʸ���� rb wb�� ���� bin
typedef struct fren // typedef Ÿ���� ���� �����Ѵ�
{
	char name[10];
	char sex;
	int age;
}Friend; // ����ü ����

int main()
{
	FILE* fp;
	Friend myfren1; // ����ü�� ����
	Friend myfren2;	// ����ü�� ����

	/*** file write ***/
	fp = fopen("friend.bin", "wb");
	printf("�̸�, ����, ���� �� �Է�:");
	scanf("%s %c %d", myfren1.name, &myfren1.sex, &myfren1.age);
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp); // void*�� �����ص���, sizeof ũ��, 1���̸� ��°�� ���(�ϳ��� �Ƚᵵ�뼭 ����),
	fclose(fp);

	/*** file read ***/
	fp = fopen("friend.bin", "rb");
	fread(&myfren2, sizeof(myfren2), 1, fp);
	printf("%s %c %d\n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);

}