#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h>	// time
#include <string.h> // strcpy()	
										// ���� ����Ǵ� �� �߿��Ѱ�
											// 1. ����
											// 2. ������ (%, ����, ��)
											// 3. ���
											// 4. �ݺ���
											// 5. �迭
											// 6. �Լ�
											// 7. ����ü
											//3456 �ٻڴ��ϸ�
											//346 �ʹ��ٻڴ�
											// �Լ�> ����,�ݺ�,�迭 ������ �߿�
				//	����ü �迭 ǥ����
typedef struct _PERSON
{
	char name[20];
	int age;
	char tel[20];
	char addr[50];

}PERSON;

int main()
{
	PERSON son[2] = {
		{"ȫ�浿",100,"010-1234-1234","�Ѿ� ȫ�밨��"},
		{"����ġ",200,"010-1234-4321","���� �θ޻��"}
	};

	// ���� ����
	FILE* fp = fopen("person_arr.bin", "wb");
	if (fp == NULL) {
		printf("���� ���� ����!!\n");
		return -1;
	}
	fwrite(&son[0], sizeof(son[0]), 1, fp);
	fwrite(&son[1], sizeof(son[1]), 1, fp);
	printf("���Ͽ� ���������� �ԷµǾ����ϴ�\n");
	fclose(fp);


	// ���� �б� 
	FILE* fp2 = fopen("person_arr.bin", "rb");
	if (fp2 == NULL) {
		printf("���� �б� ���� ����!!\n");
		return -1;
	}
	PERSON temp = { 0 }; // ���Ͽ��� ����ü ������ �о� �����ϴ� �� ����ü
	// ���Ͽ��� ���������� ����ü 1���� �о��ٸ�
	while (fread(&temp, sizeof(temp), 1, fp2) == 1); {
		printf("�̸�:%s ����:%d ��ȣ:%s �ּ�:%s\n", temp.name, temp.age, temp.tel, temp.addr);
	}
	fclose(fp2);
							
}