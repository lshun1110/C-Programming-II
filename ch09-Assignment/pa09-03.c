/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� Assignment ���� 3��
	��¥ : 2025.09.24
*/

/*
	�Է¹��� ���ڿ��� �ҹ��ڴ� �빮�ڷ�, �빮�ڴ� �ҹ��ڷ� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Assignment0903();
void trans_str(char* str);

int main()
{
	Assignment0903();
	return 0;
}

void Assignment0903()
{
	char str[64] = { 0 };

	if (fgets(str, sizeof (str), stdin) == NULL)
		return;
	trans_str(str);
	fputs(str, stdout);
}

void trans_str(char * str)
{
	for (int i = 0; i < 64; i++)
	{
		if (str[i] == '\0')
			return;
		if (isupper(str[i]))
			str[i] = (char)tolower(str[i]);
		else if (islower(str[i]))
			str[i] = (char)toupper(str[i]);
	}
}