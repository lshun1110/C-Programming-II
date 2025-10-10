/*
    �й� : 202511227
    �̸� : �̽���
    ���α׷� �� : c��� ch-08 Assignment ���� 10��
    ��¥ : 2025.09.21
*/

/*
    3 x 3 ����� ���� ���ϴ� add_matrix �Լ��� �ۼ��Ͻÿ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0810();
void add_matrix(const int x[][3], const int y[][3], int out[][3], int rows);
void print_matrix(const int a[][3], int rows);

int main()
{
    Assignment0810();
    return 0;
}

void Assignment0810()
{
    int x[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    int y[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int z[3][3] = { 0 };

    int rows = (int)(sizeof(x) / sizeof(x[0]));

    add_matrix(x, y, z, rows);

    /* ���ڿ� ���� ���� */
    print_matrix(x, rows);
    print_matrix(y, rows);
    print_matrix(z, rows);
}

// ��ɸ� : 2���� �迭�� �Է¹޾� �� ���� 2���� �迭�� ���ϴ� �Լ�
// ����: 2���� �迭 �ΰ��� �Է¹޾� ��� �迭�� �� �迭�� ���� ����
// �Է� : 2���� �迭 (3��), �� ũ��(��)
// ��� : x
//���� : x

void add_matrix(const int x[][3], const int y[][3], int out[][3], int rows)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < 3; j++)
            out[i][j] = x[i][j] + y[i][j];
}

// ��ɸ� : ��� 2���� �迭�� ����ϴ� �Լ�
// ����: ������ �迭���� ���� ������ �迭�� �Է¹޾� ������ִ� �Լ�
// �Է� : 2���� �迭, �迭�� ũ��(����)
// ��� : 2���� �迭 (��ü)(������)
//���� : x

void print_matrix(const int a[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 2)
                printf("%d \n", a[i][j]);
            else
                printf("%d ", a[i][j]);
        }
    }
}