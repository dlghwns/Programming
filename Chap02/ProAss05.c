/* 파일명: ProAss05.c

 * 내용: Programming Assignment. 몸무게를 입력받아서 출력하는 프로그램을 작성하시오. 몸무게는 실수로 입력받으며, 
         소주점 이하 2자리까지만 출력한다.

 * 작성자: 이호준

 * 날짜: 2025.3.20

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 몸무게를 입력받아 출력함.
 * 반환 : 없음
 */
void solve() 
{
	printf("몸무게?\n");
	float mugae;
	scanf("%f", &mugae);
	printf("입력한 몸무게는 %.2fKG입니다\n", mugae);
}

int main() 
{
	solve();
	return 0;
}