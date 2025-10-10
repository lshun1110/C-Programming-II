/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch-09 Assignment 과제 5번
	날짜 : 2025.09.24
*/

/*
	대소문자 구분하지 않고 문자열을 비교하는 strcmp_ic 함수를 작성하세요.
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

	printf("첫 번째 문자열 ? ");
	if (fgets(str1, sizeof(str1), stdin) == NULL)
		return;
	printf("두 번째 문자열 ? ");
	if (fgets(str2, sizeof(str2), stdin) == NULL)
		return;

	strip_newline(str1);
	strip_newline(str2);
	
	trans_str(str1);
	trans_str(str2);

	if (strcmp(str1, str2) == 0)
		printf("두 문자열은 동일합니다.");
	else
		printf("두 문자열은 다릅니다.");
}

// 기능명 : 문자열을 같은 문자로 통일 시키는 함수
// 내용 : 문자열을 입력 받은 뒤 비교를 위해 소문자로 변환함
// 입력 : 문자열
// 출력 : x
// 오류 : x

void trans_str(char* str)
{
	for (int i = 0; i < 64; i++)
	{
		if (isalpha(str[i]))
			str[i] = tolower(str[i]);
	}
}

// 기능명 : 개행 제거 함수
// 내용 : 문자열을 입력 받은 뒤 문자열의 개행을 제거
// 입력 : 문자열
// 출력 : x
// 오류 : x

void strip_newline(char* s)
{
	size_t pos = strcspn(s, "\r\n");
	s[pos] = '\0';
}