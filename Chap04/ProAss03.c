/* 파일명: ProAss3.c

 * 내용: Programming Assignment. 질량과 부피를 실수로 입력받아 밀도를 구하는 프로그램을 작성하시오.
 *								부피는 cm^3단위로 입력받는다.
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int solve()
{
	float g, cm3 = 0;

	printf("질량(g)? ");
	scanf("%f", &g);
	printf("부피(cm^3)? ");
	scanf("%f", &cm3);

	if ((g * cm3) > 0)
	{
		printf("밀도 : %f\n", g / cm3);
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