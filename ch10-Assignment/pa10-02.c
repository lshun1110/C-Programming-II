/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 Assignment 과제 2번
	날짜 : 2025.10.01
*/

/*
	아이디와 패스워드를 관리하기 위한 LOGIN 구조체를 정의 후 아이디 패스워드 입력받아 출력하는 프로그램을 작성하라.
	단, 비밀번호는 실제와 같이 출력시 * 로 출력한다. 그리고 구조체에 저장된 아이디와 패스워드 모두를 소문자로
	만드는 make lower 함수를 사용하라.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct Login
{
	char ID[20];
	char Password[20];
}LG;

void Assignment1002();
void make_lower(LG * p);
void print_login(LG* p);

int main()
{
	Assignment1002();
	return 0;
}

void Assignment1002()
{
	LG a = { 0 };
	LG* p = &a;
	printf("ID? ");
	(void)scanf("%s", a.ID);
	printf("Password? ");
	(void)scanf("%s", a.Password);

	make_lower(p);

	print_login(p);
}

void make_lower(LG *p)
{
	for (int i = 0; i < strlen(p->ID); i++)
	{
		p->ID[i] = tolower(p->ID[i]);
	}
	for (int i = 0; i < strlen(p->Password); i++)
	{
		p->Password[i] = tolower(p->Password[i]);
	}
}

void print_login(LG* p)
{
	printf("%s\n", p->ID);
	printf("%s\n", p->Password);
	for (int i = 0; i < strlen(p->Password); i++)
		printf("*");
	return;
}