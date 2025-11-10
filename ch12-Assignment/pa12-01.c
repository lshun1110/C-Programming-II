/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 Assignment 과제 1번 
	날짜 : 2025.11.09
*/

/*
	c언어에서 텍스트 파일의 이름을 입력받아서 파일의 내용을 라인 번호와 
	함께 출력하는 프로그램을 작성하시오.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

void Assignment1201();
void trim(char* s);
void print_numbered(FILE* fp);

int main()
{
    Assignment1201();
	return 0;
}

void Assignment1201()
{
    char name[512];

    if (!fgets(name, sizeof(name), stdin)) 
    {
        fprintf(stderr, "파일 이름을 읽지 못했습니다.\n");
        return ;
    }
    trim(name);

    FILE* fp = fopen(name, "r");
    if (!fp) 
    {
        fprintf(stderr, "파일을 열 수 없습니다: %s\n", name);
        return ;
    }

    print_numbered(fp);
    fclose(fp);
    return ;
}

void trim(char* s) 
{
    if (s) 
        s[strcspn(s, "\r\n")] = '\0';
}

void print_numbered(FILE* fp) 
{
    int line = 1;
    int ch;
    int line_start = 1;

    while ((ch = fgetc(fp)) != EOF) 
    {
        if (line_start) 
        {
            printf("%6d | ", line++);
            line_start = 0;
        }
        putchar(ch);
        if (ch == '\n') 
            line_start = 1;
    }
    if (!line_start) 
        putchar('\n');
}