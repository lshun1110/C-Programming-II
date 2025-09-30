/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch07 - in class lab 1번째 문제
	날짜 : 2025.09.10
*/

/*
	배열의 함수가 같은지 비교하는 코드
*/

// 기본적으로 lab_cmp 문제는 is_equal의 역할이 함수가 기능으로 나눠지면서 함수의 반환값에 묻히게 됨

#include <stdio.h>

#define Max_arr 5

int isEqualArrayInt(int* a, int* b, int size);

int main()
{
	int a[Max_arr] = { 1,2,3,4,5 };
	int b[Max_arr] = { 1,2,3,4,5 };
	int size = sizeof(a) / sizeof(a[0]);

	if (isEqualArrayInt(a, b, size) == 1)
		printf("두 배열은 같습니다.");

	return 0;
}

int isEqualArrayInt(int* a, int* b, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (a[i] != b[i])
		{
			return 0;
		}
	}
	return 1;
}