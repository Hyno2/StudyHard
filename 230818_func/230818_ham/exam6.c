#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h> // exit()������ ����� 
void Score(int kor, int eng, int math)
{
	int j = kor + eng + math;
	int p = j / 3;
	printf("����:%d", j);
	printf("���:%d", p);
}

int main()
{
	// test 6
	// ��,��,�� ������ �Է¹޾Ƽ� ����, ��հ��� ���ϴ� ���α׷�
	// ����1) ���� �Է��� main()���� �Է� ����
	// ����2) �Է¹޴� ������ 0~100 ������ ���ڸ� �Է¹޵��� ���� üũ�ϱ�
			//---> �����ϰ� �ѹ��� üũ�ϸ� ��(����ڰ� �Ǽ��� �߸��Է��ϸ� �����޼��� ����� ���� ó��)
	// ����3) ��,��,�� ������ ������ �Ű������� �����Ͽ� ����, ��հ��� ����ϴ� �޽�� �ۼ�
	// ����4) ���� 3���� �׽�Ʈ �Ϸ� ���Ŀ� �߸��Է°� üũ�� Ȯ���ϱ�(�Ǽ��� �Է��ϸ� ���Է� ������ �ֵ��� ó��)
	int kor;
	int eng, math;
	
	printf("��������:");
	scanf("%d", &kor);
	if (kor < 0 || kor > 100) {
		printf("ERROR!");
		printf("�ٽ��Է��ϼ���");
		scanf("%d", &kor);
		}
	
	printf("��������:");
	scanf("%d", &eng);

	if (eng < 0 || eng > 100) {
		printf("ERROR!");
		printf("�ٽ��Է��ϼ���");
		scanf("%d", &eng);
		
	}

	printf("��������:");
	scanf("%d", &math);

	if (math < 0 || math > 100) {
		printf("ERROR!");
		printf("�ٽ��Է��ϼ���");
		scanf("%d", &math);
	}
	
	Score(kor, eng, math);



}