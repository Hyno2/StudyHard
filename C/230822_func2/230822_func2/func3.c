#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void call_by_addr(int a[]);

int main()
{
	// Call by Address(�ּҰ��� ���� ����)
	// �迭, ��������, ����Ʈ
	int arr[2] = { 10,20 };
	printf("1.main()=>arr[0]:%d, arr[1]:%d\n", arr[0], arr[1]);
	call_by_addr(arr); // �迭�� �Լ�ȣ�⿡ ���� �迭 �̸���(�迭 �̸��� �ּҰ�) �ֱ�
	printf("2.main()=>arr[0]:%d, arr[1]:%d\n", arr[0], arr[1]);
}

void call_by_addr(int a[]) // �Լ��� ����ǰ��� �ȿ� ���ǵ� ������ ��� �� �Ҹ� �ȴ�
							// �ּҰ����� ���� ������(�迭,��������,����Ʈ) �Ҹ�����ʴ´�
{
	// arr[0]�� arr[1]�� ���� ���� �ٲ�ġ��
	int temp = a[0]; //a�� ���� temp ������ ��� temp�� 10
	a[0] = a[1]; //
	a[1] = temp; //

	printf("call_by_addr()=>arr[0]:%d, arr[1]:%d\n", a[0], a[1]);
}