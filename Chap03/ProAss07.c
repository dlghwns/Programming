/* 파일명: ProAss07.c

 * 내용: Programming Assignment. 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램을 작성하시오.
 *								실수값을 입력받을 때는 12.34처럼 소수 표기 방법이나 1.234e2처럼 지수 표기 방법을 둘 다 사용할 수 있게 하고
 *								제곱과 세제곱을 출력할 때는 지수 표기 방법응로 출력하시오.
 * 
 * 작성자: 이호준

 * 날짜: 2025.4. 2

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 실수를 입력받아 제곱과 세제곱을 출력해준다.
 * 반환 : 없음
 */
void solve() 
{
	double num;
	printf("실수? ");
	scanf("%lf", &num);
	printf("제곱: %e\n", num * num);
	printf("세제곱: %e\n", num * num * num);
}


int main()
{
	solve();
	return 0;
}