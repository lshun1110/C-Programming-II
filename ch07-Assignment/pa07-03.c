/*
    �й� : 202511227
    �̸� : �̽���
    ���α׷� �� : c��� ch-07 Assignment ���� 3��
    ��¥ : 2025.09.14
*/

/*
    Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ񰪰� �ּڰ��� ã�Ƽ� ����ϴ� ���α׷���
    �ۼ��Ͻÿ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0703();
int SearchMax(int* arr, int size);
int SearchMin(int* arr, int size);

int main()
{
	Assignment0703();
	return 0;
}

void Assignment0703()
{
	int arr[10] = { 23,45,62,12,99,83,23,50,72,37 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("�ִ� : %d\n", SearchMax(arr, size));
	printf("�ּڰ� : %d\n", SearchMin(arr, size));
	return;
}

// ��ɸ� : �迭������ �ִ밪 ã��
// ����: �迭�� �� ũ�⸦ �Է¹޾� ��ȸ�� �ִ��� ã�� �� ��ȯ
// �Է� : �迭, �迭�� ũ��(����)
// ��� : �ִ�
//���� : x

int SearchMax(int* arr, int size)
{
	int max = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}

// ��ɸ� : �迭������ �ּڰ� ã��
// ����: �迭�� �� ũ�⸦ �Է¹޾� ��ȸ�� �ּڰ��� ã�� �� ��ȯ
// �Է� : �迭, �迭�� ũ��(����)
// ��� : �ּڰ�
//���� : x

int SearchMin(int* arr, int size)
{
	int min = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}