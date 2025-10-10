/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch09 - 예제 코드 10번
	날짜 : 2025.09.28
*/

/*
	예제 9-10 : count_space 함수의 정의
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h> // 문자 처리 라이브러리

int count_space(const char* s);

int main(void)
{
	char str[64] = "this program\ttests const pointer to string\n";

	puts(str);
	printf("공백 문자의 개수: %d\n", count_space(str));
	return 0;
}

int count_space(const char* s) // s는 입력 매개변수
{
	int count = 0;
	while (s[0] != '\0') { // while (*s != '\0') 과 같은 의미
		if (isspace(s[0])) // *s가 공백 문자인지 검사한다.
			count++;
		s++; // s는 다음 문자를 가리킨다.
	}

	//s[0] = 'A';	// s가 가리키는 문자열을 변경할 수 없으므로 컴파일 에러
	//strcpy(s, "xyz");		// strcpy의 매개변수와 데이터형이 다르므로 컴파일 경고
	return count;
}
