/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ch09 - ���� �ڵ� 4��
	��¥ : 2025.09.28
*/

/*
	���� 9-4 : ���ڿ��� ��
*/

#define _CRT_SECURE_NO_WARNINGS // ���̺귯�� ��� �տ� �����Ѵ�.
#include <stdio.h>
#include <string.h> // ���ڿ� ó�� �Լ� ��� �� ����
#define SIZE 10

int main()
{
	char s1[SIZE] = "apple";
	char s2[SIZE] = "apple";
	char password[SIZE];

	if (s1 == s2)
		printf("same address\n"); // s1�� �ּҿ� s2�� �ּҸ� ���ϸ� �ȵȴ�.

	if (strcmp(s1, s2) == 0)
		printf("same string\n"); // s1�� s2�� ������ ���Ѵ�.

	printf("�н�����? ");
	scanf("%s", password); // �н����带 �Է¹޴´�.
	if (strcmp(password, "abcd1234") == 0) // ��ϵ� �н������ ���Ѵ�.
		printf("login succeeded\n");
	else
		printf("login failed\n");

	return 0;
}