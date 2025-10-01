/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 Assignment 과제 7번
    날짜 : 2025.09.14
*/

/*
    정수형 배열의 모든 원소를 특정 값으로 채우는 fill_array 함수를 작성하시오.
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

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &copy_value);

	fill_array(arr, size, copy_value);
	print_array(arr, size);
	return;
}

void fill_array(int* arr, int size, int copy_value)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = copy_value;
	}
}

void print_array(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}