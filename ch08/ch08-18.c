/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch08 - 예제 코드 14번
	날짜 : 2025.09.21
*/

/*
    예제 8-14 : 함수의 처리 결과를 매개변수로 전달하는 get_sum_product 함수
*/

#include <stdio.h>

void get_sum_product(int x, int y, int* sum, int* product);

int main()
{
    int result1, result2;

    // 2. 함수 호출할 때 처리 결과를 받을 변수의 주소를 전달한다.
    get_sum_product(10, 20, &result1, &result2);
    printf("sum = %d, product = %d\n", result1, result2);

    return 0;
}

// 1. 처리 결과를 저장할 변수를 가리키는 포인터형으로 매개변수를 선언한다.
void get_sum_product(int x, int y, int* sum, int* product)
{
    // 3. 포인터형 매개변수가 가리키는 곳에 처리 결과를 저장한다.
    *sum = x + y;
    *product = x * y;
}