/*
    �й� : 202511227
    �̸� : �̽���
    ���α׷� �� : c��� �����ð� �ǽ� .2
    ��¥ : 2025.10.01
*/

/*
    ����ü �ȿ� ����ü�� �ִ� ������ ���� �ۼ�, 1.����ü ��ǥ 2. �װɷ� ������ ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void PracticeRect();

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point a; // �� ������
    Point b; // ���� ���� ������
} Rect;

int main()
{
    PracticeRect();
    return 0;
}

void PracticeRect()
{
    Rect r = { 0 };
    printf("���簢�� ������ A�� ��ǥ x y ? ");
    (void)scanf("%d %d", &r.a.x, &r.a.y);

    printf("���簢�� ������ B�� ��ǥ x y ? ");
    (void)scanf("%d %d", &r.b.x, &r.b.y);

    int width = abs(r.b.x - r.a.x);
    int height = abs(r.b.y - r.a.y);
    int area = width * height;
    int peri = 2 * (width + height);

    printf("����: %d, ����: %d\n", width, height);
    printf("����: %d, �ѷ�: %d\n", area, peri);
}