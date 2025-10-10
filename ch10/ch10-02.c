/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 수업시간 실습 .2
    날짜 : 2025.10.01
*/

/*
    구조체 안에 구조체가 있는 간단한 예제 작성, 1.구조체 좌표 2. 그걸로 구성된 도형
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void PracticeRect();

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point a; // 한 꼭짓점
    Point b; // 마주 보는 꼭짓점
} Rect;

int main()
{
    PracticeRect();
    return 0;
}

void PracticeRect()
{
    Rect r = { 0 };
    printf("직사각형 꼭짓점 A의 좌표 x y ? ");
    (void)scanf("%d %d", &r.a.x, &r.a.y);

    printf("직사각형 꼭짓점 B의 좌표 x y ? ");
    (void)scanf("%d %d", &r.b.x, &r.b.y);

    int width = abs(r.b.x - r.a.x);
    int height = abs(r.b.y - r.a.y);
    int area = width * height;
    int peri = 2 * (width + height);

    printf("가로: %d, 세로: %d\n", width, height);
    printf("넓이: %d, 둘레: %d\n", area, peri);
}