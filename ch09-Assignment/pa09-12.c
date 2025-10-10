/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 ch-09 Assignment 과제 12번
    날짜 : 2025.09.24
*/

/*
    입력받은 문자열에 대하여 이동할 글자 수를 입력받아 왼쪽이나 오른쪽으로 회전한 결과를
    출력하는 프로그램을 작성하시오.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Assignment0912();
void strip_newline(char* s);
void rotate_preserve_spaces(char* s, int k);

int main()
{
    Assignment0912();
    return 0;
}

void Assignment0912()
{
    char str[256] = { 0 };
    int k = 0;

    while (1)
    {
        printf("문자열 ? ");
        if (fgets(str, sizeof(str), stdin) == NULL) 
            return;
        
        strip_newline(str);
        printf("이동할 글자수 ? ");

        if (scanf("%d", &k) != 1) 
            return;
        
        int ch; 
        while ((ch = getchar()) != '\n' && ch != EOF) {}

        if (k == 0) 
        {
            printf("종료합니다.\n");
            return;
        }
        rotate_preserve_spaces(str, k);
        printf("%s\n", str);
    }
}

// 개행 제거
void strip_newline(char* s)
{
    size_t pos = strcspn(s, "\r\n");
    s[pos] = '\0';
}

// 기능명 : 문자열을 회전시키는 함수
// 내용 : 문자열과 이동할 문자 수를 입력 받은 뒤 그 문자수 만큼 회전 -> 뒤에서 앞으로 보냄
// 입력 : 문자열, 이동할 문자 수 (정수)
// 출력 : x
// 오류 : x

void rotate_preserve_spaces(char* s, int k)
{
    int pos[256] = { 0 };     
    char buf[256] = { 0 }; 

    int n = 0;

    for (int i = 0; s[i] != '\0'; ++i) 
    {
        if (s[i] != ' ') 
        {        
            pos[n] = i;
            buf[n] = s[i];
            n++;
        }
    }
    if (n == 0) 
        return;        
    int r = k % n;
    if (r < 0) r += n;         

    for (int i = 0; i < n; ++i) 
    {
        int src = (i - r);
        if (src < 0) 
            src += n;
        s[pos[i]] = buf[src];
    }
}