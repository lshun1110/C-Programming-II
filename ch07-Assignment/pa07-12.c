/*
    �й� : 202511227
    �̸� : �̽���
    ���α׷� �� : c��� ch-07 Assignment ���� 12��
    ��¥ : 2025.09.14
*/

/*
    ����ǥ ���� ���α׷��� �ۼ��Ϸ��� �Ѵ�. ������ ������ ���� �¼��� ��� 10���������.
    ������ �¼����� �Է¹ް�, o�� ���Ű��� x�� ���� �Ұ��� �ǹ��Ѵ�.
*/

#include <stdio.h>
#include <string.h>

void Assignment0712();
void CalArray(char* a);

int main()
{
	Assignment0712();
	return 0;
}

void Assignment0712()
{
	char a[24] = "[ O O O O O O O O O O ]";

	while (strchr(a, 'O') != 0)
	{
		printf("%s\n", a);
		CalArray(a);
	}
	return;
}

// ��ɸ� : �¼��� ���Ÿ� ó���ϴ� �Լ�
// ����: ���� ������ �Է¹޾� ������ �¼� �� ��ŭ X �� �ٲ���
// �Է� : ���� ���� �迭
// ��� : ������ �¼��� �迭(���Ϸ�)
//���� : x

void CalArray(char* a)
{
	int b;
	static int v = 0;

	printf("������ �¼���? ");
	scanf_s("%d", &b);

	for (int i = v + 1; i <= v + b; i++)
	{
		a[2 * i] = 'X';
		printf("%d ", i);
	}
	printf("�� �¼��� �����߽��ϴ�.\n");
	v += b;

	return;
}