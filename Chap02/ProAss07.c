/* 파일명: ProAss07.c

 * 내용: Programming Assignment. 커피 사이즈(S, T, G)와 주문 수량을 입력받아서 출력하는 프로그램을 작성하시오, 
         커피 사이즈는 S, T, G 세 가지 문자 중 하나로 입력받는다.

 * 작성자: 이호준

 * 날짜: 2025.3.20

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 커피 사이즈와 수량을 입력받아 출력함.
 * 반환 : 없음
 */
void solve() 
{
	printf("커피 사이즈(S, T, G)와 주문 수량?\n");
	char size;
	int howmany;
	scanf("%c %d", &size, &howmany);
	printf("%c 사이즈 %d잔을 주문합니다.\n", size, howmany);
}

int main()
{
	solve();
	return 0;
}