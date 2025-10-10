/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� Assignment ���� 2��
	��¥ : 2025.10.01
*/

/*
	���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� ���� �� ���̵� �н����� �Է¹޾� ����ϴ� ���α׷��� �ۼ��϶�.
	��, ��й�ȣ�� ������ ���� ��½� * �� ����Ѵ�. �׸��� ����ü�� ����� ���̵�� �н����� ��θ� �ҹ��ڷ�
	����� make lower �Լ��� ����϶�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct Login
{
	char ID[20];
	char Password[20];
}LG;

void Assignment1002();
void make_lower(LG * p);
void print_login(LG* p);

int main()
{
	Assignment1002();
	return 0;
}

void Assignment1002()
{
	LG a = { 0 };
	LG* p = &a;
	printf("ID? ");
	(void)scanf("%s", a.ID);
	printf("Password? ");
	(void)scanf("%s", a.Password);

	make_lower(p);

	print_login(p);
}

// ��ɸ� : ���̵�, �н����带 �ҹ��ڷ� �����ϴ� �Լ�
// ���� : ����ü �ȿ� ���̵� �н����带 �Է¹޾� �ҹ��ڷ� ��ȯ��
// �Է� : ����ü ������
// ��� : x
// ���� : x

void make_lower(LG *p)
{
	for (int i = 0; i < strlen(p->ID); i++)
	{
		p->ID[i] = tolower(p->ID[i]);
	}
	for (int i = 0; i < strlen(p->Password); i++)
	{
		p->Password[i] = tolower(p->Password[i]);
	}
}

// ��ɸ� : ���̵�, �н����� ��� �Լ�
// ���� : ����ü �ȿ� ���̵� �н����带 �Է¹޾� �����
// �Է� : ����ü ������
// ��� : ����ü -> ���̵�, �н�����
// ���� : x

void print_login(LG* p)
{
	printf("%s\n", p->ID);
	printf("%s\n", p->Password);
	for (int i = 0; i < strlen(p->Password); i++)
		printf("*");
	return;
}