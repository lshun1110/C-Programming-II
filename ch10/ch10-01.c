/*
    학번 : 202511227
    이름 : 이승훈
    프로그램 명 : c언어 수업시간 실습 .1
    날짜 : 2025.09.24
*/

/*
    구조체를 사용하는 예제 작성
*/

#include <stdio.h>
 
/*
struct contact {
    char name[50];
    char phone[15];
    int ringtone;
};

typedef struct contact Contact;
Contact kim = { 0 };
*/


typedef struct contact{
    char name[50];
    char phone[15];
    int ringtone;
}Contact;

Contact kim = { 0 };

// 헤더 파일 안에 넣어도 okay