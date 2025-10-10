/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch09 - 예제 코드 3번
	날짜 : 2025.09.28
*/

/*
	예제 9-3 : 문자열의 교환
*/

#define _CRT_SECURE_NO_WARNINGS // 라이브러리 헤더 앞에 정의한다.
#include <stdio.h>
#include <string.h> // 문자열 처리 함수 사용 시 포함
#define SIZE 32

int main()
{
	char str1[SIZE] = ""; // 널 문자열로 초기화한다.
	char str2[SIZE] = ""; // 널 문자열로 초기화한다.
	char temp[SIZE];

	printf("2개의 문자열? ");
	scanf("%s %s", str1, str2); // 빈칸으로 구분해서 문자열 입력
	printf("str1 = %s, str2 = %s", str1, str2);

	// 두 문자 배열을 swap한다.
	strcpy(temp, str1); // str1을 temp로 복사한다.
	strcpy(str1, str2); // str2를 str1로 복사한다.
	strcpy(str2, temp); // temp를 str2로 복사한다.
	printf("str1 = %s, str2 = %s", str1, str2);
	return 0;
}