#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	//���迬����, �������ڰ� if���� �������� ���� ���
	
	//Test 1 1���� ���ڸ� �Է¹޾Ƽ� ¦��, Ȧ������ üũ�ϴ� ���α׷� �ۼ�
	//������ ������ Ȱ��
	int num1; // ������ ���� ����!
	printf("�����Է�:"); 
	scanf("%d", &num1); //Ű���带 �����Ϳ� �Է¹޾� ���� num1�� ����
	if (num1%2==0) {
		printf("¦��\n");
	}
	else {
		printf("Ȧ��\n");
	}
	
	//Test 2 2���� ���ڸ� �Է¹޾Ƽ� ũ��,�۴�,���ٸ� üũ�ϴ� ���α׷� �ۼ�
	int a;
	int b;
	printf("����1:");
	scanf("%d", &a);
	printf("����2:");
	scanf("%d", &b);
	if (a > b) {
		printf("����1�� ����2���� ũ��.");
	}
	else if (a < b) {
		printf("����1�� ����2���� �۴�.");
	}
	else {
		printf("����1�� ����2�� ����.");
	}
	printf("\n\n");
	//Test 3 ����, ����, ���� ������ �Է¹޾Ƽ� ����, ���, ������ ���ϴ� ���α׷��ۼ�
	// ����: 100~90:A����, 89~80:B���� 79~70:C���� 69~60:D���� 59~0:F����
	//if(num >=90 && num <=100) ������ �̷��Ծ����
	int kor, eng, math, j, p;
	printf("����:");
	scanf("%d", &kor);
	printf("����:");
	scanf("%d", &eng);
	printf("����:");
	scanf("%d", &math);

	j = kor + eng + math;
	p = j / 3;
	printf("����:%d ", j);
	printf("���:%d\n", p);
	if (j >= 90 && j <=  100) { // ������ ǥ���ϴ¹���� �񱳿����� ���̿� �������� �ִ¹�� ���̴�.
		printf("����:A ");
	}
	else if (j >= 80 && j <= 89) {
		printf("����:B ");
	}
	else if (j >= 70 && j <= 79) {
		printf("����:C ");
	}
	else if (j >= 60 && j <= 69) {
		printf("����:D ");
	}
	else {
		printf("����:F ");
	}
	

}