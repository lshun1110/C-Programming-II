/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 수업시간 실습 
	날짜 : 2025.10.14
*/

/*
	extern 과 static의 활용
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ch11-02.h"

//extern int get_id();
//extern int last_id;

int main(int argc, char* argv[])
{
	printf("추석 잘 보냈어요?\n");

	printf("회원 1의 id = %d", get_id()); // 1001
	printf("회원 2의 id = %d", get_id()); // 1002
	printf("회원 3의 id = %d", get_id()); // 1003

	//printf("last_id = %d\n", last_id++);

	return 0;
}