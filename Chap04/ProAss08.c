/* 파일명: ProAss8.c

 * 내용: Programming Assignment. 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하시오.
 *								 이때 파이는 3.141592라고 하자.
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 /*
 * 함수명 : solve()
 * 기능(책임) : 반지름의 값을 입력받아 부피의 값을 계산하여 준다.
 * 반환 : 반지름은 음수일 수 없으므로 0초과인지 확인한다,
 *		  0 초과이면 0을 반환하고
 *        0 이하이면 1을 반환한다.
 */
int solve()
{
	const double PI = 3.141592;
	int r = 0;

	printf("반지름의 길이? ");
	scanf("%d", &r);
	if (r > 0)
	{
		printf("부피 : %f\n", (4.0 / 3.0) * PI * r * r * r);
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int result = solve();

	if (result == 0)
	{
		return 0;
	}
	else
	{
		printf("비정상종료.");
		return 1;
	}
}