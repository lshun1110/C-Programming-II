/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ch09 - ���� �ڵ� 6��
	��¥ : 2025.09.28
*/

/*
	���� 9-6 : ���ڿ��� �˻�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char filename[] = "readme.txt";
	char* p = NULL;

	p = strchr(filename, '.');
	if (p != NULL)
		printf("file extension: %s\n", p + 1);

	p = strstr(filename, ".txt");
	if (p != NULL)
		printf("file type: TEXT file\n");

	return 0;
}