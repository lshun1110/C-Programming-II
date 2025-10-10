/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 ch-07 Assignment 과제 7번
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

// 기능명 : 배열을 특정 수로 채워넣기
// 내용: 배열, 배열 크기, 복사할 값을 입력받아 배열을 채워넣음
// 입력 : 배열, 배열의 크기(정수), 복사할 값(정수)
// 출력 : x
//오류 : x

void fill_array(int* arr, int size, int copy_value)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = copy_value;
	}
}

// 기능명 : 배열을 출력하기
// 내용: 배열, 배열 크기을 입력받아 출력함.
// 입력 : 배열, 배열의 크기(정수)
// 출력 : 배열 전체(정수)
//오류 : x

void print_array(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}