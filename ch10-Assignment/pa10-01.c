/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� Assignment ���� 1��  
	��¥ : 2025.10.01
*/

/*
	���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� ���� �� ���̵� �н����� �Է¹޾� ����ϴ� ���α׷��� �ۼ��϶�.
	��, ��й�ȣ�� ������ ���� ��½� * �� ����Ѵ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void Assignment1001();

typedef struct Login
{
	char ID[20];
	char Password[20];
}LG;

int main()
{
	Assignment1001();
	return 0;
}

void Assignment1001()
{
	LG a = { 0 };
	printf("ID? ");
	(void)scanf("%s", a.ID);
	printf("Password? ");
	(void)scanf("%s", a.Password);

	printf("ID: %s\n", a.ID);
	printf("ID: ");
	for (int i = 0; i < strlen(a.Password); i++)
		printf("*");
	/*
		printf("\n");
		printf("ID: %s\n", arr.Password);
	*/
}