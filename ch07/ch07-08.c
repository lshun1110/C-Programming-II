/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch07 drill exercise 4번
	날짜 : 2025.09.10
*/

/*
	4. 표준 라이브러리의 qsort 함수를 이용하여 연락처 구조체 타입에 대한 정렬 하는
	예시코드를 작성하시오.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Contact
{
	char name[20];
	char tel[20];
	char memo[30];
}CT;

int cmp_CT_by_name(const void* a, const void* b);
void printArrayContact(CT* R, int size);

int main()
{
	CT arr[5] = {
		{"이승훈", "010-0000-1111" , "안녕녕안"},
		{"김동준", "010-0000-2222" , "안녕녕안"},
		{"유수환", "010-0000-3333" , "안녕녕안"},
		{"신명", "010-0000-4444" , "안녕녕안"},
		{"김찬호", "010-0000-5555" , "안녕녕안"},
	};

	int size = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, size, sizeof(arr[0]), cmp_CT_by_name);
	printArrayContact(arr, size);

	return 0;
}

int cmp_CT_by_name(const void* a, const void* b)
{
	const CT* pa = (const CT*)a;
	const CT* pb = (const CT*)b;
	return strcmp(pa->name, pb->name);
}

void printArrayContact(CT* R, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s %s %s\n", (R + i)->name, (R + i)->tel, (R + i)->memo);
	}
}