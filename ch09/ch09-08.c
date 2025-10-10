/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch09 - 예제 코드 6번
	날짜 : 2025.09.28
*/

/*
	예제 9-6 : 문자열의 검색
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