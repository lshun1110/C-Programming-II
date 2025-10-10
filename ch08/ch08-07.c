/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch08 - 예제 코드 3번
	날짜 : 2025.09.21
*/

/*
    예제 8-3 : 포인터의 사용
*/

#include <stdio.h>

int main()
{
    int x = 10;
    int* p = &x;    // p는 a의 주소로 초기화한다.

    printf("x = %d\n", x);
    printf("&x = %p\n", &x);   // &x는 주소값이므로 %p로 출력

    printf("p = %p\n", p);
    printf("*p = %d\n", *p);   // *p는 int형 변수이므로 %d로 출력
    printf("&p = %p\n", &p);   // 포인터도 변수이므로 주소가 있다.

    *p = 20;   // x = 20; 으로 수행된다.

    printf("*p = %d\n", *p);   // printf("*p = %d\n", x); 와 동일
    return 0;
}