/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ch10 - ���� �ڵ� 13��
	��¥ : 2025.10.05
*/

/*
	���� 10-13 : LINE ����ü�� ���� �� ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct point // ���� ��ǥ
{
	int x, y;
} POINT;

typedef struct line// ����
{
	POINT start, end; // ����� �ٸ� ����ü�� ������ �����Ѵ�.
} LINE;

double get_length(const LINE* ln);

int main(void)
{
	LINE ln1 = { {10,20}, {30,40} };


	printf("������ ������: (%d, %d)", ln1.start.x, ln1.start.y);
	printf("������ ����: (%d, %d)", ln1.end.x, ln1.end.y);

	printf("������ ����: %f", get_length(&ln1));
	return 0;
}

double get_length(const LINE* ln)
{
	int dx = ln->end.x - ln->start.x;
	int dy = ln->end.y - ln->start.y;
	return sqrt(dx * dx + dy * dy);
}