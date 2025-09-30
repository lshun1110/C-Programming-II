/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch07 - 예제 코드 5번
	날짜 : 2025.09.15
*/

/*
	예제 7-5 : 배열 원소의 사용
*/

/*
	배열의 원소(element) 모두 일반 변수와 같이 함수의 인자, 연산, lvalue, rvalue 자유롭게 쓰인다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZIE 5

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int arr[ARR_SIZIE] = { 0 };
	int i;

	arr[0] = 5;
	arr[1] = arr[0] + 10;
	arr[2] = add(arr[0], arr[1]);
	printf("정수를 2개 입력하세요 : ");
	(void)scanf("%d %d", &arr[3], &arr[4]);

	for (i = 0; i < ARR_SIZIE; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}