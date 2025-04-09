/* 파일명: ProAss7.c

 * 내용: Programming Assignment. 직각 삼각형에서 직각을 낀 두 변 a, b의 길이를 입력받아 빗변의 길이를 구하는 프로그램을 작성하시오
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int solve()
{
	//밑변=a, 높이 =b
	int a, b = 0;
	printf("밑변?");
	scanf("%d", &a);

	printf("높이?");
	scanf("%d", &b);
	

	if ((a * b) > 0)
	{
		printf("빗변의 길이: %f", (float)sqrt((a * a) + (b * b)));
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