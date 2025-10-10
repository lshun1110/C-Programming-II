/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch10-Assignment 과제 4번
	날짜 : 2025.10.01
*/

/*
	연월일을 나타내는 date 구조체를 매개변수로 전달받아 날짜를 출력하는 print_date 함수를 정의 하시오. 
	두 함수 사용해서 입력받은 날짜 출력하는 프로그램을 작성하시오.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct Date {
    int year;
    int month;
    int day;
} DATE;

void Assignment1004();
void print_date(DATE d);  // 구조체 '값' 전달

int main()
{
    Assignment1004();
    return 0;
}

void Assignment1004()
{
    DATE x = { 0 };

    printf("연? ");
    (void)scanf("%d", &x.year);
    printf("월? ");
    (void)scanf("%d", &x.month);
    printf("일? ");
    (void)scanf("%d", &x.day);

    print_date(x);
}

// 기능명 : 날짜 출력 함수
// 내용 : 구조체 안에 년/월/일을 입력 받아 출력
// 입력 : 단일 구조체
// 출력 : 년 월 일 (정수)
// 오류 : x

void print_date(DATE d)
{
    printf("%d/%d/%d\n", d.year, d.month, d.day);
}