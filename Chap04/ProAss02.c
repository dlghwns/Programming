/* 파일명: ProAss2.c

 * 내용: Programming Assignment. 화씨온도(F)를 실수로 입력받아 섭씨 온도로 변환해서 출력하는 프로그램을 작성하시오.
 *								화씨온도를 섭씨온도로 변환하는 공식은 다음과 같다.
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 //섭씨온도 = (화씨온도 - 32) * 5 / 9

void solve()
{
	float c = 0;
	printf("화씨온도?");
	scanf("%f", &c);
	printf("%.2f F =  %.2f C\n", c, (c - 32) * 5 / 9);

}


int main()
{
	solve();
	return 0;
}