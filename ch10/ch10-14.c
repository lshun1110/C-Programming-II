/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ch10 - ���� �ڵ� 12��
	��¥ : 2025.10.05
*/

/*
	���� 10-12 : ��Ʈ�ʵ��� ���� �� ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct date {
	unsigned short year : 7;
	unsigned short month : 4;
	unsigned short day : 5;
	//unsigned short the_day_of_week : 3;
} DATE;

int main()
{
	DATE dday;
	dday.year = 18; // ������ 0~99������ ������ �����Ѵ�.
	dday.month = 11;
	dday.day = 30;

	printf("DATE�� ũ�� = %d\n", sizeof(DATE));
	printf("%d/%d/%d\n", dday.year + 2000, dday.month, dday.day);

	return 0;
}