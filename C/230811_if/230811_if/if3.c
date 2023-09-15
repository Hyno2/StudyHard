#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{                   //»çÄ¢¿¬»ê °è»ê±â ÇÁ·Î±×·¥
	int opt;
	double num1, num2;
	double result;

	printf("1.µ¡¼À 2.»¬»ù 3.°ö¼À 4.³ª´°¼À\n");
	printf("¼±ÅÃ?");
	scanf("%d", &opt);
	printf("µÎ °³ÀÇ ½Ç¼ö ÀÔ·Â:");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1) {
		result = num1 + num2;
	}
	else if (opt == 2) {
		result = num1 - num2;
	}
	else if (opt == 3) {
		result = num1 * num2;
	}
	else {
		result = num1 / num2;
	}
	printf("°á°ú:%lf\n", result);
}