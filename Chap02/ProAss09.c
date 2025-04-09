/* 파일명: ProAss09.c

 * 내용: Programming Assignment. 16진수 정수를 입력받아 10진수로 출력하는 프로그램을 작성하시오.

 * 작성자: 이호준

 * 날짜: 2025.3.20

 * 버전: v1.0

 */


 /*
 * 함수명 : solve()
 * 기능(책임) : 16진수 정수를 입력받아 10진수로 출력해줌.
 * 반환 : 없음
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve() 
{
	printf("16진수 정수?\n");
	int hex;
	scanf("%x", &hex);
	printf("16진수 %x는 10진수로 %d입니다.", hex, hex);
}

int main() 
{
	solve();
	return 0;
}