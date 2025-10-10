/*
    �й� : 202511227
    �̸� : �̽���
    ���α׷� �� : c��� ch-09 Assignment ���� 12��
    ��¥ : 2025.09.24
*/

/*
    �Է¹��� ���ڿ��� ���Ͽ� �̵��� ���� ���� �Է¹޾� �����̳� ���������� ȸ���� �����
    ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Assignment0912();
void strip_newline(char* s);
void rotate_preserve_spaces(char* s, int k);

int main()
{
    Assignment0912();
    return 0;
}

void Assignment0912()
{
    char str[256] = { 0 };
    int k = 0;

    while (1)
    {
        printf("���ڿ� ? ");
        if (fgets(str, sizeof(str), stdin) == NULL) 
            return;
        
        strip_newline(str);
        printf("�̵��� ���ڼ� ? ");

        if (scanf("%d", &k) != 1) 
            return;
        
        int ch; 
        while ((ch = getchar()) != '\n' && ch != EOF) {}

        if (k == 0) 
        {
            printf("�����մϴ�.\n");
            return;
        }
        rotate_preserve_spaces(str, k);
        printf("%s\n", str);
    }
}

// ���� ����
void strip_newline(char* s)
{
    size_t pos = strcspn(s, "\r\n");
    s[pos] = '\0';
}

// ��ɸ� : ���ڿ��� ȸ����Ű�� �Լ�
// ���� : ���ڿ��� �̵��� ���� ���� �Է� ���� �� �� ���ڼ� ��ŭ ȸ�� -> �ڿ��� ������ ����
// �Է� : ���ڿ�, �̵��� ���� �� (����)
// ��� : x
// ���� : x

void rotate_preserve_spaces(char* s, int k)
{
    int pos[256] = { 0 };     
    char buf[256] = { 0 }; 

    int n = 0;

    for (int i = 0; s[i] != '\0'; ++i) 
    {
        if (s[i] != ' ') 
        {        
            pos[n] = i;
            buf[n] = s[i];
            n++;
        }
    }
    if (n == 0) 
        return;        
    int r = k % n;
    if (r < 0) r += n;         

    for (int i = 0; i < n; ++i) 
    {
        int src = (i - r);
        if (src < 0) 
            src += n;
        s[pos[i]] = buf[src];
    }
}