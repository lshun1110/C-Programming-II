/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ch10 - ���� �ڵ� 1��
	��¥ : 2025.10.05
*/

/*
	���� 10-1 : ����ü�� ����
*/

#include <stdio.h>

// ����ü�� ���Ǵ� ���� �Լ� �ۿ� ���ش�.
struct contact // ����ó
{
	char name[20]; // �̸�
	char phone[20]; // ��ȭ��ȣ(01012345678 ������ ���ڿ��� ����)
	int ringtone; // �� �Ҹ�(0~9 ����)
};

int main()
{
	printf("contact ����ü�� ũ�� = %d", sizeof(struct contact));
	// printf("contact ����ü�� ũ�� = %d", sizeof(contact)); // ������ ����

	return 0;
}

void test()
{
	struct contact c1; // ���� �Լ����� ����ü�� ����� �� �ִ�.
}