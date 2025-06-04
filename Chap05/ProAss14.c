/* 파일명: ProAss.c

 * 내용: 이차원 평면에 있는 점의 좌표 (x, y)를 입력받아 어느 사문면의 점인지 출력하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜: 2025.4. 16

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 소요 시간과 주행거리를 입력받고 소요시간을 km/h로 변환하여 평균속력을 구하여 크기 비교를 해준다.
 * 반환 : 없음
 */
void solve()
{
	float minute, ki = 0.0;

	printf("구간 단속 소요 시간(분)? ");
	scanf("%f", &minute);
	printf("구간 단속 주행 거리 (km)?");
	scanf("%f", &ki);

	float total_min = 60.0 / minute;    //소요시간 (시)
	ki *= total_min;

	if (ki > 100)
	{
		printf("평균 속력은 %.1f km/h입니다. 구간 단속 과속입니다.", ki);
	}
	else
	{
		printf("평균 속력은 %.1f km/h입니다. 구간 단속 과속이 아닙니다.", ki);
	}
}


int main()
{
	solve();
	return 0;
}