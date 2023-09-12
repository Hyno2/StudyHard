#include <stdio.h>

int main()
{
	float PI = 3.14;
	float a = 5.5;
	float r = a * a * PI;

	printf("------------------------------------\n");
	printf("       원의 면적\n");
	printf("------------------------------------\n");
	printf("원의 면적:%f\n", r);
	printf("원의 면적계산법: %.1f*%.1f*%.2f\n", a, a, PI);
	printf("------------------------------------\n");

	int kor = 90;
	int eng = 80;
	int math = 70;
	int sci = 60;
	int hap = kor+eng+math+sci;
	int avg = hap / 4;
	printf("------------------------------------\n");
	printf("       성적표 구하기\n");
	printf("------------------------------------\n");
	printf("국어:%d\n", kor);
	printf("영어:%d\n", eng);
	printf("수학:%d\n", math);
	printf("과학:%d\n", sci);
	printf("총점:%d\n", hap);
	printf("평균:%d\n", avg);
	printf("------------------------------------\n");

	int hwa = 70;
	float sup = (hwa - 32) / 1.8;

	printf("화씨온도:%d\n", hwa);
	printf("섭씨온도:%.1f", sup);








}