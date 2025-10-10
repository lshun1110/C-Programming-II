/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ch10-Assignment ���� 15��
	��¥ : 2025.10.01
*/

/*
	���� ��ǥ�� ��Ÿ���� POINT ����ü�� ���ؼ� �� ���� ��ǥ�� �¹ٲٴ� swap_point �Լ��� ���� �Ͻÿ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct Point {
    int x;
    int y;
} POINT;

void Assignment1015();
void swap_point(POINT* a, POINT* b);
void sel_sort_by_x(POINT a[], int n);
void print_points(const POINT a[], int n, const char* title);

int main()
{
    Assignment1015();
    return 0;
}

void Assignment1015()
{
    POINT p[10] = {
        {7, 4}, {12, 93}, {22, 31}, {1, 20}, {34, 53},
        {41, 2}, {32, 9}, {21, 31}, {8, 2},  {3, 5}
    };
    int n = (int)(sizeof(p) / sizeof(p[0]));

    print_points(p, n, "<<���� ��>>");
    sel_sort_by_x(p, n);
    print_points(p, n, "<<���� ��>>");
}

// ��ɸ� : ��ǥ�� �����ϴ� �Լ�
// ���� : ��ǥ�� ���� �ٲ� ��
// �Է� : ����ü ������(1,2)
// ��� : x
// ���� : x

void swap_point(POINT* a, POINT* b)
{
    POINT t = *a;
    *a = *b;
    *b = t;
}

// ��ɸ� : ��ǥ�� �����ϴ� �Լ�
// ���� : ��ǥ ����ü���� �Է¹޾Ƽ� x ��ǥ�� �������� ������
// �Է� : ����ü �迭 (��ǥ��), ũ��
// ��� : x
// ���� : x

void sel_sort_by_x(POINT a[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j].x < a[min_idx].x) {
                min_idx = j;
            }
        }
        if (min_idx != i)
            swap_point(&a[i], &a[min_idx]);
    }
}

// ��ɸ� : ��ǥ �迭�� ����ϴ� �Լ�
// ���� : ����ü �迭���� ���ĵ� ��ǥ���� �����
// �Է� : ����ü �迭(���� ��ǥ - x����) , ũ�� (����), ���� ����(���ڿ�)
// ��� : ����ü �迭(���� ��ǥ - x����)
// ���� : x

void print_points(const POINT a[], int n, const char* title)
{
    printf("%s\n", title);
    for (int i = 0; i < n; i++) 
    {
        printf("(%d, %d)", a[i].x, a[i].y);
        if (i != n - 1) printf(" ");
    }
    printf("\n");
}