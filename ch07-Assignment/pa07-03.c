/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 ch-07 Assignment 과제 3번
    날짜 : 2025.09.14
*/

/*
    특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 최댓값과 최솟값을 찾아서 출력하는 프로그램을
    작성하시오.
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

	printf("최댓값 : %d\n", SearchMax(arr, size));
	printf("최솟값 : %d\n", SearchMin(arr, size));
	return;
}

// 기능명 : 배열에서의 최대값 찾기
// 내용: 배열과 그 크기를 입력받아 순회로 최댓값을 찾은 후 반환
// 입력 : 배열, 배열의 크기(정수)
// 출력 : 최댓값
//오류 : x

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

// 기능명 : 배열에서의 최솟값 찾기
// 내용: 배열과 그 크기를 입력받아 순회로 최솟값을 찾은 후 반환
// 입력 : 배열, 배열의 크기(정수)
// 출력 : 최솟값
//오류 : x

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