/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 ch-08 Assignment 과제 12번
    날짜 : 2025.09.21
*/

/*
    정수형 배열과 키 값을 매개변수로 전달받아 배열에서 키 값을 모두 찾아 인덱스를 배열에 저장해서
    리턴하는 find_all_in_array 함수를 작성하시오.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0812();
int  find_all_in_array(const int* a, int n, int key, int* idx_out, int cap);
void print_array(const int* a, int n);

int main()
{
    Assignment0812();
    return 0;
}

void Assignment0812()
{
    int arr[] = { 12, 45, 62, 99, 83, 23, 12, 72, 37 };
    int n = (int)(sizeof(arr) / sizeof(arr[0]));
    int key;

    print_array(arr, n);
    printf("찾을 값? ");
    scanf("%d", &key);

    int idx[sizeof(arr) / sizeof(arr[0])];
    int found = find_all_in_array(arr, n, key, idx, n);

    if (found == 0)
    {
        printf("찾은 항목은 없습니다.\n");
    }
    else
    {
        printf("찾은 항목은 %d개 입니다.\n", found);
        printf("찾은 항목의 인덱스: ");
        for (int i = 0; i < found; i++)
        {
            if (i == found - 1)
                printf("%d\n", idx[i]);
            else
                printf("%d ", idx[i]);
        }
    }
}

// 기능명 : 키 값으로 찾고자 하는 인덱스를 모두 반환하는 함수
// 내용: 배열과 찾고자 하는 키를 입력받고 탐색의 갯수를 반환함
// 입력 : 배열, 키값, 인덱스 저장, 카운팅 변수
// 출력 : 카운팅 변수(갯수)
// 오류 : x

int find_all_in_array(const int* a, int n, int key, int* idx_out, int cap)
{
    int cnt = 0;
    for (int i = 0; i < n && cnt < cap; i++)
    {
        if (a[i] == key)
        {
            idx_out[cnt] = i;
            cnt++;
        }
    }
    return cnt;
}

// 기능명 : 배열을 출력하는 함수
// 내용: 키 값을 비교 후 찾은 배열을 출력하는 함수
// 입력 : 배열, 길이(정수)
// 출력 : 배열 (전체)
// 오류 : x

void print_array(const int* a, int n)
{
    for (int i = 0; i < n; i++) 
    {
        if (i == n - 1)
            printf("%d\n", a[i]);
        else
            printf("%d ", a[i]);
    }
}