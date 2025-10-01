/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 in class lab 3번째 special lab // 수업 실습 코드 교차
	날짜 : 2025.09.17
*/

/*
	void printArrayInt(const int * arr, int size)
	포인터 ++ 연산자를 이용하여 구현하고 테스트
	단 포인터가 NULL인지 확인할 것

	void printArrayInt2(const int arr[], int size)
	배열인덱스를 이용하여 구현하고 테스트

	int copyArrayFloat(const float * from, float * to, int size)
	포인터 ++연산자를 이용하여 구현하고 테스트
	반환: size
	단 포인터들이 NULL인지 확인할 것
*/

#include <stdio.h>

void print_int_array();
void printArrayInt2(const int* arr, int size);
void printArrayInt1(const int* arr, int size);
void print_float_array();
int copyArrayFloat(const float* from, float* to, int size);

int main()
{
	//print_int_array();
	print_float_array();

	return 0;
}

void print_int_array()
{
	int arr[] = { 10,20,30,40,50,60,70,80,90,100 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printArrayInt1(arr, size);
	printArrayInt2(arr, size);
}

void print_float_array()
{
	float arr[5] = { 1,2,3,4,5 };
	float c_arr[5] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);

	if (copyArrayFloat(arr, c_arr, size) == size)
		printf("%d 길이 카피 성공 ", size);
	else
		printf("카피 실패");

	for (int i = 0; i < size; i++)
		printf("%f ", c_arr[i]);
}

//기능 :1차원 정수 배열을 입력 받아 콘솔에 출력한다.
//함수명 : printArrayInt1
//입력 : int 타입 1차원 배열 주소와 그 크기
//출력 : 터미널에 배열의 내용을 예쁘게 출력
//반환 : 없음

void printArrayInt2(const int* arr, int size)
{
	if (arr == NULL)
		return;

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}

void printArrayInt1(const int* arr, int size)
{
	if (arr == NULL)
		return;

	for (int i = 0; i < size; i++, arr++)
	{
		printf("%d ", *arr);
	}
	printf("\n");
	return;
}

/*
	포인터++연산자를이용하여구현하고테스트
	반환: size
	단 포인터들이 NULL인지확인할것
*/

int copyArrayFloat(const float* from, float* to, int size)
{
	if (from == NULL || to == NULL)
		return -1;

	for (int i = 0; i < size; i++)
	{
		*(to + i) = *(from + i);
	}
	return size;
}