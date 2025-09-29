/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ���� / ���� ����
	��¥ : 2025.09.24
*/

/*
	���� : Ű����κ��� ���� ���ڵ带 �� �� �Է¹޾� �ʵ带 �����Ͽ�
	����ü �迭�� ������ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���ڵ� ���� : �̸� | �й� | �а� | �г� (����)
	�Է� ���� ���� : "exit" �Է�
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
    printf("���α׷� ����Ǿ����ϴ�");
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
        printf("�̸� | �й� | �а� | �г� (����) �� �������� �Է��ϼ���. exit �Է� �� �����մϴ�\n");

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
            printf("��ū: %s\n", token);

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
        printf("%d ��° �л�\n", i + 1);
        printf("�̸� : %s\n", arr[i].name);
        printf("�й� : %s\n", arr[i].id);
        printf("�а� : %s\n", arr[i].major);
        printf("�г� : %d\n", arr[i].year);
    }
}