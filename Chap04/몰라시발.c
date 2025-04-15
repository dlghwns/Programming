/* 파일명: ProAss10.c

 * 내용: Programming Assignment.
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : cal()
 * 기능(책임) : solve함수에서 입력받은 전체 재생시간을 시간, 분, 초로 변환하여 출력한다.
 * 반환 : 없음
 */
void cal(float s)
{
	int remain_day = s / 24;  //남은 소요 일.
	int remain_d_d = 
}


/*
* 함수명 : solve()
* 기능(책임) : 비행시간을 float형으로 입력받아 cal()함수를 호출한다.
* 반환 : 없음
*/
void solve()
{
	float total = 0.0;

	printf("비행 소요시간(시간)? ");
	scanf("%f", &total);

	cal(total);
}

int main()
{
	solve();
	return 0;
}