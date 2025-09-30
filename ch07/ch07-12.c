/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch07 - 예제 코드 4번
	날짜 : 2025.09.15
*/

/*
	예제 7-4 : 배열의 크기보다 초기값을 적게 지정하는 경우
*/

#include <stdio.h>
/*
	실수 배열은 컴파일러가 자동 할당 하라고 그 갯수만큼 할당해준다.
	문자 배열은 입력시 null-terminate 0 종료문자가 같이 들어가기 때문에 항상 배열 길이 + 1 이다.
*/
int main()
{
	int amount[5] = { 1,1,5 };
	int price[5] = { 0 };
	int i;

	printf("amount = ");
	for (i = 0; i < 5; i++)
		printf("%d ", amount[i]);
	printf("\n");

	printf("price = ");
	for (i = 0; i < 5; i++)
		printf("%d ", price[i]);
	printf("\n");

	return 0;
}