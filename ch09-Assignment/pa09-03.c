/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 Assignment 과제 3번
	날짜 : 2025.09.24
*/

/*
	입력받은 문자열의 소문자는 대문자로, 대문자는 소문자로 변환하는 프로그램을 작성하시오.
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