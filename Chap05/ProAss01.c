/* 파일명: ProAss01.c

 * 내용: Programming Assignment. 점의 좌표 (x, y)를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램을 작성하시오.
 *                              스크린 상의 선택 영역은 직사각형 모양의 영역으로 직사각형의 좌상단점과 우하단점애 의해서 결정된다.
 * 작성자: 이호준

 * 날짜: 2025.4. 16

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : x1 x2 x3, y1 y2 y3를 입력받아 크기 비교를 하여 선택영역 안에 있는지 확인하는 함수
 * 반환 : 없음
 */
void solve()
{
    int x1, y1 = 0;
	int x2, y2 = 0;

	int x3, y3 = 0;  //점좌표
    printf("선택 영역의 좌상단점 (left, top)?");
    scanf("%d %d", &x1, &y1);

	printf("선택 영역의 우하단점 (right, bottom)?");
	scanf("%d %d", &x2, &y2);

    printf("점의 좌표(x, y)?");
	scanf("%d %d", &x3, &y3);    // 이걸로 기준.

    if (x1 < x3 && x2 > x3 /*x점 확인*/  && /*y점 확인*/ y1 < y3 && y2 > y3)
	{
		printf("선택 영역 안에 있습니다.\n");
	}
	else
	{
		printf("선택 영역 안에 있지 않습니다.\n");
	}
    
}


int main()
{
    solve();
    return 0;
}