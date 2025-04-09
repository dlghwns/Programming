/* 파일명: ProAss6.c

 * 내용: Programming Assignment. 점 A의 좌표(x1, y1)과 점 B의 좌표 (x2, y2)를 입력받아 두 점 A, B를 지나는 직선의 기울기를
 *								 구하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void solve()
{
	int x1, y1, x2, y2 = 0;

	printf("한 점의 좌표 (x1, y1)?");
	scanf("%d %d", &x1, &y1);

	printf("또 다른 점의 좌표 (x2, y2)?");
	scanf("%d %d", &x2, &y2);

	printf("기울기 : %f\n", (float)(y2 - y1) / (x2 - x1));
}

int main()
{
	solve();
	return 0;
}