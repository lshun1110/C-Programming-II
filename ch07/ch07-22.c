/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch07 - 예제 코드 15번
	날짜 : 2025.09.15
*/

/*
	예제 7-15 : copy_array 함수의 정의 및 호출
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 7 

void copy_array(int source[], int target[], int size);
void print_array(int arr[], int size);

int main()
{
	int x[SIZE] = { 10,20,30,40,50 };
	int y[SIZE] = { 0 };

	printf("x = ");
	print_array(x, SIZE);
	copy_array(x, y, 5);
	printf("y = ");
	print_array(y, SIZE);
	return 0;
}

void copy_array(int source[], int target[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		target[i] = source[i]; // 배열의 원소를 복사한다.
}

void print_array(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}