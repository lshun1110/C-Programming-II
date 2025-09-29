/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 Assignment 과제 17번
    날짜 : 2025.09.24
*/

/*
    입력받은 노래 제목을 최대 20개 저장하고 관리하는 프로그램을 작성하시오. 길이 40글자 0. 종료 1. 추가 2. 수정 3. 목록
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void Assignment0917();
void flush_line();
int  read_title(char* dst, size_t cap); 
void list_titles(const char titles[][41], int n);  
int  find_index(const char titles[][41], int n, const char* key); 

int main()
{
    Assignment0917();
    return 0;
}

void Assignment0917()
{
    char titles[20][41] = { 0 };
    int count = 0;

    while (1)
    {
        int menu = -1;
        printf("[ 0.종료 1.추가 2.수정 3.목록 ] 선택? ");
        if (scanf("%d", &menu) != 1) 
        { 
            flush_line(); 
            continue; 
        }
        
        flush_line();

        if (menu == 0)
        {
            break;
        }
        else if (menu == 1) 
        { 
            if (count >= (int)(sizeof(titles) / sizeof(titles[0]))) 
            {
                printf("저장 공간이 가득 찼습니다. (최대 %d개)\n", (int)(sizeof(titles) / sizeof(titles[0])));
                continue;
            }
            printf("노래 제목? ");
            if (read_title(titles[count], sizeof(titles[count])) == 1) 
            {
                count++;
            }
            else 
            {
                printf("빈 입력은 추가하지 않습니다.\n");
            }
        }
        else if (menu == 2) 
        { 
            if (count == 0) 
            {
                printf("수정할 항목이 없습니다.\n");
                continue;
            }
            char key[41] = { 0 };
            printf("찾을 노래 제목? ");
            if (read_title(key, sizeof(key)) == 0) 
            { 
                printf("빈 입력입니다.\n"); 
                continue; 
            }

            int idx = find_index(titles, count, key);

            if (idx < 0) 
            {
                printf("해당 제목이 없습니다.\n");
                continue;
            }
            printf("수정할 제목? ");
            if (read_title(titles[idx], sizeof(titles[idx])) == 1) 
            {
               
            }
            else 
            {
                printf("빈 입력은 수정하지 않습니다.\n");
            }
        }
        else if (menu == 3) 
        {      
            list_titles(titles, count);
        }
        else 
        {
            printf("알 수 없는 메뉴입니다.\n");
        }
    }
}

void flush_line()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF){ }
}

int read_title(char* dst, size_t cap)
{
    int r = scanf(" %40[^\n]", dst); 
    flush_line();
    if (r != 1) 
        return 0;

    int len = 0;
    while (dst[len] != '\0') 
        len++;
    while (len > 0 && (dst[len - 1] == ' ' || dst[len - 1] == '\t')) 
    {
        dst[--len] = '\0';
    }

    int s = 0;

    while (dst[s] == ' ' || dst[s] == '\t') 
        s++;
    if (s > 0) 
    {
        int i = 0;

        while (dst[s + i] != '\0') 
        { 
            dst[i] = dst[s + i];
            i++; 
        }
        dst[i] = '\0';
        len = i;
    }
    return (len > 0) ? 1 : 0;
}

void list_titles(const char titles[][41], int n)
{
    printf("<< 노래 목록 >>\n");
    if (n == 0) 
        return;
    for (int i = 0; i < n; i++) 
    {
        printf("%s\n", titles[i]);
    }
}

int find_index(const char titles[][41], int n, const char* key)
{
    for (int i = 0; i < n; i++) 
    {
        if (strcmp(titles[i], key) == 0) 
            return i;
    }
    return -1;
}