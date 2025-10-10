/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch09 - 예제 코드 14번
	날짜 : 2025.09.28
*/

/*
	예제 9-14 : 문자열 포인터 배열의 사용 예
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	const char* str_menu[] = { // str_menu는 원소가 5개인 포인터 배열
	"끝내기",
	"새 프로젝트",
	"프로젝트 열기",
	"솔루션 빌드",
	"디버깅 시작"
	};

	int sz_menu = sizeof(str_menu) / sizeof(str_menu[0]);
	int menu;

	while (1)
	{
		int i;
		for (i = 0; i < sz_menu; i++)
			printf("%d.%s\n", i, str_menu[i]);

		printf("메뉴 선택? ");
		scanf("%d", &menu);
		if (menu == 0) // menu를 입력받은 다음 루프 탈출 조건
			break;
		else if (menu > 0 && menu < sz_menu)
			printf("%s 메뉴를 선택했습니다.\n\n", str_menu[menu]);
		else
			printf("잘못 선택했습니다.\n\n");
	}

	return 0;
}