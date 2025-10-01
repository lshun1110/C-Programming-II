/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 수업 시간 실습 코드 작성 1번째 / in class lab 1번째 문제이기도 함
	날짜 : 2025.09.17
*/

/*
	예제 8-13 의 데이터 타입들을 int 에서 double 로 변형해서 코딩하고 테스트하기
	void * swap(double * a, double * b)
	단, 포인터가 NULL인지 테스트할 것
	반환 값: a 또는 b 포인터가 NULL이면 NULL, 그렇지 않으면 a 값을 반환
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
		printf("1번 뭔가 잘못되었어\n");
	}

	double* presult_1 = (double*)swapDouble((double*)NULL, &b);
	if (presult_1 == NULL)
	{
		printf("2번 뭔가 잘못되었어\n");
	}
	return 0;
}

void* swapDouble(double* pa, double* pb)
{
	//1. 입력 값 정상인지 체크 : NULL 아니어야함!!
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