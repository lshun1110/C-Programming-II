/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch07 - 예제 코드 6번
	날짜 : 2025.09.15
*/

/*
	예제 7-6 : 잘못된 인덱스를 사용하는 경우
*/

#include <stdio.h>

int main()
{
	int arr[5] = { 10,20,30,40,50 };
	int i;

	printf("arr = ");
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");

	printf("arr[5] = %d\n", arr[5]);
	//arr[5] = 100;

	/*
		배열의 크기를 벗어나는 인덱스 접근도 컴파일러는 실제로 있는 것처럼 접근한다.
		그렇기 때문에 쓰레기 값 배열과 전혀 무관한 값을 읽어들인다.
		하지만 그 값을 바꾸려면 실행에러로 프로그램이 죽어버린다.
		버퍼 오버런 혹은 out-of-bounds = ob (경계밖 나갔다는 뜻) 이라고 한다.
		UB는 undefined behavior.
	*/
	return 0;
}