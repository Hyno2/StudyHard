#include <stdio.h>

int main()
{
	float PI = 3.14;
	float a = 5.5;
	float r = a * a * PI;

	printf("------------------------------------\n");
	printf("       ���� ����\n");
	printf("------------------------------------\n");
	printf("���� ����:%f\n", r);
	printf("���� ��������: %.1f*%.1f*%.2f\n", a, a, PI);
	printf("------------------------------------\n");

	int kor = 90;
	int eng = 80;
	int math = 70;
	int sci = 60;
	int hap = kor+eng+math+sci;
	int avg = hap / 4;
	printf("------------------------------------\n");
	printf("       ����ǥ ���ϱ�\n");
	printf("------------------------------------\n");
	printf("����:%d\n", kor);
	printf("����:%d\n", eng);
	printf("����:%d\n", math);
	printf("����:%d\n", sci);
	printf("����:%d\n", hap);
	printf("���:%d\n", avg);
	printf("------------------------------------\n");

	int hwa = 70;
	float sup = (hwa - 32) / 1.8;

	printf("ȭ���µ�:%d\n", hwa);
	printf("�����µ�:%.1f", sup);








}