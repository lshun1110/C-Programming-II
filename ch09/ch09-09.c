/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch09 - 예제 코드 7번
	날짜 : 2025.09.28
*/

/*
	예제 9-7 : 문자열의 토큰 나누기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char phone[] = "02-123-4567";
	char* p = NULL;

	p = strtok(phone, "-");
	printf("area code: %s\n", p);
	p = strtok(NULL, "-");
	printf("prefix: %s\n", p);
	p = strtok(NULL, "-");
	printf("line number: %s\n", p);

	return 0;
}