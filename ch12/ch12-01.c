/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 수업시간 실습
    날짜 : 2025.11.04
*/

#include <stdio.h>

int test_io(void);

int main(int argc, char* argv[]) 
{

    printf("Hello World!\n");

    fprintf(stdout, "Hello World!\n");

    fprintf(stderr, "Hello World!\n");

    test_io();

    return 0;
}

#define FNAME "BTS.txt"

int test_io(void) 
{

    int x = 0;

    int res = fscanf(stdin, "%d", &x);
    fprintf(stdout, "입력값: %d, 반환값: %d\n", x, res);

    FILE* fBTS = NULL;

    fBTS = fopen("BTS.txt", "w");
    if (fBTS == NULL) {
        fprintf(stderr, "파일을 열 수 없습니다.\n");
        // exit(0);
    }
    else {
        int res = fscanf(stdin, "%d", &x);
        fprintf(stdout, "입력값: %d, 반환값: %d\n", x, res);
        fprintf(fBTS, "입력값: %d, 반환값: %d\n", x, res);
    }

    fflush(fBTS);
    fclose(fBTS);

    return 0;
}