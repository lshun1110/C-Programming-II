/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 Assignment 과제 4번
	날짜 : 2025.11.09
*/

/*
	아이디와 패스워드가 저장된 텍스트 파일을 크기가 10인 LOGIN 구조체 배열로 읽어온 다음,
    입력 받은 아이디와 패스워드가 일치하면 "로그인 성공" 아니면 "로그인 실패"라고 
    출력하는 프로그램을 작성하시오.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define LEN 32
#define MAX_USERS 10

typedef struct LOGIN
{
    char id[LEN];
    char pw[LEN];
} LOGIN;

int auth(const LOGIN a[], int n, const char* id, const char* pw);
void Assignment1204();
int load_logins(const char* filename, LOGIN a[], int max);

int main(void)
{
    Assignment1204();
    return 0;
}

void Assignment1204()
{
    const char* filename = "login.txt";
    LOGIN users[MAX_USERS];
    int count = load_logins(filename, users, MAX_USERS);

    if (count < 0)
    {
        fprintf(stderr, "파일을 열 수 없습니다: %s\n", filename);
        return ;
    }

    char in_id[LEN], in_pw[LEN];

    printf("아이디: ");
    if (scanf("%31s", in_id) != 1)
        return ;

    printf("비밀번호: ");
    if (scanf("%31s", in_pw) != 1)
        return ;

    if (auth(users, count, in_id, in_pw))
    {
        printf("로그인 성공\n");
    }
    else
    {
        printf("로그인 실패\n");
    }
    return ;
}

int load_logins(const char* filename, LOGIN a[], int max) 
{
    FILE* fp = fopen(filename, "r");
    if (!fp) return -1;

    int n = 0;
    while (n < max && fscanf(fp, "%31s %31s", a[n].id, a[n].pw) == 2) 
    {
        n++;
    }
    fclose(fp);
    return n;
}

int auth(const LOGIN a[], int n, const char* id, const char* pw) 
{
    for (int i = 0; i < n; i++) 
    {
        if (strcmp(a[i].id, id) == 0 && strcmp(a[i].pw, pw) == 0) 
        {
            return 1;
        }
    }
    return 0;
}
