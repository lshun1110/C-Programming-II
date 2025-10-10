/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 ch-07 Assignment 과제 1번
    날짜 : 2025.09.14
*/

/*
    등차수열은 앞의 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다.
    크기가 10인 정수형 배열에 대하여 등차수열로 값을 채워라.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0701();
void print_AS(int arr[], int size);
void Calculate_AS(int arr[], int d, int size);

int main()
{
	Assignment0701();
	return 0;
}

void Assignment0701()
{
	int arr[10] = { 0 };
	int d = 0;
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("첫 번째 항? : ");
	(void)scanf("%d", &arr[0]);

	printf("공차? ");
	(void)scanf("%d", &d);

	Calculate_AS(arr, d, size);
	print_AS(arr, size);
}

// 기능명 : 등차 수열 계산
// 내용: 첫 째항과 공차를 받아 등차수열을 계산 후 배열에 저장하는 함수
// 입력 : 배열, 공차(정수), 배열 크기(정수) - 이미 배열안 첫째항 들어있음.
// 출력 : x
//오류 : x

void Calculate_AS(int arr[], int d, int size)
{
	for (int i = 1; i < size; i++)
	{
		*(arr + i) = *(arr + i - 1) + d; // arr[i] = arr[i-1] + d
	}
	return;
}

// 기능명 : 등차 수열 출력
// 내용: 배열을 출력하는 함수
// 입력 : 배열, 배열 크기(정수)
// 출력 : 배열 (등차 수열)
//오류 : x

void print_AS(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d 번째 항 : %d\n", i + 1, arr[i]);
	}
	return;
}