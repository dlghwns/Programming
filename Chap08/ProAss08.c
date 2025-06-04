/* 파일명: ProAss08.c

 * 내용: 정수형 배열을 특정값으로 채우는 fill_array() 함수를 작성하시오.
 * 단, 포인터와 포인터 역참조 연산자를 이용한다.
 * fill_array 함수를 이용해서 크기가 20인 int 배열을 입력받은 값으로 채우고 출력하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜:  2025.05.21
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
 * 함수명 : fill_array()
 * 기능(책임) : 포인터를 이용하여 배열을 입력받은 값으로 채우고 출력함.
 * 반환 : 없음
 */
void fill_array(int* p, int what)
{
	for (int i = 0; i < 20; i++)
	{
		*(p + i) = what; 
	}



	printf("배열: ");
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
}

 /*
 * 함수명 : solve()
 * 기능(책임) : 원소에 저장할 값을 입력받아 fill_array() 함수를 호출함.
 * 반환 : 없음
 */
void solve()
{
	int arr[20] = { 0 };

	int* p = arr; 

	int what;
	printf("배열의 원소에 저장할 값?");
	scanf("%d", &what);

	fill_array(p, what); 



}


int main()
{
	solve();
	return 0;
}