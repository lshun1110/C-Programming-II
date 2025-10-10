/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch08 - 예제 코드 13번
	날짜 : 2025.09.21
*/

/*
    예제 8-13 : 포인터에 의한 전달 방법으로 구현한 swap 함수
*/

#include <stdio.h>

void swap(int* x, int* y);

int main()
{
    int a = 3, b = 7;

    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);  // 포인터에 의한 전달
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int* x, int* y) // x,y는 인자의 주소이다.
{
    int temp = *x; // x가 가리키는 변수의 값을 temp에 저장한다.
    *x = *y; // y가 가리키는 변수의 값을 x가 가리키는 변수에 저장한다.
    *y = temp; // temp를 y가 가리키는 변수에 저장한다.
}