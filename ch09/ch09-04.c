/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ch09 - ���� �ڵ� 2��
	��¥ : 2025.09.28
*/

/*
	���� 9-2 : strlen �Լ��� ��� ��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "hello";
	char s2[] = ""; // �� ���ڿ�
	int len = 0;

	printf("s1�� ����: %d\n", strlen(s1)); // �� ���ڸ� ������ ���ڿ��� ����
	printf("s2�� ����: %d\n", strlen(s2)); // �� ���ڿ��� ����
	printf("s2�� ����: %d\n", strlen("bye bye")); // ���ڿ� ���ͷ��� ����

	printf("s1�� ũ�� : %d\n", sizeof(s1)); // �� ���ڸ� ������ �迭�� ũ��

	len = strlen(s1);
	if (len > 0)
		s1[len - 1] = '\0'; // ������ �� ���ڸ� �����Ѵ�.
	printf("s1 = %s\n", s1);


	return 0;
}