/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ch10 - ���� �ڵ� 7��
	��¥ : 2025.10.05
*/

/*
	���� 10-7 : ����ü ������
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
	CONTACT ct = { "�輮��", "01011112222", 0 };
	CONTACT* p = &ct;

	p->ringtone = 5;
	strcpy(p->phone, "01011112223");
	printf("�� ��: %s\n", p->name);
	printf("��ȭ��ȣ: %s\n", p->phone);
	printf("�� �� ��: %d\n", p->ringtone);

	return 0;
}