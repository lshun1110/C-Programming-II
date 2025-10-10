/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 ch-08 Assignment 과제 4번
    날짜 : 2025.09.21
*/

/*
	배열 원소를 가리키는 포인터를 이용해서 실수형 배열의 평균을 구하는 프로그램을 작성하라.
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

	printf("평균 : %f", calculate_arr(arr, size));
}

// 기능명 : 실수형 배열 입력받아 배열의 평균을 구하는 함수
// 내용: 배열과 그 크기를 입력받아 배열의 평균을 구함.
// 입력 : 배열 (실수형), 배열의 크기(정수)
// 출력 : 평균 (실수형)
//오류 : x

float calculate_arr(float* arr, int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++, arr++)
		sum += *arr;
	return sum / (float)size;
}