/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 Assignment 과제 4번
    날짜 : 2025.09.14
*/

/*
    3번 문제에서 인덱스도 함께 찾아서 출력하라
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

	printf("최댓값 : 인덱스 = %d 값 = %d\n", SearchMax_index(arr, size), SearchMax_value(arr, size));
	printf("최솟값 : 인덱스 = %d 값 = %d\n", SearchMin_index(arr, size), SearchMin_value(arr, size));
	return;
}

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