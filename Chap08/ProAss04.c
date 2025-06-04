/* 파일명: ProAss04.c

 * 내용: 배열 원소를 가리키는 포인터를 이용해서 실수형 배열의 평균을 구하는 프로그램을 작성하시오.
 * 실수형 배열은 크기가 10이고 마음대로 초기화해서 사용한다.
 * 작성자: 이호준

 * 날짜:  2025.05.21
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) :
 * 반환 : 없음
 */
void solve()
{
	double arr[10] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };
	double* p = arr; 

	double sum = 0.0;

	printf("배열 : "); 
	for (int i = 0; i < 10; i++)
	{
		printf("%.2lf ", *(p + i)); 
	}
	printf("\n");

	for (int i = 0; i < 10; i++)
	{
		sum += *(p + i); 
	}
	printf("평균 : %lf", sum);

}


int main()
{
	solve();
	return 0;
}