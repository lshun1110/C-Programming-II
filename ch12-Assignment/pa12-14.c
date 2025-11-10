/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 Assignment 과제 14번
    날짜 : 2025.11.09
*/

/*
    13번 프로그램을 실행해서 크기가 다른 2진 파일을 2개 생성한 다음 두 파일을 읽어서
    하나의 int 배열을 생성한 다음 정렬 후에 다시 2진 파일로 저장하는 프로그램을 작성.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_int_asc(const void* a, const void* b);
int* read_int_file(const char* filename, size_t* out_count);
int write_int_file(const char* filename, const int* arr, size_t n);
void Assignment0014();

int main()
{
    Assignment0014();
    return 0;
}

void Assignment0014()
{
    char f1[256], f2[256], fout[256];
    int* a = NULL, * b = NULL, * all = NULL;
    size_t n1 = 0, n2 = 0, n = 0;

    printf("첫 번째 파일명? ");
    if (scanf("%255s", f1) != 1) 
        return;
    a = read_int_file(f1, &n1);
    if (a == NULL) 
    { 
        fprintf(stderr, "파일을 읽을 수 없습니다: %s\n", f1); 
        return; 
    }
    printf("정수 %zu개를 읽었습니다.\n", n1);

    printf("두 번째 파일명? ");
    if (scanf("%255s", f2) != 1) 
    { 
        free(a); 
        return; 
    }
    b = read_int_file(f2, &n2);
    if (b == NULL) 
    { 
        fprintf(stderr, "파일을 읽을 수 없습니다: %s\n", f2); 
        free(a); 
        return; 
    }
    printf("정수 %zu개를 읽었습니다.\n", n2);

    /* 3) 합치고 정렬 */
    n = n1 + n2;
    all = (int*)malloc(n * sizeof(int));
    if (all == NULL) 
    { 
        fprintf(stderr, "메모리 할당 실패\n"); 
        free(a); 
        free(b); 
        return; 
    }

    memcpy(all, a, n1 * sizeof(int));
    memcpy(all + n1, b, n2 * sizeof(int));
    qsort(all, n, sizeof(int), cmp_int_asc);

    printf("저장할 파일명? ");
    if (scanf("%255s", fout) != 1)
    { 
        free(a); 
        free(b); 
        free(all); 
        return; 
    }
    if (write_int_file(fout, all, n) != 0) 
    {
        fprintf(stderr, "파일 저장 실패: %s\n", fout);
        free(a); 
        free(b); 
        free(all);
        return;
    }
    printf("정수 %zu개를 저장했습니다.\n", n);

    free(a);
    free(b);
    free(all);
}

int cmp_int_asc(const void* x, const void* y)
{
    int a = *(const int*)x;
    int b = *(const int*)y;
    return (a > b) - (a < b);
}

int* read_int_file(const char* filename, size_t* out_count)
{
    FILE* fp = fopen(filename, "rb");
    long bytes;
    size_t cnt, got;
    int* buf;

    if (fp == NULL) 
        return NULL;

    if (fseek(fp, 0, SEEK_END) != 0) 
    { 
        fclose(fp); 
        return NULL; 
    }
    bytes = ftell(fp);
    if (bytes < 0) 
    { 
        fclose(fp); 
        return NULL; 
    }
    rewind(fp);

    cnt = (size_t)bytes / sizeof(int);
    buf = (int*)malloc(cnt * sizeof(int));
    if (buf == NULL) 
    { 
        fclose(fp); 
        return NULL; 
    }

    got = fread(buf, sizeof(int), cnt, fp);
    fclose(fp);

    *out_count = got;
    return buf;
}

int write_int_file(const char* filename, const int* arr, size_t n)
{
    FILE* fp = fopen(filename, "wb");
    size_t wrote;

    if (fp == NULL) 
        return -1;
    wrote = fwrite(arr, sizeof(int), n, fp);
    fclose(fp);

    return (wrote == n) ? 0 : -1;
}