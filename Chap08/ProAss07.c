/* 파일명: ProAss07.c

 * 내용: 실수형 배열에 대해서 원소들을 역순으로 만드는 reverse_array 함수를 작성하시오.
 * 크기가 10인 double 배열에 대해서 원하는 값으로 초기값을 채운 다음 reverse_array 함수의 호출 결과를 확인하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜:  2025.05.21
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
함수명 : reverse_array()
 * 기능(책임) : double형 배열을 받아 역순으로 출력하는 함수
 * 반환 : 없음
 */
void reverse_array(double *ptr)
{
	printf("역순: ");
	for (int i = 9; i >= 0; i--)
	{
		printf("%.2lf ", *(ptr + i));
	}
}

 /*
 * 함수명 : solve()
 * 기능(책임) :
 * 반환 : 없음
 */
void solve()
{
	double arr[10] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
	double* ptr = arr;
	printf("배열: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%.2lf ", arr[i]);
	}
	printf("\n");

	reverse_array(arr);

}


int main()
{
	solve();
	return 0;
}