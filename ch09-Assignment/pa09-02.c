/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ch-09 Assignment ���� 2��
	��¥ : 2025.09.24
*/

/*
	�� ���� ���ڿ��� �Է¹޾Ƽ� ���� ����(' ', '\n',)~ �� ��� �����ϴ� remove_space �Լ���
	�ۼ��ϼ���.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Assignment0902();
void removing_space(char* s);

int main()
{
	Assignment0902();
	return 0;
}

void Assignment0902()
{
	char str[64] = "";
	fgets(str, sizeof(str), stdin);

	removing_space(str);
	fputs(str, stdout);

	return;
}

// ��ɸ� : ���ڿ��ȿ� ���� ���� �����ϴ� �Լ�
// ���� : ���ڿ��� �Է� ���� �� ���� ���ڸ� ��� ����
// �Է� : ���ڿ�
// ��� : x
// ���� : x

void removing_space(char* s)
{
	size_t w = 0;

	for (size_t r = 0; s[r] != '\0'; ++r) 
	{

		unsigned char c = (unsigned char)s[r];
		// �̰� �Ƚ��ָ� �ѱ� ����Ʈ �� �Է� �� �����÷�
		if (!isspace(c)) 
		{  
			s[w++] = s[r];
		}

	}
	s[w] = '\0';
	return;
}