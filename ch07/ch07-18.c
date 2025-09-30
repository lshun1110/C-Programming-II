/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch07 - 예제 코드 11번
	날짜 : 2025.09.15
*/

/*
	예제 7-11 : 선택 정렬
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

int main()
{
	int data[SIZE] = { 7,3,9,5,1 };
	int i, j;
	int index, temp;

	for (i = 0; i < SIZE - 1; i++)
	{
		index = i; // 정렬할 배열 중 가장 작은 원소의 인덱스
		for (j = i + 1; j < SIZE; j++) // 0 ~ (i-1)까지는 정렬된 상태이다.
		{
			// data[i] ~data[SIZE -1] 중 가장 작은 원소의 인덱스를 index에 저장
			if (data[index] > data[j]) // 오름차순 정렬 < 반대면 내림차순
				index = j;
		}
		// i 번재 원소를 index에 있는 원소와 맞바꾼다.
		if (i != index)
		{
			temp = data[i];
			data[i] = data[index];
			data[index] = temp;
		} // i 번째 원소가 i 번째로 작은 값이 된다.
	}
	printf("정렬 후 : ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", data[i]);
	printf("\n");

	return 0;
}