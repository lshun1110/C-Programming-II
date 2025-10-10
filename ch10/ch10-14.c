/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch10 - 예제 코드 12번
	날짜 : 2025.10.05
*/

/*
	예제 10-12 : 비트필드의 정의 및 사용
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct date {
	unsigned short year : 7;
	unsigned short month : 4;
	unsigned short day : 5;
	//unsigned short the_day_of_week : 3;
} DATE;

int main()
{
	DATE dday;
	dday.year = 18; // 연도를 0~99사이의 값으로 저장한다.
	dday.month = 11;
	dday.day = 30;

	printf("DATE의 크기 = %d\n", sizeof(DATE));
	printf("%d/%d/%d\n", dday.year + 2000, dday.month, dday.day);

	return 0;
}