/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 수업 - strtok 수업 실습 예제 작성
	날짜 : 2025.09.24
*/

/*
	strtok 파싱 수업 실습 예제 작성입니다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[] = "홍길동, 29, 청주시 서원구 | date";
	char* token;
	char* context = NULL; // 컨텍스트 포인터

	printf("원본 문자열: %s\n", str);
	printf("토큰들:\n");

	// 첫 번째 토큰 추출
	token = strtok_s(str, ",|", &context);

	// 모든 토큰 출력
	while (token != NULL) 
	{
		printf("토큰: %s\n", token);
		token = strtok_s(NULL, ",", &context); // 다음 토큰
	}
	return 0;
}

// 문자열 앞쪽 공백 제거 (Left Trim)
char* ltrim(char* str) 
{
	if (str == NULL) return NULL;
	// 앞쪽 공백 문자들을 건너뛰기
	while (*str && isspace(*str)) {
		str++;
	}
	return str;
}

// 문자열 뒤쪽 공백 제거 (Right Trim)
char* rtrim(char* str) {
	if (str == NULL) return NULL;
	int len = strlen(str);
	if (len == 0) return str;
	// 뒤에서부터 공백 문자를 NULL로 변경
	char* end = str + len - 1;
	while (end >= str && isspace(*end)) {
		*end = '\0';
		end--;
	}
	return str;
}