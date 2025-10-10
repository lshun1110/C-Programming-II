/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch10 - 예제 코드 13번
	날짜 : 2025.10.05
*/

/*
	예제 10-13 : LINE 구조체의 정의 및 사용
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct point // 점의 좌표
{
	int x, y;
} POINT;

typedef struct line// 직선
{
	POINT start, end; // 멤버로 다른 구조체의 변수를 선언한다.
} LINE;

double get_length(const LINE* ln);

int main(void)
{
	LINE ln1 = { {10,20}, {30,40} };


	printf("직선의 시작점: (%d, %d)", ln1.start.x, ln1.start.y);
	printf("직선의 끝점: (%d, %d)", ln1.end.x, ln1.end.y);

	printf("직선의 길이: %f", get_length(&ln1));
	return 0;
}

double get_length(const LINE* ln)
{
	int dx = ln->end.x - ln->start.x;
	int dy = ln->end.y - ln->start.y;
	return sqrt(dx * dx + dy * dy);
}