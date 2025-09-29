/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 수업 / 도전 문제
	날짜 : 2025.09.24
*/

/*
	문제 : 키보드로부터 다음 레코드를 한 줄 입력받아 필드를 구분하여
	구조체 배열에 저장한 후 출력하는 프로그램을 작성하시오.
	레코드 형식 : 이름 | 학번 | 학과 | 학년 (정수)
	입력 종료 조건 : "exit" 입력
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Contact_mainstream();
char* trim(char* str);
char* ltrim(char* str);
char* rtrim(char* str);
void print_struct();

typedef struct Student
{
    char name[24];
    char id[16];
    char major[32];
    int  year;
} Student;

Student arr[20] = { 0 };

int main()
{
    Contact_mainstream();
    print_struct();
    printf("프로그램 종료되었습니다");
    return 0;
}

void Contact_mainstream()
{
    char sbuffer[80] = "";

    char* token;
    char* context = NULL;

    int i = 0;
    int a = 1;

    while (1)
    {
        printf("이름 | 학번 | 학과 | 학년 (정수) 의 형식으로 입력하세요. exit 입력 시 종료합니다\n");

        if (!fgets(sbuffer, sizeof(sbuffer), stdin)) 
            break;

        sbuffer[strcspn(sbuffer, "\n")] = '\0';

        trim(sbuffer);

        if (strcmp(sbuffer, "exit") == 0)
            return;

        context = NULL;
        token = strtok_s(sbuffer, "|", &context);

        while (token != NULL)
        {
            token = trim(token);
            printf("토큰: %s\n", token);

            if (a == 1)
            {
                strcpy(arr[i].name, token); 
            }
            else if (a == 2)
            {
                strcpy(arr[i].id, token); 
            }
            else if (a == 3)
            {
                strcpy(arr[i].major, token); 
            }
            else if (a == 4)
            {
                (void)sscanf(token, "%d", &arr[i].year);
            }

            token = strtok_s(NULL, "|", &context);
            a++;
        }
        a = 1;
        i++;
        if (i >= 20)
            break;
    }
}

char* ltrim(char* str)
{
    if (str == NULL)
        return NULL;

    char* p = str;
    while (*p && isspace((unsigned char)*p))
        p++;

    if (p != str)
        memmove(str, p, strlen(p) + 1);

    return str;
}

char* rtrim(char* str)
{
    if (str == NULL)
        return NULL;

    int len = (int)strlen(str);
    if (len == 0)
        return str;

    char* end = str + len - 1;
    while (end >= str && isspace((unsigned char)*end))
    {
        *end = '\0';
        end--;
    }
    return str;
}

char* trim(char* str)
{
    if (str == NULL)
        return NULL;
    rtrim(str);
    return ltrim(str);
}

void print_struct()
{
    for (int i = 0; i < 20; i++)
    {
        printf("%d 번째 학생\n", i + 1);
        printf("이름 : %s\n", arr[i].name);
        printf("학번 : %s\n", arr[i].id);
        printf("학과 : %s\n", arr[i].major);
        printf("학년 : %d\n", arr[i].year);
    }
}