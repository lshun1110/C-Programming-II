/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 Assignment 과제 2번
	날짜 : 2025.09.24
*/

/*
	한 줄의 문자열을 입력받아서 공백 문자(' ', '\n',)~ 를 모두 제거하는 remove_space 함수를
	작성하세요.
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

void removing_space(char* s)
{
	size_t w = 0;

	for (size_t r = 0; s[r] != '\0'; ++r) 
	{

		unsigned char c = (unsigned char)s[r];
		// 이거 안써주면 한글 바이트 수 입력 시 오버플로
		if (!isspace(c)) 
		{  
			s[w++] = s[r];
		}

	}
	s[w] = '\0';
	return;
}