#include <stdio.h>

int main()
{
	// �Ϲݺ���: ������ ������ 
	// ex) n2 = 300; ���� ���氡��
	// �������(��Į��): const�� �����տ� ����. �빮�ڷ� ǥ�� (���� �Ұ�) 
	// ex) const int n = 100; ���� ���� �Ұ���

	int result;
	int num1, num2, num3; 

	printf("�� ���� �Ǽ� �Է�");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d + %d + %d\n", num1, num2, num3);


	printf("ù��° ����");
	scanf_s("%d", &num1);
	printf("�ι�° ����");
	scanf_s("%d", &num2);
	printf("����° ����");
	scanf_s("%d", &num3);

	result = num1 + num2 + num3;
	printf(" %d + %d + %d\n", num1, num2, num3);


}