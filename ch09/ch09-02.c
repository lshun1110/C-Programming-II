/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ���� - strtok ���� �ǽ� ���� �ۼ�
	��¥ : 2025.09.24
*/

/*
	strtok �Ľ� ���� �ǽ� ���� �ۼ��Դϴ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[] = "ȫ�浿, 29, û�ֽ� ������ | date";
	char* token;
	char* context = NULL; // ���ؽ�Ʈ ������

	printf("���� ���ڿ�: %s\n", str);
	printf("��ū��:\n");

	// ù ��° ��ū ����
	token = strtok_s(str, ",|", &context);

	// ��� ��ū ���
	while (token != NULL) 
	{
		printf("��ū: %s\n", token);
		token = strtok_s(NULL, ",", &context); // ���� ��ū
	}
	return 0;
}

// ���ڿ� ���� ���� ���� (Left Trim)
char* ltrim(char* str) 
{
	if (str == NULL) return NULL;
	// ���� ���� ���ڵ��� �ǳʶٱ�
	while (*str && isspace(*str)) {
		str++;
	}
	return str;
}

// ���ڿ� ���� ���� ���� (Right Trim)
char* rtrim(char* str) {
	if (str == NULL) return NULL;
	int len = strlen(str);
	if (len == 0) return str;
	// �ڿ������� ���� ���ڸ� NULL�� ����
	char* end = str + len - 1;
	while (end >= str && isspace(*end)) {
		*end = '\0';
		end--;
	}
	return str;
}