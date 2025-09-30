/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch07 수업 시간에 작성한 배열 카피 코드
	날짜 : 2025.09.10
*/

/*
	float 형 배열을 입력 받고 카피 후에 출력하라.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define Max_arr 10

int printArrayFloat(float R[], int size);
int copyArrayFloat(float from[], float to[], int size);
void input_ArrayFloat(float from[]);

int main()
{
	float arr[Max_arr] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	float arr_c[Max_arr];

	input_ArrayFloat(arr);

	if (copyArrayFloat(arr, arr_c, size) != 0)
		printf("배열 복사 중 비정상 종료");

	printArrayFloat(arr_c, size);

	printf("종료(끝)");
	return 0;
}

void input_ArrayFloat(float from[])
{
	for (int i = 0; i < Max_arr; i++)
	{
		(void)scanf("%f", &from[i]);
	}
	return;
}

int copyArrayFloat(float from[], float to[], int size)
{
	for (int i = 0; i < size; i++)
	{
		to[i] = from[i];
	}

	for (int i = 0; i < size; i++)
	{
		if (to[i] != from[i])
		{
			return -1;
		}
	}
	return 0;
}

int printArrayFloat(float R[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("배열의 %d번째 값 = %.2f\n", i + 1, R[i]);
	}
	return 0;
}