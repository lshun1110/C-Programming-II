/*
    �й� : 202511227
    �̸� : �̽���
    ���α׷� �� : c��� ch-07 Assignment ���� 7��
    ��¥ : 2025.09.14
*/

/*
    ������ �迭�� ��� ���Ҹ� Ư�� ������ ä��� fill_array �Լ��� �ۼ��Ͻÿ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0707();
void fill_array(int* arr, int size, int copy_value);
void print_array(int* arr, int size);

int main()
{
	Assignment0707();
	return 0;
}

void Assignment0707()
{
	int arr[20] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int copy_value = 0;

	printf("�迭�� ���ҿ� ������ ��? ");
	scanf("%d", &copy_value);

	fill_array(arr, size, copy_value);
	print_array(arr, size);
	return;
}

// ��ɸ� : �迭�� Ư�� ���� ä���ֱ�
// ����: �迭, �迭 ũ��, ������ ���� �Է¹޾� �迭�� ä������
// �Է� : �迭, �迭�� ũ��(����), ������ ��(����)
// ��� : x
//���� : x

void fill_array(int* arr, int size, int copy_value)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = copy_value;
	}
}

// ��ɸ� : �迭�� ����ϱ�
// ����: �迭, �迭 ũ���� �Է¹޾� �����.
// �Է� : �迭, �迭�� ũ��(����)
// ��� : �迭 ��ü(����)
//���� : x

void print_array(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}