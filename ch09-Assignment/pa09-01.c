/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ch-09 Assignment ���� 1��
	��¥ : 2025.09.24
*/

/*
	�� ���� ���ڿ��� �Է¹޾Ƽ� ���� ����(' ', '\n',)~ �� ������ ���� ���α׷��� �ۼ��Ͻÿ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Assignment0901();
int counting_chr(const char* str);

int main()
{
	Assignment0901();
	return 0;
}

void Assignment0901()
{
	char str[64] = "";
	fgets(str, sizeof str, stdin);
	printf("���� ������ ���� : %d\n",counting_chr(str));
	return;
}

// ��ɸ� : ���ڿ��ȿ� ���� ���ڸ� ���� �Լ�
// ���� : ���ڿ��� �Է� ���� �� ���鹮���� ������ ��ȯ��
// �Է� : ���ڿ�
// ��� : ����(����)
// ���� : x

int counting_chr(const char *str)
{
	int count = 0;
	while (str[0] != '\0')
	{
		if (isspace(str[0]))
			count++;
		str++;
	}
	return count;
}