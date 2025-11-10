/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 Assignment 과제 11번
    날짜 : 2025.11.09
*/

/*
    CONTACT 구조체를 이용한 연락처 관리 프로그램에 텍스트 파일에서 연락처를 로딩하는
    기능을 추가한다. 텍스트 파일에 정해진 형식으로 연락처를 저장하고 이 파일을 읽어서
    CONTACT 구조체 배열을 생성 하도록 프로그램을 작성하시오. CONTACT 구조체 배열은
    동적 메모리에 생성한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN  64
#define PHONE_LEN 32
#define MAIL_LEN  64

typedef struct Contact
{
    char name[NAME_LEN];
    char phone[PHONE_LEN];
    char email[MAIL_LEN];
} CONTACT;

void Assignment1211();
void trim_newline(char* s);
int load_contacts(const char* filename, CONTACT** out_arr, int* out_n);

int main()
{
    Assignment1211();
    return 0;
}

void Assignment1211()
{
    char fname[256];
    CONTACT* list = NULL;
    int count = 0;

    if (!fgets(fname, sizeof(fname), stdin))
    {
        fprintf(stderr, "파일 이름을 읽지 못했습니다.\n");
        return ;
    }
    trim_newline(fname);

    if (load_contacts(fname, &list, &count) != 0)
    {
        fprintf(stderr, "파일을 열거나 읽는 데 실패했습니다: %s\n", fname);
        return ;
    }

    printf("총 %d건 로드됨\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("[%d] %s | %s | %s\n", i + 1, list[i].name, list[i].phone, list[i].email);
    }

    free(list);
}

void trim_newline(char* s) 
{
    if (!s) return;
    s[strcspn(s, "\r\n")] = '\0';
}

int load_contacts(const char* filename, CONTACT** out_arr, int* out_n) 
{
    FILE* fp = fopen(filename, "r");
    if (!fp) return -1;

    CONTACT* arr = NULL;
    int cap = 0;
    int n = 0;
    char line[256];

    while (fgets(line, sizeof(line), fp)) 
    {
        trim_newline(line);

        char* p = line;
        while (*p == ' ' || *p == '\t') 
            p++;
        if (*p == '\0' || *p == '#') 
            continue;

        char name[NAME_LEN], phone[PHONE_LEN], email[MAIL_LEN];
        int m = sscanf(p, " %63[^,] , %31[^,] , %63[^\n]", name, phone, email);
        if (m != 3) continue; 

        if (n == cap) 
        {
            int new_cap = (cap == 0) ? 8 : cap * 2;
            CONTACT* tmp = realloc(arr, sizeof(CONTACT) * new_cap);
            if (!tmp) { fclose(fp); free(arr); return -1; }
            arr = tmp;
            cap = new_cap;
        }
        strncpy(arr[n].name, name, NAME_LEN);  arr[n].name[NAME_LEN - 1] = '\0';
        strncpy(arr[n].phone, phone, PHONE_LEN); arr[n].phone[PHONE_LEN - 1] = '\0';
        strncpy(arr[n].email, email, MAIL_LEN);  arr[n].email[MAIL_LEN - 1] = '\0';
        n++;
    }

    fclose(fp);
    *out_arr = arr;
    *out_n = n;
    return 0;
}