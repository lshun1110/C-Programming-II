/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 수업 시간 실습 코드 작성 2번째
	날짜 : 2025.09.17
*/

#include <stdio.h>

void print_array_double(double arr[], int sz);
void printArrayDouble(double* arr, int sz);
int test_print_array();
int test_function_pointer();
double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);

int main()
{
	//test_print_array();
	test_function_pointer();
	return 0;
}

int test_print_array()
{
	double da[] = { 1.0,2.0,3.0,4.0,5.0 };
	int size = sizeof(da) / sizeof(da[0]);

	print_array_double(da, size);

	printArrayDouble(&da[0], size);

	return 0;
}

//기능 :1차원 실수 배열을 입력 받아 콘솔에 출력한다.
//함수명 : print_array_double
//입력 : double 타입 1차원 배열 주소
//출력 : 터미널에 배열의 내용을 예쁘게 출력
//반환 : 없음

void print_array_double(double arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%lf ", arr[i]);
	}
	printf("\n");
	return;
}

void printArrayDouble(double* arr, int sz)
{
	for (int i = 0; i < sz; i++, arr++)
	{
		printf("%lf ", *arr);
	}
	printf("\n");
	return;
}

/*
	함수 이름 = 함수 시작 주소 (약간 변수 느낌)
*/

int test_function_pointer()
{
	double (*pfunc)(double a, double b) = NULL;
	// 포인터의 유동적이고 가변적인 부분을 가장 잘 들어내는 코드
	pfunc = add;

	double result = (*pfunc)(3.0, 4.0);

	printf("%lf", result);


	// 일반적으로 제너릭처럼 함수포인터또한 'void' 형태가 가능한가? 
	// 만약 된다면 이것도 형식 미정이기에 메모리 블럭 단위로 바꿔야하는가?
	// 파이썬처럼 함수를 일급 객체 처리 한다면 
}

//정수 덧셈 결과 반환
//입력 : 두 실수
//출력 : 더한 값
double add(double a, double b)
{
	return a + b;
}

//정수 뺄셈 결과 반환
//입력 : 두 실수
//출력 : 뺀 값
double sub(double a, double b)
{
	return a + b;
}

//정수 곱셈 결과 반환
//입력 : 두 실수
//출력 : 곱한 값
double mul(double a, double b)
{
	return a + b;
}