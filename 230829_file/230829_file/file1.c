#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	
													// file ����
int main()
{
	// C:/ �ٷ� �ؿ��� ������ �������� ���� �Ұ�!
	// C:/���� ���� ���� ������.
	// fopen �Ŀ� ���� �� fclose ������� �ʼ�
	 
	// 1. ���� ���� fopen(�����̸�, wt= write,text ������text)
	// w: ������ ������ �����ϰ� �����(�������� ����)
	// a: ������ ������ �����ϰ� �ڿ� �ٿ���.
	// r: ������ ������ �о��
	// fopen(�Ű�����, �Ű�����) fopen�� ǥ���Լ��� C���ִ� �⺻�Լ���. ����� �Լ��� ��������� �Լ�
	FILE* fp = fopen("data.txt", "wt"); // FILE�� ����ü *����Ʈ�� �ּҰ��� ���� , data.txt ������ �����϶� at,rt,wt ����
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}
	fputc('A', fp);	// ���� 1���� ���Ͽ� �Է� f(ile)putc(har) 
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
	// 1. ���� ����(����, �б�)
	// 2. ���ų� �Ǵ� �аų� �۾�
	// 3. ���� �ݱ�
}

