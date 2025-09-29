/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 Assignment 과제 1번
	날짜 : 2025.09.24
*/

/*
	한 줄의 문자열을 입력받아서 공백 문자(' ', '\n',)~ 의 개수를 세는 프로그램을 작성하시오.
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
	printf("공백 문자의 개수 : %d\n",counting_chr(str));
	return;
}

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