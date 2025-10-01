/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ���� �ð� �ǽ� �ڵ� �ۼ� 1��° / in class lab 1��° �����̱⵵ ��
	��¥ : 2025.09.17
*/

/*
	���� 8-13 �� ������ Ÿ�Ե��� int ���� double �� �����ؼ� �ڵ��ϰ� �׽�Ʈ�ϱ�
	void * swap(double * a, double * b)
	��, �����Ͱ� NULL���� �׽�Ʈ�� ��
	��ȯ ��: a �Ǵ� b �����Ͱ� NULL�̸� NULL, �׷��� ������ a ���� ��ȯ
*/

#include <stdio.h>

void* swapDouble(double* pa, double* pb);

int main()
{
	double a = 3.14;
	double b = 5.12;

	double* presult = (double*)swapDouble(&a, &b);
	if (presult == NULL)
	{
		printf("1�� ���� �߸��Ǿ���\n");
	}

	double* presult_1 = (double*)swapDouble((double*)NULL, &b);
	if (presult_1 == NULL)
	{
		printf("2�� ���� �߸��Ǿ���\n");
	}
	return 0;
}

void* swapDouble(double* pa, double* pb)
{
	//1. �Է� �� �������� üũ : NULL �ƴϾ����!!
	if (pa == NULL || pb == NULL)
	{
		return NULL;
	}
	//2. swap two values
	double tmp = *pa;
	*pa = *pb;
	*pb = tmp;

	return pa;
}