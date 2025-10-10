/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch10 - 예제 코드 9번
	날짜 : 2025.10.05
*/

/*
	예제 10-9 : 구조체를 값으로 전달하는 경우
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct point
{
	int x, y; // 점의 좌표
} POINT;

void print_point(POINT pt);

int main()
{
	POINT arr[] = {
	{0, 0}, {10, 10}, {20, 20}, {30, 30}, {40, 40},
	};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;

	for (i = 0; i < sz; i++)
	{
		print_point(arr[i]); // arr[i]를 pt로 복사해서 전달한다.
		printf(" ");
	}
	printf(" ");

	return 0;
}

void print_point(POINT pt) // 값에 의한 전달
{
	printf("(%d, %d)", pt.x, pt.y);
}