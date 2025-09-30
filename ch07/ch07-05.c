/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch07 - in class lab 3번째 문제
	날짜 : 2025.09.10
*/

/*
	배열 범위 중 최소값 찾는 함수:
	int findMinInt(int R[], int from, int to) : from부터 to까지 최소값을 갖는 인덱스 하나를 반환
	배열의 두 원소를 교환하기 :
	void swapInt(int R[], int aindex, int bindex)
	두 함수를 구현하고, 이를 이용한 선택정렬 함수를 구현
	Int selectionSortInt(int R[], int length) : 정상 0, 실패 0이 아닌 수
	테스트 코드
	잘 동작하는지 시험하는 함수를 작성하고 main에서 호출
	Int test_selectionSortInt(void) : 성공 0, 실패 0이 아닌 수
	임의의 정수 배열을 선언한 후 정렬하고, 원래 배열과 정렬된 결과를 출력
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int findMinInt(int R[], int from, int to);
void swapInt(int R[], int aindex, int bindex);
int selectionSortInt(int R[], int length);

int main()
{
	int a, b;
	int arr[5] = { 0,2,1,4,3 };
	printf("인덱스 번호 a 부터 b 까지 젤 작은 인덱스 출력\n");
	(void)scanf("%d %d", &a, &b);
	printf("가장 작은 인덱스 : %d\n", findMinInt(arr, a, b));

	printf("a 인덱스와 b 인덱스의 값 스왑\n");
	(void)scanf("%d %d", &a, &b);
	swapInt(arr, a, b);
	printf("바뀐 값 : %d %d ", arr[a], arr[b]);

	printf("선택 정렬 시행\n");
	if (selectionSortInt(arr, 5) == 0)
	{
		printf("정렬 성공");
		for (int i = 0; i < 5; i++)
			printf("%d ", arr[i]);
	}
	else
	{
		printf("정렬 실패");
	}

	return 0;
}

int findMinInt(int R[], int from, int to)
{
	int min = R[from];
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

void swapInt(int R[], int aindex, int bindex)
{
	int temp;
	temp = R[aindex];
	R[aindex] = R[bindex];
	R[bindex] = temp;
	return;
}

int selectionSortInt(int R[], int length)
{
	for (int i = 0; i < length - 1; i++)
		swapInt(R, i, findMinInt(R, i, length));

	for (int i = 0; i < length - 1; i++)
	{
		if (R[i] > R[i + 1])
			return -1;
	}

	return 0;
}