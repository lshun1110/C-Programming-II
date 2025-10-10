/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 ch-07 Assignment 과제 14번
    날짜 : 2025.09.14
*/

/*
    음악 재생 프로그램에는 재생 목록에 있는 곡들을 임의의 순서로 뒤섞는 셔플 기능이 있다.
    크기가 10인 정수형 배열에 0~99까지 임의의 정수로 채워 테스트해보시오.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Assignment0714();
void fill_random(int a[], int d);
void print_array(const int a[], int d);
void shuffle_number(int a[], int d);

int main()
{
	Assignment0714();
	return 0;
}

void Assignment0714()
{
	int a[10];

	srand((unsigned)time(NULL));

	fill_random(a, 10);
	printf("셔플 전 : ");
	print_array(a, 10);

	shuffle_number(a, 10);

	printf("셔플 후 : ");
	print_array(a, 10);

	return;
}

// 기능명 : 배열안에 랜덤한 수로 채워 넣는 함수
// 내용: 배열과 배열 길이 만큼의 수를 입력받아 0~99까지의 랜덤한 수를 배열에 저장
// 입력 : 배열, 배열의 크기(정수)
// 출력 : x
// 오류 : x

void fill_random(int a[], int d)
{
	for (int i = 0; i < d; i++)
		a[i] = rand() % 100;
}

// 기능명 : 배열을 출력하는 함수
// 내용: 배열과 배열 길이를 입력받아 배열을 출력하는 함수
// 입력 : 배열, 배열의 크기(정수)
// 출력 : 배열 전체
// 오류 : x

void print_array(const int a[], int d)
{
	for (int i = 0; i < d; i++)
		printf("%d%s", a[i], (i + 1 == d) ? "\n" : " ");
}

// 기능명 : 배열을 섞어주는 함수
// 내용: 배열과 길이를 입력받아 배열을 섞음
// 입력 : 배열, 배열의 크기(정수)
// 출력 : x
// 오류 : x

void shuffle_number(int a[], int d)
{
	for (int i = d - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);

		int tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}