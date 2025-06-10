/* 파일명: ProAss13.c

 * 내용: 직사각형 정보를 나타내는 RECT 구조체를 정의하시오.
 * 직사각형은 좌하단점과 우상단점으로 구성되며 점의 좌표는 POINT 구조체를 이용해서 나타낸다.
 * 직사각형 정보를 출력하는 print_rect 함수를 정의하고 RECT 구조체 변수를 선언해서 직사각형 정보를 입력받고 출력하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜:  2025.06.10

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



typedef struct{
    int x;
    int y;
}POINT;


typedef struct {
    POINT ld;
    POINT ru;
}RECT;


/*
* 함수명 : print_rect()
* 기능(책임)
*/
void print_rect(RECT rect)
{
    printf("[RECT 좌하단점 : (%d, %d) 우상단점 : (%d, %d)]", rect.ld.x, rect.ld.y, rect.ru.x, rect.ru.y);
}

 /*
 * 함수명 : solve()
 * 기능(책임) : 좌하단, 우상단점을 입력받아 출력해줌.
 * 반환 : 없음
 */
void solve()
{
    RECT rect;
    printf("직사각형의 좌하단점(x,y)?");
    scanf("%d %d", &rect.ld.x, &rect.ld.y);
    printf("직사각형의 우상단점(x,y)?");
    scanf("%d %d", &rect.ru.x, &rect.ru.y);


    print_rect(rect);
}


int main()
{
    solve();
    return 0;
}
