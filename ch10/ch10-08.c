/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ch10 - ���� �ڵ� 6��
	��¥ : 2025.10.05
*/

/*
	���� 10-6 : ����ü �迭�� �˻�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define STR_SIZE 20

typedef struct contact
{
	char name[STR_SIZE];
	char phone[STR_SIZE];
	int ringtone;
} CONTACT;

int main()
{
	CONTACT arr[] = { // �ʱ�ȭ�� �迭
	{"�輮��", "01011112222", 0},
	{"������", "01012345678", 1},
	{"������", "01077778888", 2},
	{"�賲��", "01098765432", 9},
	{"������", "01011335577", 5},
	{"��ȣ��", "01024682468", 7},
	{"������", "01099991111", 3}
	};
	int size = sizeof(arr) / sizeof(arr[0]); // �迭�� ũ��
	int i;
	char name[STR_SIZE]; // �Է¹��� �̸��� ������ ���� �迭
	int index;

	printf("�̸�? ");
	scanf("%s", name);

	index = -1; // �̸��� ã�� �� ������ -1
	for (i = 0; i < size; i++)
	{
		if (strcmp(arr[i].name, name) == 0) // ���ڿ� ��
		{
			index = i;
			break;
		}
	}

	if (index >= 0) // �˻� ����
	{
		printf("%s�� ��ȭ��ȣ: %s", arr[index].name, arr[index].phone);
	}
	else // �˻� ����
	{
		printf("����ó�� ã�� �� �����ϴ�.");
	}

	return 0;
}