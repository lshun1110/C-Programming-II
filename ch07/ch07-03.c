/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch07 - in class lab 수업 시간 작성 코드 / in class lab 있긴함
	날짜 : 2025.09.10
*/

/*
	배열의 함수가 같은지 비교 + 배열의 주소 개념
*/

#include <stdio.h>
#define Max_arr 5

int isEqualArrayInt(int* a, int* b, int size);

int main()
{
	int x[Max_arr] = { 1,2,3,4,5 };
	int y[Max_arr] = { 1,2,3,4,5 };

	int i;
	int is_equal = 1;

	int size = sizeof(x) / sizeof(x[0]);

	if (x == y)
		printf("두 배열의 주소가 같습니다.\n");

	if (isEqualArrayInt(x, y, size) == 1)
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