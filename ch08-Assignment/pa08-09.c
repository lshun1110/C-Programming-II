/*
    �й� : 202511227
    �̸� : �̽���
    ���α׷� �� : c��� ch-08 Assignment ���� 9��
    ��¥ : 2025.09.21
*/

/*
    �� ũ�Ⱑ 5�� 2���� �迭 int �迭�� ���Ҹ� Ư�� ������ ä��� fill_2d_array �Լ��� �ۼ��Ͻÿ�.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0809(void);
void fill_2d_array(int (*arr)[5], int rows, int a);

int main()
{
    Assignment0809();
    return 0;
}

void Assignment0809(void)
{
    int arr[5][5] = { 0 };
    int rows = (int)(sizeof(arr) / sizeof(arr[0]));
    int a = 0;

    printf("�迭�� ���ҿ� ������ ��? ");
    scanf("%d", &a);

    fill_2d_array(arr, rows, a);
}

// ��ɸ� : �Է¹��� ���� 2���� �迭�� ä���ִ� �Լ�
// ����: 2���� �迭, ũ������ ��, ä�� ���� ���� �Է� �ް� �ش� ���� 2���� �迭�� ä���ְ� ����ϴ� �Լ�
// �Է� : 2���� ���� �迭, ��(�迭 ũ��), ������ ��
// ��� : 2���� �迭 (��ü)
// ���� : x

void fill_2d_array(int (*arr)[5], int rows, int a)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = a;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}