/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ch-11 �����ð� �ǽ�
	��¥ : 2025.10.15
*/

/*
	��� �Լ��� Ȱ�� �� �����ð� �ǽ� �ڵ�. 1 -> ��ͽ� ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sub_main();
int count_digit(int a);

int main()
{
	sub_main();
	return 0;
}

void sub_main()
{
	int num = 0;
	while (1)
	{
		printf("����? ");
		scanf("%d", &num);
		if (num == 0)
			break;
		printf("count of digit = %d\n", count_digit(num));
	}
	return;
}

int count_digit(int a)
{
	if (a <= 0)
		return 0;
	return 1 + count_digit(a / 10);
}