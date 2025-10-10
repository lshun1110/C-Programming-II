/*
    �й� : 202511227
    �̸� : �̽���
    ���α׷� �� : c��� ch-09 Assignment ���� 17��
    ��¥ : 2025.09.24
*/

/*
    �Է¹��� �뷡 ������ �ִ� 20�� �����ϰ� �����ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� 40���� 0. ���� 1. �߰� 2. ���� 3. ���
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
        printf("[ 0.���� 1.�߰� 2.���� 3.��� ] ����? ");
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
                printf("���� ������ ���� á���ϴ�. (�ִ� %d��)\n", (int)(sizeof(titles) / sizeof(titles[0])));
                continue;
            }
            printf("�뷡 ����? ");
            if (read_title(titles[count], sizeof(titles[count])) == 1) 
            {
                count++;
            }
            else 
            {
                printf("�� �Է��� �߰����� �ʽ��ϴ�.\n");
            }
        }
        else if (menu == 2) 
        { 
            if (count == 0) 
            {
                printf("������ �׸��� �����ϴ�.\n");
                continue;
            }
            char key[41] = { 0 };
            printf("ã�� �뷡 ����? ");
            if (read_title(key, sizeof(key)) == 0) 
            { 
                printf("�� �Է��Դϴ�.\n"); 
                continue; 
            }

            int idx = find_index(titles, count, key);

            if (idx < 0) 
            {
                printf("�ش� ������ �����ϴ�.\n");
                continue;
            }
            printf("������ ����? ");
            if (read_title(titles[idx], sizeof(titles[idx])) == 1) 
            {
               
            }
            else 
            {
                printf("�� �Է��� �������� �ʽ��ϴ�.\n");
            }
        }
        else if (menu == 3) 
        {      
            list_titles(titles, count);
        }
        else 
        {
            printf("�� �� ���� �޴��Դϴ�.\n");
        }
    }
}

void flush_line()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF){ }
}

// ��ɸ� : ���� �б�
// ���� : ǥ�� �Է¿��� �ִ� 40���� ������ �а� �¿� ���� ���� �� ��� ���� ������ ���� ó��
// �Է� : ���ڿ��� �� ũ��
// ��� : ����(1) / ����(0)
// ���� : x

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

// ��ɸ� : ��� ���
// ���� : ����� ����� �� �տ������� n���� ������� ȭ�鿡 ���
// �Է� : 2���� �迭, ũ��(��)
// ��� : x
// ���� : x

void list_titles(const char titles[][41], int n)
{
    printf("<< �뷡 ��� >>\n");
    if (n == 0) 
        return;
    for (int i = 0; i < n; i++) 
    {
        printf("%s\n", titles[i]);
    }
}

// ��ɸ� : �ε��� Ž��
// ���� : �迭���� key�� ������ ��ġ�ϴ� ������ ���� Ž������ ã�� �ε��� ��ȯ
// �Է� : 2���� �迭(���ڿ�), ũ�� ��, ã�� ���ڿ�
// ��� : �߰��� �ε���(0 �̻�) / ������ -1
// ���� : x

int find_index(const char titles[][41], int n, const char* key)
{
    for (int i = 0; i < n; i++) 
    {
        if (strcmp(titles[i], key) == 0) 
            return i;
    }
    return -1;
}