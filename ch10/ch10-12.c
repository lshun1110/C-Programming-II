/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ch10 - ���� �ڵ� 10��
	��¥ : 2025.10.05
*/

/*
	���� 10-10 : ����ü�� �����ͷ� �����ϴ� ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct point
{
	int x, y; // ���� ��ǥ
} POINT;

void print_point(POINT* pt);

int main(void)
{
	POINT arr[] = {
	{0, 0}, {10, 10}, {20, 20}, {30, 30}, {40, 40},
	};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;

	for (i = 0; i < sz; i++)
	{
		print_point(&arr[i]); // ����ü ������ �ּҸ� �����Ѵ�.
		printf(" ");
	}
	printf("\n");

	return 0;
}

void print_point(POINT* pt) // �����Ϳ� ���� ����
{
	printf("(%d, %d)", pt->x, pt->y);
}