/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� �����ð� �ǽ� 
	��¥ : 2025.10.14
*/

/*
	extern �� static�� Ȱ��
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ch11-02.h"

//extern int get_id();
//extern int last_id;

int main(int argc, char* argv[])
{
	printf("�߼� �� ���¾��?\n");

	printf("ȸ�� 1�� id = %d", get_id()); // 1001
	printf("ȸ�� 2�� id = %d", get_id()); // 1002
	printf("ȸ�� 3�� id = %d", get_id()); // 1003

	//printf("last_id = %d\n", last_id++);

	return 0;
}