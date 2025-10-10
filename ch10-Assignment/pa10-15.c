/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch10-Assignment 과제 15번
	날짜 : 2025.10.01
*/

/*
	점의 좌표를 나타내는 POINT 구조체에 대해서 두 점의 좌표를 맞바꾸는 swap_point 함수를 정의 하시오.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct Point {
    int x;
    int y;
} POINT;

void Assignment1015();
void swap_point(POINT* a, POINT* b);
void sel_sort_by_x(POINT a[], int n);
void print_points(const POINT a[], int n, const char* title);

int main()
{
    Assignment1015();
    return 0;
}

void Assignment1015()
{
    POINT p[10] = {
        {7, 4}, {12, 93}, {22, 31}, {1, 20}, {34, 53},
        {41, 2}, {32, 9}, {21, 31}, {8, 2},  {3, 5}
    };
    int n = (int)(sizeof(p) / sizeof(p[0]));

    print_points(p, n, "<<정렬 전>>");
    sel_sort_by_x(p, n);
    print_points(p, n, "<<정렬 후>>");
}

// 기능명 : 좌표를 스왑하는 함수
// 내용 : 좌표를 서로 바꿔 줌
// 입력 : 구조체 포인터(1,2)
// 출력 : x
// 오류 : x

void swap_point(POINT* a, POINT* b)
{
    POINT t = *a;
    *a = *b;
    *b = t;
}

// 기능명 : 좌표를 정렬하는 함수
// 내용 : 좌표 구조체들을 입력받아서 x 좌표를 기점으로 정렬함
// 입력 : 구조체 배열 (좌표들), 크기
// 출력 : x
// 오류 : x

void sel_sort_by_x(POINT a[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j].x < a[min_idx].x) {
                min_idx = j;
            }
        }
        if (min_idx != i)
            swap_point(&a[i], &a[min_idx]);
    }
}

// 기능명 : 좌표 배열을 출력하는 함수
// 내용 : 구조체 배열안의 정렬된 좌표들을 출력함
// 입력 : 구조체 배열(정렬 좌표 - x기준) , 크기 (정수), 정렬 여부(문자열)
// 출력 : 구조체 배열(정렬 좌표 - x기준)
// 오류 : x

void print_points(const POINT a[], int n, const char* title)
{
    printf("%s\n", title);
    for (int i = 0; i < n; i++) 
    {
        printf("(%d, %d)", a[i].x, a[i].y);
        if (i != n - 1) printf(" ");
    }
    printf("\n");
}