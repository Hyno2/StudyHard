#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
//#define DEBUG 1	// �ּ����� ���������� ������ڵ尡 ����X

								// ��ǰ����, ��������, ��������: 1���� �迭������ �񱳸� ���ؼ� �ݺ����� �ΰ� �����
// 1.�ζ� ����(�ߺ�����) - �迭������ �н� ����
// 2.�Լ��� ó�� - �Լ� �н�
// �ζ� ��ȣ�� ������ �迭 ����

void show_lotto(int lotto[]) {
	
	for (int i = 0; i < 6; i++) {
		lotto[i] = (rand() % 45) + 1; //1~45����
		for (int j = 0; j < i; j++) {
			// �迭�� �ִ� ���ڿ� ���� ȹ���� ���� ��
			if (lotto[i] == lotto[j]) {
				i--;
				break;
			}
		}
	}
}
int main()
{
	int lotto[6] = { 0 };	// �ζ� ��ȣ�� ������ �迭
	srand(time(NULL));		// �Ź� �ٸ� �õ尪 ����
	show_lotto(lotto);		// �Լ� ȣ��
	for (int i = 0; i < 6; i++) {
		printf("%d\n", lotto[i]);
	}
	
}