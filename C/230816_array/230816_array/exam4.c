#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	// 1���� �迭 dmz�� ���ڰ� �Ʒ�ó�� �ż��Ǿ���.
	// *  B  *  B  *
	// 1  1  2  1  1
	// *:���ڰ����¶�, B:����
	char dmz[] = { 'B','B','*','B','*' };
	int arr[5] = { 0 };

	const int start = 0; // ������� (������ ���� �Ұ���)
	const int end = 4; // #define End 4 �� ���� �ǹ�

	for (int i = 0; i < 5; i++) {
		if (dmz[i] == 'B') arr[i] += 1; //arr[i]++
		if (dmz[i - 1] == 'B' && i != start) arr[i]++;
		if (dmz[i + 1] == 'B' && i != end) arr[i]++;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");


		if (dmz[0] == '*'); {
			printf("��������\n");
		}
		if (dmz[1] == 'B') {
			printf("����\n");
		}
	
















}