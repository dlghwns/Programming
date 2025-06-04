/* 파일명: ProAss04.c

 * 내용: Programming Assignment. 물체의 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램을 작성하시오.
 *								힘의 크기는 N 단위로 입력받고, 이동한 거리는 m 단위로 입력받는다.

 * 작성자: 이호준

 * 날짜: 2025.4. 2

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 힘과 이동거리를 입력받아 일의 양을 구한다
 * 반환 : 없음
 */
void solve() 
{
	float n, m;

	printf("힘(N)? ");
	scanf("%f", &n);
	printf("이동거리(m)? ");
	scanf("%f", &m);

	printf("일의 양 : %.2f J\n", n * m);
}


int main()
{
	solve();
	return 0;
}