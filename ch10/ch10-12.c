/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch10 - 예제 코드 10번
	날짜 : 2025.10.05
*/

/*
	예제 10-10 : 구조체를 포인터로 전달하는 경우
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct point
{
	int x, y; // 점의 좌표
} POINT;

void print_point(POINT* pt);

int main(void)
{
	POINT arr[] = {
	{0, 0}, {10, 10}, {20, 20}, {30, 30}, {40, 40},
	};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;

	for (i = 0; i < sz; i++)
	{
		print_point(&arr[i]); // 구조체 변수의 주소를 전달한다.
		printf(" ");
	}
	printf("\n");

	return 0;
}

void print_point(POINT* pt) // 포인터에 의한 전달
{
	printf("(%d, %d)", pt->x, pt->y);
}