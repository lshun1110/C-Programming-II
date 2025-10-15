/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch-11 수업시간 실습
	날짜 : 2025.10.15
*/

/*
	재귀 함수의 활용 예 수업시간 실습 코드. 1 -> 재귀식 생각
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sub_main();
int count_digit(int a);

int main()
{
	sub_main();
	return 0;
}

void sub_main()
{
	int num = 0;
	while (1)
	{
		printf("정수? ");
		scanf("%d", &num);
		if (num == 0)
			break;
		printf("count of digit = %d\n", count_digit(num));
	}
	return;
}

int count_digit(int a)
{
	if (a <= 0)
		return 0;
	return 1 + count_digit(a / 10);
}