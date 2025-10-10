/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 Assignment 과제 3번
	날짜 : 2025.10.01
*/

/*
	로그인 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하시오. 구조체 저장 아이디 비번 비교후
	동일하다면 로그인 성공 출력
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

void Assignment1003();
int cmp_login(LG* p1, LG* arr);

int main()
{
	Assignment1003();
	return 0;
}

void Assignment1003()
{
	LG arr[5] = { 
		{"a", "1"},
		{"b", "2"},
		{"c", "3"},
		{"d", "4"},
		{"e", "5"}
	};
	LG cmp_input_a = { 0 };
	LG* p1 = &cmp_input_a;

	printf("ID? ");
	(void)scanf("%s", cmp_input_a.ID);
	printf("Password? ");
	(void)scanf("%s", cmp_input_a.Password);

	if (cmp_login(p1, arr) == 0)
		printf("로그인 성공");
	else
		printf("로그인 실패");
}

// 기능명 : 아이디 패스워드 로그인 함수
// 내용 : 구조체 안에 아이디 패스워드를 입력받아 원래 있던 아이디 패스워드 구조체와 비교후 일치하는 항목 존재시 로그인함
// 입력 : 구조체 포인터(입력하는 구조체, 아이디 패스워드 db식 구조체)
// 출력 : 일치 로그인 성공 0 / 실패 -1
// 오류 : x

int cmp_login(LG* p1, LG* arr)
{
	for (int i = 0; i < 5; i++)
	{
		if (strcmp(arr[i].ID, p1->ID))
			if (strcmp(arr[i].Password, p1->Password))
				return 0;
	}
	return -1;
}
