/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 Assignment 과제 1번  
	날짜 : 2025.10.01
*/

/*
	아이디와 패스워드를 관리하기 위한 LOGIN 구조체를 정의 후 아이디 패스워드 입력받아 출력하는 프로그램을 작성하라.
	단, 비밀번호는 실제와 같이 출력시 * 로 출력한다
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void Assignment1001();

typedef struct Login
{
	char ID[20];
	char Password[20];
}LG;

int main()
{
	Assignment1001();
	return 0;
}

void Assignment1001()
{
	LG a = { 0 };
	printf("ID? ");
	(void)scanf("%s", a.ID);
	printf("Password? ");
	(void)scanf("%s", a.Password);

	printf("ID: %s\n", a.ID);
	printf("ID: ");
	for (int i = 0; i < strlen(a.Password); i++)
		printf("*");
	/*
		printf("\n");
		printf("ID: %s\n", arr.Password);
	*/
}