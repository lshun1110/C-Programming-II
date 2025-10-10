/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 ch-07 Assignment 과제 4번
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

// 기능명 : 배열에서의 최대값 찾기
// 내용: 배열과 그 크기를 입력받아 순회로 최댓값을 찾은후 반환
// 입력 : 배열, 배열의 크기(정수)
// 출력 : 최댓값
//오류 : x

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

// 기능명 : 배열에서의 최솟값 찾기
// 내용: 배열과 그 크기를 입력받아 순회로 최솟값을 찾은 후 반환
// 입력 : 배열, 배열의 크기(정수)
// 출력 : 최솟값
//오류 : x

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

// 기능명 : 배열에서의 최대값의 인덱스 찾기
// 내용: 배열과 그 크기를 입력받아 순회로 최댓값의 인덱스를 찾은후 반환
// 입력 : 배열, 배열의 크기(정수)
// 출력 : 최댓값의 인덱스
//오류 : x

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

// 기능명 : 배열에서의 최솟값의 인덱스 찾기
// 내용: 배열과 그 크기를 입력받아 순회로 최솟값의 인덱스를 찾은후 반환
// 입력 : 배열, 배열의 크기(정수)
// 출력 : 최솟값의 인덱스
//오류 : x

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