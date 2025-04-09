/* 파일명: ProAss02.c

 * 내용: Programming Assignment. 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.

 * 작성자: 이호준

 * 날짜: 2025.4. 2

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 가로와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구함.
 * 반환 : 없음
 */
void solve() 
{
	int ga, sa;
	printf("가로 길이는? ");
	scanf("%d", &ga);
	printf("세로 길이는? ");
	scanf("%d", &sa);
	printf("직사각형의 넓이 : %d\n", ga * sa);
	printf("직사각형의 둘레 : %d\n", 2 * (ga + sa));
}

int main() 
{
	solve();
	return 0;

}