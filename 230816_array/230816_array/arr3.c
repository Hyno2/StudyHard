#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	char str[50];
	//int idx = 0;

	printf("���ڿ� �Է�");
	scanf("%s", str);  // ���ڿ��� �Է¹޾� �迭 str�� ���� �迭�̸� 
                       //���߿� :�迭 str�� �տ��� &�����ڸ� �������ʴ´�

	printf("�Է� ���� ���ڿ�: %s \n", str);

	printf("���� ���� ���: ");
	//while (str[idx] != '\0') {                while ���
		//printf("% c", str[idx]);
		//idx++;
	//}
		for (int idx = 0; str[idx] != '\0'; idx++) { // for ���
			printf("%c", str[idx]);
}
	printf("\n");











}