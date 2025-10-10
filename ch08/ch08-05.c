/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch08 - 예제 코드 1번
	날짜 : 2025.09.21
*/

/*
    예제 8-1 : 포인터의 바이트 크기 구하기
*/

// 포인터는 주소로서 크기가 항상 같다. 
// 포인터는 타입을 가진 주소이다.

#include <stdio.h>

int main()
{
    int* pi; // *는 변수명 쪽으로 붙여준다.
    double* pd;
    char* pc;

    printf("sizeof(pi) = %zd\n", sizeof(pi)); // 4바이트 (32비트 플랫폼)
    printf("sizeof(pd) = %zd\n", sizeof(pd)); // 4바이트
    printf("sizeof(pc) = %zd\n", sizeof(pc)); // 4바이트

    printf("sizeof(int) = %zd\n", sizeof(int)); // 4바이트
    printf("sizeof(double *) = %zd\n", sizeof(double)); // 4바이트
    printf("sizeof(char) = %zd\n", sizeof(char)); // 4바이트

    return 0;
}