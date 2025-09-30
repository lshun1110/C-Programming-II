/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch07 - 예제 코드 12번
	날짜 : 2025.09.15
*/

/*
	예제 7-12 : 2차원 배열의 선언 및 사용
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 3
#define COL 2 

int main()
{
	int data[ROW][COL];
	int i, j, k;

	for (i = 0, k = 0; i < ROW; i++) //  행 인덱스를 증가시킨다.
		for (j = 0; j < COL; j++) // 열 인덱스를 중가시킨다.
			data[i][j] = ++k; // 배열의 원소에 0부터 1씩 커지는 값을 저장한다.

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%3d ", data[i][j]);
		printf("\n"); // 행마다 줄바꿈 문자를 출력한다.
	}

	printf("sizeof(data) = %lld\n", sizeof(data));
	printf("sizeof(data[0]) = %lld\n", sizeof(data[0]));
	printf("sizeof(data[0][0]) = %lld\n", sizeof(data[0][0]));
	return 0;
}