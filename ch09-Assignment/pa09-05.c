/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� Assignment ���� 5��
	��¥ : 2025.09.24
*/

/*
	��ҹ��� �������� �ʰ� ���ڿ��� ���ϴ� strcmp_ic �Լ��� �ۼ��ϼ���.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Assignment0905();
void strip_newline(char* s);
void trans_str(char* str);

int main()
{
	Assignment0905();
	return 0;
}

void Assignment0905()
{
	char str1[64] = { 0 };
	char str2[64] = { 0 };

	printf("ù ��° ���ڿ� ? ");
	if (fgets(str1, sizeof(str1), stdin) == NULL)
		return;
	printf("�� ��° ���ڿ� ? ");
	if (fgets(str2, sizeof(str2), stdin) == NULL)
		return;

	strip_newline(str1);
	strip_newline(str2);
	
	trans_str(str1);
	trans_str(str2);

	if (strcmp(str1, str2) == 0)
		printf("�� ���ڿ��� �����մϴ�.");
	else
		printf("�� ���ڿ��� �ٸ��ϴ�.");
}

void trans_str(char* str)
{
	for (int i = 0; i < 64; i++)
	{
		if (isalpha(str[i]))
			str[i] = tolower(str[i]);
	}
}


void strip_newline(char* s)
{
	size_t pos = strcspn(s, "\r\n");
	s[pos] = '\0';
}