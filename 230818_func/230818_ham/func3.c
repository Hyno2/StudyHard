#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

float get_number(); //������Ÿ�� ����
char get_char(); //������Ÿ�� ����

void main()
{
	// 3��° ����: ���ϰ��� ������Ÿ�� �Լ���() {return ��} -> �Ű����� x
	// 4��° ����: ���ϰ��� ������Ÿ�� �Լ���(�Ű�����) {return ��} 
	
	// return�� 1.3�� ���� ���� n �� ����
	float n = get_number(); 
	printf("���Ϲ��� ��:%.1f\n", n);
	char c = get_char();
	printf("���Ϲ��� ����:%c\n",c);
	
	// ������ ����ؼ� ���ϰ��� ���� �ʰ�
	// ���� �Լ� ���ϰ��� %c�� ����
	printf("�Լ����ϰ�:%c\n", get_char());
}

float get_number() // ���ϰ��� ���� Ÿ���� ����ؾ� �Ѵ� 
{
	float n = 1.3; // ��������
	// �Լ��� ����Ǳ����� return ���� 
	// ȣ���� ������ �ǵ��� ��
	return n; // ���ϰ��� 1���� ���� ����
}

char get_char()
{
	char c = 'B';
	return c;
}