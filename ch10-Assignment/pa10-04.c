/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ch10-Assignment ���� 4��
	��¥ : 2025.10.01
*/

/*
	�������� ��Ÿ���� date ����ü�� �Ű������� ���޹޾� ��¥�� ����ϴ� print_date �Լ��� ���� �Ͻÿ�. 
	�� �Լ� ����ؼ� �Է¹��� ��¥ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct Date {
    int year;
    int month;
    int day;
} DATE;

void Assignment1004();
void print_date(DATE d);  // ����ü '��' ����

int main()
{
    Assignment1004();
    return 0;
}

void Assignment1004()
{
    DATE x = { 0 };

    printf("��? ");
    (void)scanf("%d", &x.year);
    printf("��? ");
    (void)scanf("%d", &x.month);
    printf("��? ");
    (void)scanf("%d", &x.day);

    print_date(x);
}

// ��ɸ� : ��¥ ��� �Լ�
// ���� : ����ü �ȿ� ��/��/���� �Է� �޾� ���
// �Է� : ���� ����ü
// ��� : �� �� �� (����)
// ���� : x

void print_date(DATE d)
{
    printf("%d/%d/%d\n", d.year, d.month, d.day);
}