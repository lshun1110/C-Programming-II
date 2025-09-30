/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch07 - 예제 코드 13번
	날짜 : 2025.09.15
*/

/*
	예제 7-13 : 2차원 배열의 초기화
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 3
#define COL 2 

int main()
{
	int data[ROW][COL] = {
		{10,20},{30,40}, {50,60}
	};
	int i, j;

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%3d ", data[i][j]);
		printf("\n");
	}
	return 0;
}