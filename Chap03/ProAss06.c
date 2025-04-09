/* 파일명: ProAss06.c

 * 내용: Programming Assignment. 아파트의 면적을 제곱미터(m^2)로 입력받아 몇 평인지 출력하는 프로그램을 작성하지오. 1m^2 = 0.3025에 해당한다.
 *								 프로그램을 작성할 때 이름으 있는 상수를 이용해보자.
 * 작성자: 이호준

 * 날짜: 2025.4. 2

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

const double PYUNG = 0.3025;


/*
* 함수명 : solve()
* 기능(책임) : 면적을 입력받아 상수 PYUNG으로 나눈값을 출력해준다.
* 반환 : 없음
*/
void solve() 
{
	float app_my;
	printf("아파트의 면적(제곱미터)? ");
	scanf("%f", &app_my);
	printf("%.2f 제곱미터 = %.2f 평\n", app_my, app_my * PYUNG);
}


int main() 
{
	solve();
	return 0;
}