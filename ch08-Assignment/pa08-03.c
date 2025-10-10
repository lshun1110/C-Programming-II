/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 ch-08 Assignment 과제 3번
    날짜 : 2025.09.21
*/

/*
	포인터 연산을 사용하여 배열을 순서대로 출력하게 만들고, 역순으로 출력 또한 구현하시오.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0803();
void print_int_array1(int* arr, int size);
void print_int_array2(int* arr, int size);

int main()
{
	Assignment0803();
	return 0;
}

void Assignment0803()
{
	int arr[10] = { 44,32,62,23,45,76,77,89,23,45 };
	int size = sizeof(arr) / sizeof(arr[0]);

	print_int_array1(arr, size);
	print_int_array2(arr, size);
}

// 기능명 : 배열을 순서대로 출력하는 함수
// 내용: 배열과 그 크기를 입력받아 배열을 순서대로 출력
// 입력 : 배열, 배열의 크기(정수)
// 출력 : 배열 (전체)(순차적)
//오류 : x

void print_int_array1(int* arr, int size)
{
	for (int i = 0; i < size; i++, arr++)
		printf("%d ", *arr);
	printf("\n");
}

// 기능명 : 배열을 역순으로 출력하는 함수
// 내용: 배열과 그 크기를 입력받아 배열을 역순으로 출력
// 입력 : 배열, 배열의 크기(정수)
// 출력 : 배열 (전체)(역순)
//오류 : x

void print_int_array2(int* arr, int size)
{
	int* p = &arr[size - 1];
	for (int i = 0; i < size; i++, p--)
		printf("%d ", *p);
}