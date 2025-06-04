/* 파일명: ProAss.c

 * 내용:
 * 작성자: 이호준

 * 날짜: 2025.4. 16

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : x,y 좌표를 입력받고 x,y 좌표에 따라 사분면을 구분하여 출력하는 함수, x, y가 0일 경우 원점으로 출력해주는 기능을 추가했습니다.
 * 반환 : 없음
 */
int solve()
{
	int x, y = 0;

	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("1사분면입니다.\n");
	}
	else if (x < 0 && y > 0)
	{
		printf("2사분면입니다.\n");
	}
	else if (x < 0 && y < 0)
	{
		printf("3사분면입니다.\n");
	}
	else if (x > 0 && y < 0)
	{
		printf("4사분면입니다.\n");
	}
	else
	{
		printf("원점입니다.\n");
	}
}


int main()
{
	solve();
	return 0;
}