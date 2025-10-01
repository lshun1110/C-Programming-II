/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 Assignment 과제 12번
    날짜 : 2025.09.14
*/

/*
    기차표 예매 프로그램을 작성하려고 한다. 간단한 구현을 위해 좌석은 모두 10개라고하자.
    예매할 좌석수를 입력받고, o면 예매가능 x는 예매 불가를 의미한다.
*/

#include <stdio.h>
#include <string.h>

void Assignment0712();
void CalArray(char* a);

int main()
{
	Assignment0712();
	return 0;
}

void Assignment0712()
{
	char a[24] = "[ O O O O O O O O O O ]";

	while (strchr(a, 'O') != 0)
	{
		printf("%s\n", a);
		CalArray(a);
	}
	return;
}

void CalArray(char* a)
{
	int b;
	static int v = 0;

	printf("예매할 좌석수? ");
	scanf_s("%d", &b);

	for (int i = v + 1; i <= v + b; i++)
	{
		a[2 * i] = 'X';
		printf("%d ", i);
	}
	printf("번 좌석을 예매했습니다.\n");
	v += b;

	return;
}