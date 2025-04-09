/* 파일명: ProAss10.c

 * 내용: Programming Assignment. 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜: 2025.4. 2

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : USD를 입력받아 원 달러 환율을 구해 출력해준다.
 * 반환 : 없음
 */
void solve() 
{
	int usd;
	float dall;
	printf("USD? ");
	scanf("%d", &usd);
	printf("원/달러 환율? ");
	scanf("%f", &dall);
	printf("USD %d = KRW %.2f", usd, usd*dall);
}


int main() 
{
	solve();
	return 0;
}