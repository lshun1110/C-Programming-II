/*
    �й� : 202511227
    �̸� : �̽���
    ���α׷� �� : c��� ch-07 Assignment ���� 14��
    ��¥ : 2025.09.14
*/

/*
    ���� ��� ���α׷����� ��� ��Ͽ� �ִ� ����� ������ ������ �ڼ��� ���� ����� �ִ�.
    ũ�Ⱑ 10�� ������ �迭�� 0~99���� ������ ������ ä�� �׽�Ʈ�غ��ÿ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Assignment0714();
void fill_random(int a[], int d);
void print_array(const int a[], int d);
void shuffle_number(int a[], int d);

int main()
{
	Assignment0714();
	return 0;
}

void Assignment0714()
{
	int a[10];

	srand((unsigned)time(NULL));

	fill_random(a, 10);
	printf("���� �� : ");
	print_array(a, 10);

	shuffle_number(a, 10);

	printf("���� �� : ");
	print_array(a, 10);

	return;
}

// ��ɸ� : �迭�ȿ� ������ ���� ä�� �ִ� �Լ�
// ����: �迭�� �迭 ���� ��ŭ�� ���� �Է¹޾� 0~99������ ������ ���� �迭�� ����
// �Է� : �迭, �迭�� ũ��(����)
// ��� : x
// ���� : x

void fill_random(int a[], int d)
{
	for (int i = 0; i < d; i++)
		a[i] = rand() % 100;
}

// ��ɸ� : �迭�� ����ϴ� �Լ�
// ����: �迭�� �迭 ���̸� �Է¹޾� �迭�� ����ϴ� �Լ�
// �Է� : �迭, �迭�� ũ��(����)
// ��� : �迭 ��ü
// ���� : x

void print_array(const int a[], int d)
{
	for (int i = 0; i < d; i++)
		printf("%d%s", a[i], (i + 1 == d) ? "\n" : " ");
}

// ��ɸ� : �迭�� �����ִ� �Լ�
// ����: �迭�� ���̸� �Է¹޾� �迭�� ����
// �Է� : �迭, �迭�� ũ��(����)
// ��� : x
// ���� : x

void shuffle_number(int a[], int d)
{
	for (int i = d - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);

		int tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}