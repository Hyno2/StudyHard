#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()
							// �л� 5���� ��,��,�� ������ ����,���,������ �����ϴ� ����ü
struct student         // 1�� ���� ����(Ʋ)
{
	int kor; // ����
	int eng; // ����
	int math; // ����
	int hap; // ����
	int avg; // ���
	char hak[20]; // ����
	char name[20]; // �̸�
};

int main()
{	// 1. ����ü�� �����ϰ� ����ü �迭 ���� ����
	struct student arr[5] = { 0 };
	
	// 2. 5���� �л����� ������ ��,��,�� ������ �Է��ϰ� ���
	int s[] = { 10,20,30,40,50,60,70,80,90,100 };
	srand(time(NULL));	// �Ź� �ٸ� �õ尪 ����
	int random = 0;	// ������ ������ ����
	for (int i = 0; i < 5; i++) { // 5ȸ �ݺ�
		arr[i].kor = s[rand() % 10]; // ���� ���� 0 ~ 100����
		arr[i].eng = s[rand() % 10];
		arr[i].math = s[rand() % 10];

		printf("����:%d\t", arr[i].kor);
		printf("����:%d\t", arr[i].eng);
		printf("����:%d\t", arr[i].math);

		arr[i].hap = arr[i].kor + arr[i].eng + arr[i].math;

		printf("����:%d\t", arr[i].hap);

		arr[i].avg = arr[i].hap / 3;

		printf("���:%d\t", arr[i].avg);

		for (int i = 0; i < 5; i++) {
			if (arr[i].avg <= 100 && arr[i].avg >= 90) {
				printf("����:A");
			}
			else if (arr[i].avg <= 89 && arr[i].avg >= 80) {
				printf("����:B");
			}
			else if (arr[i].avg <= 79 && arr[i].avg >= 70) {
				printf("����:C");
			}
			else if (arr[i].avg <= 69 && arr[i].avg >= 60) {
				printf("����:D");
			}
			else {
				printf("����:F");
			}
		printf("\n");
	}
	
}