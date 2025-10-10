/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch09 - 예제 코드 4번
	날짜 : 2025.09.28
*/

/*
	예제 9-4 : 문자열의 비교
*/

#define _CRT_SECURE_NO_WARNINGS // 라이브러리 헤더 앞에 정의한다.
#include <stdio.h>
#include <string.h> // 문자열 처리 함수 사용 시 포함
#define SIZE 10

int main()
{
	char s1[SIZE] = "apple";
	char s2[SIZE] = "apple";
	char password[SIZE];

	if (s1 == s2)
		printf("same address\n"); // s1의 주소와 s2의 주소를 비교하면 안된다.

	if (strcmp(s1, s2) == 0)
		printf("same string\n"); // s1과 s2의 내용을 비교한다.

	printf("패스워드? ");
	scanf("%s", password); // 패스워드를 입력받는다.
	if (strcmp(password, "abcd1234") == 0) // 등록된 패스워드와 비교한다.
		printf("login succeeded\n");
	else
		printf("login failed\n");

	return 0;
}