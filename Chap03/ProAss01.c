/* 파일명: ProAss01.c

 * 내용: Programming Assignment. 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.

 * 작성자: 이호준

 * 날짜: 2025.4. 2

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 /*
 * 함수명 : solve()
 * 기능(책임) : 한 변의 길이를 입력받아 정사각형의 넓이와 둘래를 구함.
 * 반환 : 없음
 */
void solve() 
{
	int a;
	printf("한 변의 길이는? ");
	scanf("%d", &a);
	printf("정사각형의 넓이 : %d\n", a*a);
	printf("정사각형의 듈래 : %d\n", a*4);
}


int main() 
{
	solve();
	return 0;
}