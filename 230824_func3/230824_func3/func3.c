#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
void show_hap()
{
		
}
int show_avg(int hap)
{
	return hap / 3;
}
char show_hak(int avg)
{
	char hak = '0';
	if (avg >= 90 && avg <= 100) {
		printf("����=A");
	}
	else if (avg >= 80 && avg <= 89) {
		printf("����=B");
	}
	else if (avg >= 70 && avg <= 79) {
		printf("����=C");
	}
	else if (avg >= 60 && avg <= 69) {
		printf("����=D");
	}
	else {
		printf("����=F");
		return hak;
	}
}

	int main()
	{	// ����ü(Ŭ������ ���)�� ����Ͽ� ó���ϴ°��� �� ���� �ǹ����� ����ü �����
		// 5���� ��,��,�� ������ �����ϰ� ���� (0 ~ 100)
		int score[5][3] = { 0 }; // �迭 ���� ����
		int hap = 0;			 // ���� ����
		int avg = 0;				 // ��� ����
		srand(time(NULL));	// �Ź� �ٸ� �õ尪 ����

		// �����ϰ� �߻��� ���ڸ� 5���� �л����� ����
		for (int i = 0; i < 5; i++) {
			hap = 0; // hap�� �ʱ�ȭ �ٽ� ������� ��ø ���� �ʴ´�.
			avg = 0;
			for (int j = 0; j < 3; j++) {
				score[i][j] = (rand() % 101); //0~100����
				printf("score[%d][%d]=%d\t", i, j, score[i][j]);
				// 5�� �л��� ������ ���� ��� ������ ���϶�
				hap = hap + score[i][j]; // hap += score[i][j]]
				avg = hap / 3;	
			} // ���� ������ ��ġ
			avg = show_avg(hap);
			printf("����:%d\t", hap);
			//hap = 0 ; ����� �ʱ�ȭ �ص���
			printf("���:%d\t", show_avg(hap));
			//p = 0; ����� �ʱ�ȭ �ص���
			printf("����:%c\t", show_hak(avg));
		}
		printf("\n");
	}
