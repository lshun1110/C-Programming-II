/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� Assignment ���� 3��
	��¥ : 2025.10.01
*/

/*
	�α��� ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�. ����ü ���� ���̵� ��� ����
	�����ϴٸ� �α��� ���� ���
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

void Assignment1003();
int cmp_login(LG* p1, LG* arr);

int main()
{
	Assignment1003();
	return 0;
}

void Assignment1003()
{
	LG arr[5] = { 
		{"a", "1"},
		{"b", "2"},
		{"c", "3"},
		{"d", "4"},
		{"e", "5"}
	};
	LG cmp_input_a = { 0 };
	LG* p1 = &cmp_input_a;

	printf("ID? ");
	(void)scanf("%s", cmp_input_a.ID);
	printf("Password? ");
	(void)scanf("%s", cmp_input_a.Password);

	if (cmp_login(p1, arr) == 0)
		printf("�α��� ����");
	else
		printf("�α��� ����");
}

// ��ɸ� : ���̵� �н����� �α��� �Լ�
// ���� : ����ü �ȿ� ���̵� �н����带 �Է¹޾� ���� �ִ� ���̵� �н����� ����ü�� ���� ��ġ�ϴ� �׸� ����� �α�����
// �Է� : ����ü ������(�Է��ϴ� ����ü, ���̵� �н����� db�� ����ü)
// ��� : ��ġ �α��� ���� 0 / ���� -1
// ���� : x

int cmp_login(LG* p1, LG* arr)
{
	for (int i = 0; i < 5; i++)
	{
		if (strcmp(arr[i].ID, p1->ID))
			if (strcmp(arr[i].Password, p1->Password))
				return 0;
	}
	return -1;
}
