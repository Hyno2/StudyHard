#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
                              //  ���ǹ�
			      // ���߿� :1. if�� ������ �ѹ��� �����
                        //  2. else if�� ������ ��밡��
                         // 3. else�� ����ϴ� ��쿡�� ������ ����
int main()
{
	int num;
	printf("���� �Է�:");
	scanf("%d", &num);

	if (num < 0) {            // ���� if��
		printf("�Է� ���� 0���� �۴�.\n"); 
	}
	if (num > 0) {
		printf("�Է� ���� 0���� ũ��.\n");
	}
	if (num == 0) {
		printf("�Է� ���� 0�̴�.\n");
	}
	//-----------------------------------------------------------------
	//                       3���� ����� ���� ������
	// if�� ���ǰ� else if�� ������ ������ ����
	
	if (num < 0) {
		printf("�Է� ���� 0���� �۴�.\n");
	}
	else if (num > 0) {              //�������� �ҋ� if�� else if�ĸ� ���̾�
		printf("�Է� ���� 0���� ũ��.\n");
	}
	else {                         // if�� ���ǰ� else if�� ������ ������ ����
		printf("�Է� ���� 0�̴�.\n");
	}
	//------------------------------------------------------------------
	// if�� ������ ���� else , else�� ��� �����ʾƵ� �ȴ�.
	if (num < 0) {
		printf("�Է� ���� 0���� �۴�.\n");
	}
	else {
		printf("�Է� ���� 0���� ũ�ų� ����.\n");
	}
	//------------------------------------------------------------------
	if (num < 0) {
		printf("�Է� ���� 0���� �۴�.\n");
	}
	else if (num > 0) {
		printf("�Է� ���� 0���� ũ��.\n");
	}
	else if (num == 0){
		printf("�Է� ���� 0�̴�.\n");
	}
}