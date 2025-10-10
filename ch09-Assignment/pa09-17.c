/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 ch-09 Assignment 과제 17번
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

// 기능명 : 제목 읽기
// 내용 : 표준 입력에서 최대 40글자 제목을 읽고 좌우 공백 제거 후 비어 있지 않으면 성공 처리
// 입력 : 문자열과 그 크기
// 출력 : 성공(1) / 실패(0)
// 오류 : x

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

// 기능명 : 목록 출력
// 내용 : 저장된 제목들 중 앞에서부터 n개를 순서대로 화면에 출력
// 입력 : 2차원 배열, 크기(행)
// 출력 : x
// 오류 : x

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

// 기능명 : 인덱스 탐색
// 내용 : 배열에서 key와 완전히 일치하는 제목을 선형 탐색으로 찾아 인덱스 반환
// 입력 : 2차원 배열(문자열), 크기 행, 찾을 문자열
// 출력 : 발견한 인덱스(0 이상) / 없으면 -1
// 오류 : x

int find_index(const char titles[][41], int n, const char* key)
{
    for (int i = 0; i < n; i++) 
    {
        if (strcmp(titles[i], key) == 0) 
            return i;
    }
    return -1;
}