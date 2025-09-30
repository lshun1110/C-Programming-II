/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch07 drill exercise 1번 ~ 3번
	날짜 : 2025.09.10
*/

/*
	1. 앞에서 구현한 selectionSortInt 함수를 실수에 적용할 수 있도록
	selecttionSortFloat함수로 구현하시오.
	2. 표준 라이브러리의 qsort 함수를 이용하여 실수 배열에 대한 정렬을 하도록 하시오.
	3. 앞에서 구현한 selectionSortInt 함수를 qsort 처럼 임의의 배열에 대해 정렬할 수
	있도록 변경하시오.

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findMinFloat(float R[], int from, int to);
void swapFloat(float R[], int aindex, int bindex);
int selectionSortFloat(float R[], int length);
int compare_float(const void* a, const void* b);
int qsortFloat(float R[], int size);

int main()
{
	int a, b;
	float arr[5] = { 2.0,4.0,5.0,1.0,3.0 };

	int size = sizeof(arr) / sizeof(arr[0]);

	/*
	printf("인덱스 번호 a 부터 b 까지 젤 작은 인덱스 출력\n");
	(void)scanf("%d %d", &a, &b);
	printf("가장 작은 인덱스 : %d\n", findMinFloat(arr, a, b));

	printf("a 인덱스와 b 인덱스의 값 스왑\n");
	(void)scanf("%d %d", &a, &b);
	swapFloat(arr, a, b);
	printf("바뀐 값 : %.2f %.2f \n", arr[a], arr[b]);

	printf("정렬 시행\n");

	*/

	/*
	if (selectionSortFloat(arr, 5) == 0)
	{
		printf("선택 정렬 성공\n");
		for (int i = 0; i < 5; i++)
			printf("%.2f ", arr[i]);
	}
	else
	{
		printf("선택 정렬 실패\n");
	}
	*/

	/*
	if (qsortFloat(arr,size) == 0)
	{
		printf("퀵 정렬 성공\n");
		for (int i = 0; i < 5; i++)
			printf("%.2f ", arr[i]);
	}
	else
	{
		printf("퀵 정렬 실패\n");
	}
	*/

	if (selection_sort(arr, size, sizeof(arr[0]), compare_float) == 0)
	{
		printf("2번 퀵 정렬 성공\n");
		for (int i = 0; i < size; ++i)
			printf("%.2f\n", arr[i]);
	}

	selectionSortFloat(arr, size);

	return 0;
}

int findMinFloat(float R[], int from, int to)
{
	float min = R[from];
	int index = from;
	for (int i = from + 1; i < to; i++)
	{
		if (min > R[i])
		{
			min = R[i];
			index = i;
		}
	}
	return index;
}

void swapFloat(float R[], int aindex, int bindex)
{
	float temp;
	temp = R[aindex];
	R[aindex] = R[bindex];
	R[bindex] = temp;
	return;
}

int selectionSortFloat(float R[], int length)
{
	for (int i = 0; i < length - 1; i++)
		swapFloat(R, i, findMinFloat(R, i, length));

	for (int i = 0; i < length - 1; i++)
	{
		if (R[i] > R[i + 1])
			return -1;
	}

	return 0;
}

int qsortFloat(float R[], int size)
{
	qsort(R, size, sizeof(float), compare_float);

	for (int i = 0; i < size - 1; i++)
	{
		if (R[i] > R[i + 1])
			return -1;
	}
	return 0;
}

int compare_float(const void* a, const void* b)
{
	float x = *(const float*)a, y = *(const float*)b;
	return (x > y) - (x < y);
}

int selection_sort(void* base, int n, int size, int (*cmp)(const void*, const void*))
{
	if (!base || !cmp || size <= 0 || n <= 1)
		return -2;

	unsigned char* p = (unsigned char*)base;
	void* tmp = malloc(size);
	if (!tmp)
		return -1;

	for (int i = 0; i < n - 1; ++i)
	{
		int min_idx = i;
		for (int j = i + 1; j < n; ++j)
		{
			void* ej = p + j * size;
			void* emin = p + min_idx * size;
			if (cmp(ej, emin) < 0) min_idx = j;
		}
		if (min_idx != i) {
			void* ei = p + i * size;
			void* emin = p + min_idx * size;
			memcpy(tmp, ei, size);
			memcpy(ei, emin, size);
			memcpy(emin, tmp, size);
		}
	}
	free(tmp);
	return 0;
}