#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
//#define DEBUG 1	// �ּ����� ���������� ������ڵ尡 ����X
// 
								// ��ǰ����, ��������, ��������: 1���� �迭������ �񱳸� ���ؼ� �ݺ����� �ΰ� �����
int main()
{
	// 1.�ζ� ����(�ߺ�����) - �迭������ �н� ����
	// 2.�Լ��� ó�� - �Լ� �н�
	
	// �ζ� ��ȣ�� ������ �迭 ����
	int lotto[6] = { 0 };
	srand(time(NULL));	// �Ź� �ٸ� �õ尪 ����
	for (int i = 0; i < 6; i++) {
		lotto[i] = (rand() % 45) + 1; //1~45����
#ifdef DEBUG // #define DEBUG �� ���� �Ǿ� ������ ������
		printf("%d\t", lotto[i]);
#endif 
		for (int j = 0; j < i; j++) {
			// �迭�� �ִ� ���ڿ� ���� ȹ���� ���� ��
			if (lotto[i] == lotto[j]) {
				i--;
				break;
			}
		 }
	}
	for (int i = 0; i < 6; i++) {
		printf("%d\n", lotto[i]);
	}
}