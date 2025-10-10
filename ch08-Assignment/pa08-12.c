/*
    �й� : 202511227
    �̸� : �̽���
    ���α׷� �� : c��� ch-08 Assignment ���� 12��
    ��¥ : 2025.09.21
*/

/*
    ������ �迭�� Ű ���� �Ű������� ���޹޾� �迭���� Ű ���� ��� ã�� �ε����� �迭�� �����ؼ�
    �����ϴ� find_all_in_array �Լ��� �ۼ��Ͻÿ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0812();
int  find_all_in_array(const int* a, int n, int key, int* idx_out, int cap);
void print_array(const int* a, int n);

int main()
{
    Assignment0812();
    return 0;
}

void Assignment0812()
{
    int arr[] = { 12, 45, 62, 99, 83, 23, 12, 72, 37 };
    int n = (int)(sizeof(arr) / sizeof(arr[0]));
    int key;

    print_array(arr, n);
    printf("ã�� ��? ");
    scanf("%d", &key);

    int idx[sizeof(arr) / sizeof(arr[0])];
    int found = find_all_in_array(arr, n, key, idx, n);

    if (found == 0)
    {
        printf("ã�� �׸��� �����ϴ�.\n");
    }
    else
    {
        printf("ã�� �׸��� %d�� �Դϴ�.\n", found);
        printf("ã�� �׸��� �ε���: ");
        for (int i = 0; i < found; i++)
        {
            if (i == found - 1)
                printf("%d\n", idx[i]);
            else
                printf("%d ", idx[i]);
        }
    }
}

// ��ɸ� : Ű ������ ã���� �ϴ� �ε����� ��� ��ȯ�ϴ� �Լ�
// ����: �迭�� ã���� �ϴ� Ű�� �Է¹ް� Ž���� ������ ��ȯ��
// �Է� : �迭, Ű��, �ε��� ����, ī���� ����
// ��� : ī���� ����(����)
// ���� : x

int find_all_in_array(const int* a, int n, int key, int* idx_out, int cap)
{
    int cnt = 0;
    for (int i = 0; i < n && cnt < cap; i++)
    {
        if (a[i] == key)
        {
            idx_out[cnt] = i;
            cnt++;
        }
    }
    return cnt;
}

// ��ɸ� : �迭�� ����ϴ� �Լ�
// ����: Ű ���� �� �� ã�� �迭�� ����ϴ� �Լ�
// �Է� : �迭, ����(����)
// ��� : �迭 (��ü)
// ���� : x

void print_array(const int* a, int n)
{
    for (int i = 0; i < n; i++) 
    {
        if (i == n - 1)
            printf("%d\n", a[i]);
        else
            printf("%d ", a[i]);
    }
}