/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch09 - 예제 코드 12번
	날짜 : 2025.09.28
*/

/*
	예제 9-12 : 2차원 문자 배열의 선언 및 초기화
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char books[5][30] = {
	"wonder", // books[0]의 초기값
	"me before you", // books[1]의 초기값
	"the hunger games", // books[2]의 초기값
	"twilight", // books[3]의 초기값
	"harry potter", // books[4]의 초기값
	};
	int i = 0;

	for (i = 0; i < 5; i++)
		printf("책 제목: %s\n", books[i]); // i번째 문자열 사용

	for (i = 0; i < 5; i++)
	{
		if (islower(books[i][0])) // i번째 문자인지 검사한다.
			books[i][0] = toupper(books[i][0]); // books[i][0]을 대문자로 변경한다.
	}

	puts("<< 변경 후 >>");
	for (i = 0; i < 5; i++)
		printf("책 제목: %s\n", books[i]);

	return 0;
}