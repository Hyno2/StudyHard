#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
										//����ü ������ �ʱ�ȭ
										// �ʱ�ȭ ����� �迭�� �����ϴ�.
										// �ʱ�ȭ�� �����͵��� �߰�ȣ �ȿ� ������� �����ϸ� �ȴ�.
struct point
{
	int xpos;
	int ypos;
};
struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};
	
int main()
{
	struct point pos = { 10,20 };
	struct person man = { "�̽±�","010-1212-0001",21 }; // �迭���ٸ��� �ٸ� ������Ÿ�Ե� �ѹ��� �Ҽ��ִ�
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);

	
	

}