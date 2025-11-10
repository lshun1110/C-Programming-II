/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 Assignment 과제 13번
    날짜 : 2025.11.09
*/

/*
    정수의 개수 N을 입력받아 int가 N개 들어갈 수 있는 동적 메모리를 할당받는다.
    이 배열에 임의의 정수n개를 생성해서 채운 다음 텍스트 파일과 2진 파일로 각각 
    저장하는 프로그램을 작성하시오. 2진 파일로 저장시 n을 먼저 저장하고,
    배열의 내용을 저장하시오. 저장된 파일을 문서 편집기에서 열어서 내용을
    확인해보고 파일의 크기도 비교해본다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void Assignment1213();
void make_filenames(const char* base, char* txt, char* dat, size_t sz);
int write_text(const char* fname, const int* a, int n);
int write_bin(const char* fname, const int* a, int n);

int main()
{
    Assignment1213();
    return 0;
}

void Assignment1213()
{
    int n;
    char base[128];
    char txt[160], dat[160];

    printf("정수의 개수? ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return;

    printf("파일명? ");
    if (scanf("%127s", base) != 1)
        return;

    int* arr = (int*)malloc(sizeof(int) * n);
    if (!arr)
        return;

    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() % 2001) - 1000;
    }

    make_filenames(base, txt, dat, sizeof(txt));

    if (!write_text(txt, arr, n) || !write_bin(dat, arr, n))
    {
        fprintf(stderr, "파일 저장 중 오류가 발생했습니다.\n");
        free(arr);
        return ;
    }

    printf("%s와 %s를 생성했습니다.\n", txt, dat);

    free(arr);
}

void make_filenames(const char* base, char* txt, char* dat, size_t sz) 
{
    snprintf(txt, sz, "%s.txt", base);
    snprintf(dat, sz, "%s.dat", base);
}

int write_text(const char* fname, const int* a, int n) 
{
    FILE* fp = fopen(fname, "w");
    if (!fp) return 0;
    for (int i = 0; i < n; i++) 
    {
        fprintf(fp, "%d\n", a[i]);
    }
    fclose(fp);
    return 1;
}

int write_bin(const char* fname, const int* a, int n) 
{
    FILE* fp = fopen(fname, "wb");
    if (!fp) 
        return 0;
    fwrite(a, sizeof(int), n, fp);    
    fclose(fp);
    return 1;
}