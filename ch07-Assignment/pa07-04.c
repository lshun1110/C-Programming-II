/*
    �й� : 202511227
    �̸� : �̽���
    ���α׷� �� : c��� ch-07 Assignment ���� 4��
    ��¥ : 2025.09.14
*/

/*
    3�� �������� �ε����� �Բ� ã�Ƽ� ����϶�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0704();
int SearchMin_index(int* arr, int size);
int SearchMax_index(int* arr, int size);
int SearchMax_value(int* arr, int size);
int SearchMin_value(int* arr, int size);

int main()
{
	Assignment0704();
	return 0;
}

void Assignment0704()
{
	int arr[10] = { 23,45,62,12,99,83,23,50,72,37 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("�ִ� : �ε��� = %d �� = %d\n", SearchMax_index(arr, size), SearchMax_value(arr, size));
	printf("�ּڰ� : �ε��� = %d �� = %d\n", SearchMin_index(arr, size), SearchMin_value(arr, size));
	return;
}

// ��ɸ� : �迭������ �ִ밪 ã��
// ����: �迭�� �� ũ�⸦ �Է¹޾� ��ȸ�� �ִ��� ã���� ��ȯ
// �Է� : �迭, �迭�� ũ��(����)
// ��� : �ִ�
//���� : x

int SearchMax_value(int* arr, int size)
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

int SearchMin_value(int* arr, int size)
{
	int min = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}

// ��ɸ� : �迭������ �ִ밪�� �ε��� ã��
// ����: �迭�� �� ũ�⸦ �Է¹޾� ��ȸ�� �ִ��� �ε����� ã���� ��ȯ
// �Է� : �迭, �迭�� ũ��(����)
// ��� : �ִ��� �ε���
//���� : x

int SearchMax_index(int* arr, int size)
{
	int index = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > arr[index])
			index = i;
	}
	return index;
}

// ��ɸ� : �迭������ �ּڰ��� �ε��� ã��
// ����: �迭�� �� ũ�⸦ �Է¹޾� ��ȸ�� �ּڰ��� �ε����� ã���� ��ȯ
// �Է� : �迭, �迭�� ũ��(����)
// ��� : �ּڰ��� �ε���
//���� : x

int SearchMin_index(int* arr, int size)
{
	int index = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < arr[index])
			index = i;
	}
	return index;
}