/* 파일명: ProAss11.c

 * 내용: Programming Assignment. 원주율 파이 값이 3.14159265라고 할 때, 파이 값을 여러 가지 방법으로 출력하는 프로그램을 작성하시오
		 소수점 이하 2자리까지, 소주점 이하 4자리까지, 소수점 이하 6자리까지, 소수점 이하 8자리까지 각각 출력하고
		 지수 표기로도 출력해본다.

 * 작성자: 이호준

 * 날짜: 2025.3.20

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 파이값을 소수점 단위로 출력해줌.
 * 반환 : 없음
 */
void solve() 
{
	double pi = 3.14159265;

	printf("pi = %.2f\n", pi);
	printf("pi = %.4f\n", pi);
	printf("pi = %.6f\n", pi);
	printf("pi = %.8f\n", pi);
	printf("pi = %e\n", pi);
}

int main() 
{
	solve();
	return 0;
}