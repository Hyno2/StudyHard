#define _CRT_SECURE_NO_WARNINGS                       // C
#include <stdio.h>
							// ����ü
int main()
{
	// �л� ���� ���α׷� (100��) 
	char name1[20];
	char tel1[20];
	int age1;
	// �Ϲ� ������ �����ϱ⿡�� ���� (300�� �ʿ�)

	// �Ϲ� ������ ����ϱ� �迭
	char name[100][20];
	char tel[100][20];
	int age[100];
	// �迭�� ����ϸ� �Ϲ� ������ ����ϴ°ͺ���
	// ������ ���� ������ ���α׷����� �ϱ⿡�� �����ϴ�

	// 1���� �л� ������ ������ Ʋ(����,����)
	struct student { // ��ü���⿡���� class ��ü, ����ü�� ����
		char name[20];
		char tel[20];
		int age;
	};
	// 1���� �л������� ����ϴ� ���α׷�
	struct student st; // ����ü ������ st

	// 1000���� �л������� ����ϴ� ���α׷�
	struct student arr[1000]; 

	


}