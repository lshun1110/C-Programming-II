/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 Assignment 과제 3번
	날짜 : 2025.11.09
*/

/*
	텍스트 파일의 이름을 입력받아 파일 내의 문자들의 대하여 영문자의 개수를
    문자별로 세서 출력하는 프로그램을 작성하시오. 문자의 개수를 셀때는 대소문자를
    구분하지 않는다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Assignment1203();
void trim(char* s);
void count_letters(FILE* fp, int cnt[26]);
void print_counts(const int cnt[26]);

int main(void)
{
    Assignment1203();
}

void Assignment1203()
{
    char name[512];
    int cnt[26] = { 0 };

    if (!fgets(name, sizeof(name), stdin)) {
        fprintf(stderr, "파일 이름을 읽지 못했습니다.\n");
        return;
    }
    trim(name);

    FILE* fp = fopen(name, "r");
    if (!fp) {
        fprintf(stderr, "파일을 열 수 없습니다: %s\n", name);
        return;
    }

    count_letters(fp, cnt);
    fclose(fp);

    print_counts(cnt);
    return;
}

void trim(char* s) 
{
    if (s) s[strcspn(s, "\r\n")] = '\0';
}

void count_letters(FILE* fp, int cnt[26]) 
{
    int ch;
    while ((ch = fgetc(fp)) != EOF) 
    {
        if (isalpha((unsigned char)ch))
        {
            ch = tolower((unsigned char)ch);
            cnt[ch - 'a']++;
        }
    }
}

void print_counts(const int cnt[26]) 
{
    for (int i = 0; i < 26; i++) 
    {
        printf("%c : %d\n", 'A' + i, cnt[i]);
    }
}

