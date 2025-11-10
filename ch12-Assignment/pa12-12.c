/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 Assignment 과제 12번
    날짜 : 2025.11.09
*/

/*
    11번 프로그램에 연락처 검색이 실패하는 경우 새로운 연락처를 추가하는 기능을
    구현하시오. 또한, 프로그램이 종료될 때 CONTACT 구조체의 내용을 텍스트 파일로
    저장하도록 처리하시오.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN  64
#define PHONE_LEN 64

typedef struct CONTACT
{
    char name[NAME_LEN];
    char phone[PHONE_LEN];
} CONTACT;

void Assigment1212();
void trim(char* s);
void load_contacts(const char* filename, CONTACT** arr, int* n);
int save_contacts(const char* filename, const CONTACT* arr, int n);
int find_by_name(const CONTACT* arr, int n, const char* name);

int main()
{
    Assigment1212();
    return 0;
}

void Assigment1212()
{
    char fname[256];
    CONTACT* list = NULL;
    int count = 0;

    printf("연락처 파일명? ");
    if (!fgets(fname, sizeof(fname), stdin)) return;
    trim(fname);

    load_contacts(fname, &list, &count);

    char who[NAME_LEN];
    printf("검색할 이름? ");
    if (scanf("%63s", who) != 1)
    {
        free(list);
        return;
    }

    int idx = find_by_name(list, count, who);
    if (idx >= 0)
    {
        printf("%s의 전화번호는 %s 입니다.\n", list[idx].name, list[idx].phone);
    }
    else
    {
        printf("연락처를 찾을 수 없습니다. %s 님의 연락처를 등록하시겠습니까 (y/n)? ", who);
        char yn[8];
        if (scanf("%7s", yn) == 1 && (yn[0] == 'y' || yn[0] == 'Y'))
        {
            char ph[PHONE_LEN];
            printf("전화번호? ");
            if (scanf("%63s", ph) == 1)
            {
                CONTACT* tmp = realloc(list, sizeof(CONTACT) * (count + 1));
                if (!tmp)
                {
                    free(list);
                    return;
                }
                list = tmp;

                strncpy(list[count].name, who, NAME_LEN);
                list[count].name[NAME_LEN - 1] = '\0';
                strncpy(list[count].phone, ph, PHONE_LEN);
                list[count].phone[PHONE_LEN - 1] = '\0';
                count++;

                printf("등록을 완료했습니다.\n");
            }
        }
        else
        {
            printf("등록을 취소했습니다.\n");
        }
    }

    if (save_contacts(fname, list, count))
    {
        printf("%s 로 %d건의 연락처를 저장했습니다.\n", fname, count);
    }
    else
    {
        fprintf(stderr, "저장에 실패했습니다: %s\n", fname);
    }

    free(list);
}

void trim(char* s) 
{
    if (!s) return;
    s[strcspn(s, "\r\n")] = '\0';
}

void load_contacts(const char* filename, CONTACT** arr, int* n) 
{
    FILE* fp = fopen(filename, "r");
    *arr = NULL;
    *n = 0;
    if (!fp) return;

    CONTACT* list = NULL;
    int cap = 0;
    char line[256];

    while (fgets(line, sizeof(line), fp)) 
    {
        char nm[NAME_LEN], ph[PHONE_LEN];

        if (sscanf(line, " %63s %63s", nm, ph) != 2) 
        {
            continue;
        }

        if (*n == cap) 
        {
            int new_cap = (cap == 0) ? 8 : cap * 2;
            CONTACT* tmp = realloc(list, sizeof(CONTACT) * new_cap);
            if (!tmp) 
            {
                free(list);
                fclose(fp);
                *arr = NULL;
                *n = 0;
                return;
            }
            list = tmp;
            cap = new_cap;
        }

        strncpy(list[*n].name, nm, NAME_LEN);
        list[*n].name[NAME_LEN - 1] = '\0';
        strncpy(list[*n].phone, ph, PHONE_LEN);
        list[*n].phone[PHONE_LEN - 1] = '\0';
        (*n)++;
    }

    fclose(fp);
    *arr = list;
}

int save_contacts(const char* filename, const CONTACT* arr, int n) 
{
    FILE* fp = fopen(filename, "w");
    if (!fp) 
        return 0;

    for (int i = 0; i < n; i++) 
    {
        fprintf(fp, "%s %s\n", arr[i].name, arr[i].phone);
    }

    fclose(fp);
    return 1;
}

int find_by_name(const CONTACT* arr, int n, const char* name) 
{
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].name, name) == 0) return i;
    }
    return -1;
}