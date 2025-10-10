/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 ch-08 Assignment 과제 9번
    날짜 : 2025.09.21
*/

/*
    열 크기가 5인 2차원 배열 int 배열의 원소를 특정 값으로 채우는 fill_2d_array 함수를 작성하시오.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0809(void);
void fill_2d_array(int (*arr)[5], int rows, int a);

int main()
{
    Assignment0809();
    return 0;
}

void Assignment0809(void)
{
    int arr[5][5] = { 0 };
    int rows = (int)(sizeof(arr) / sizeof(arr[0]));
    int a = 0;

    printf("배열의 원소에 저장할 값? ");
    scanf("%d", &a);

    fill_2d_array(arr, rows, a);
}

// 기능명 : 입력받은 수를 2차원 배열을 채워넣는 함수
// 내용: 2차원 배열, 크기이자 행, 채워 넣을 수를 입력 받고 해당 수를 2차원 배열에 채워넣고 출력하는 함수
// 입력 : 2차원 정수 배열, 행(배열 크기), 대입할 수
// 출력 : 2차원 배열 (전체)
// 오류 : x

void fill_2d_array(int (*arr)[5], int rows, int a)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = a;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}