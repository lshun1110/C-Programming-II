/*
    �й� : 202511227
    �̸� : �̽���
    ���α׷� �� : c��� ch-08 Assignment ���� 4��
    ��¥ : 2025.09.21
*/

/*
	�迭 ���Ҹ� ����Ű�� �����͸� �̿��ؼ� �Ǽ��� �迭�� ����� ���ϴ� ���α׷��� �ۼ��϶�.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0804();
float calculate_arr(float* arr, int size);

int main()
{
	Assignment0804();
	return 0;
}

void Assignment0804()
{
	float arr[10] = { 0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("��� : %f", calculate_arr(arr, size));
}

// ��ɸ� : �Ǽ��� �迭 �Է¹޾� �迭�� ����� ���ϴ� �Լ�
// ����: �迭�� �� ũ�⸦ �Է¹޾� �迭�� ����� ����.
// �Է� : �迭 (�Ǽ���), �迭�� ũ��(����)
// ��� : ��� (�Ǽ���)
//���� : x

float calculate_arr(float* arr, int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++, arr++)
		sum += *arr;
	return sum / (float)size;
}