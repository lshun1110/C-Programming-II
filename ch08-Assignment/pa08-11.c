/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 ch-08 Assignment 과제 11번
    날짜 : 2025.09.21
*/

/*
    직사각형의 넓이와 들레를 구하는 get_rect_info 함수를 작성하시오.
    직사각형의 가로, 세로의 길이를 입력받은 다음 get_rect_info 함수를 이용해서 직사각형의 넓이와
    둘레를 구해서 출력하는 프로그램을 작성하시오.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0811();
void get_rect_info(int width, int height, int* area, int* perimeter);

int main()
{
    Assignment0811();
    return 0;
}

// 기능명 : 직사각형의 넓이와 둘레를 구하는 함수
// 내용: 가로 세로 입력 받아 직사각형의 넓이와 둘레를 구하는 함수
// 입력 : 가로,세로, 넓이를 저장할 포인터, 둘레를 저장할 포인터
// 출력 : x
//오류 : x

void get_rect_info(int width, int height, int* area, int* perimeter)
{
    *area = width * height;
    *perimeter = 2 * (width + height);
}

void Assignment0811()
{
    int w, h, a, p;

    printf("가로? ");
    scanf("%d", &w);

    printf("세로? ");
    scanf("%d", &h);

    get_rect_info(w, h, &a, &p);

    printf("넓이: %d, 둘레: %d\n", a, p);
}