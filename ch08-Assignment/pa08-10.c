/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 ch-08 Assignment 과제 10번
    날짜 : 2025.09.21
*/

/*
    3 x 3 행렬의 합을 구하는 add_matrix 함수를 작성하시오.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0810();
void add_matrix(const int x[][3], const int y[][3], int out[][3], int rows);
void print_matrix(const int a[][3], int rows);

int main()
{
    Assignment0810();
    return 0;
}

void Assignment0810()
{
    int x[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    int y[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int z[3][3] = { 0 };

    int rows = (int)(sizeof(x) / sizeof(x[0]));

    add_matrix(x, y, z, rows);

    /* 문자열 인자 제거 */
    print_matrix(x, rows);
    print_matrix(y, rows);
    print_matrix(z, rows);
}

// 기능명 : 2차원 배열을 입력받아 그 합의 2차원 배열을 구하는 함수
// 내용: 2차원 배열 두개를 입력받아 결과 배열에 두 배열의 합을 저장
// 입력 : 2차원 배열 (3개), 그 크기(행)
// 출력 : x
//오류 : x

void add_matrix(const int x[][3], const int y[][3], int out[][3], int rows)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < 3; j++)
            out[i][j] = x[i][j] + y[i][j];
}

// 기능명 : 결과 2차원 배열을 출력하는 함수
// 내용: 이차원 배열들의 합인 이차원 배열을 입력받아 출력해주는 함수
// 입력 : 2차원 배열, 배열의 크기(정수)
// 출력 : 2차원 배열 (전체)(순차적)
//오류 : x

void print_matrix(const int a[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 2)
                printf("%d \n", a[i][j]);
            else
                printf("%d ", a[i][j]);
        }
    }
}