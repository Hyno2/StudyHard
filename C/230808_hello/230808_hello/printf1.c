#include <stdio.h>

int main(void)

{
	// %d : 10���� ������ �ٲ�� ��. �������϶� ,�� ������
	// printf�Լ� : ������ ȭ�鿡���
	// ���� : ����(����, �Ǽ�), ����(����, ���ڿ�)
	// ���� : %d, �Ǽ� : %f, ����: %c, ���ڿ�: %s
	
	// �ڸ���ǥ��, ��Ÿ ���� ǥ������ �ܿ��ʿ䰡 ����.
	// �ǹ����� ���ͳ����� ã�Ƽ� ó���ϸ� ��
	printf("Hello Everybody!\n");
	printf("%d\n", 1234); // 1234�� %d�� ����
	printf("%d %d\n", 10, 20); // %d�� �ΰ��� ��� ��� �ΰ�
	printf("����ǥ��:%d-%d-%d\n", 10, 20, 30);
	printf("�Ǽ�ǥ��:%.2f\n", 3.14); // %.2f :�Ҽ��� 2�ڸ������� ǥ��
	printf("����ǥ��:%c\n",  'A'); // ���� : ����ǥ�ô�(''), ���ڿ���(" ")
	printf("���ڿ�:%s\n", "ȫ�浿");
}