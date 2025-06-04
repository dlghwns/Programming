/* 파일명: ProAss(17, 18).c

 * 내용: 주차 시간을 분으로 입력받아서 주차 요금을 계산해서 출력하는 프로그램을 작성하시오.
 *		주차 요금은 최초 30은 2000원, 그 이후는 10분당 1000원씩으로 계산한다.하루 최대 25000원을 넘을 수 없다.
 *		주차 시간은 24시간을 넘을 수는 없다고 가정한다.
 * 작성자: 이호준

 * 날짜: 2025.4. 16

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) :
 * 반환 : 없음
 */
int solve()
{
	int money, time = 0;
	int run = 0;

	while (run == 0)
	{
		printf("주차 시간(분)? ");
		scanf("%d", &time);
		if (time > 1440)
		{
			printf("주차 시간은 최대 23시간(1440분)을 넘을 수 없습니다.\n");
			continue;
		}

		if (time == 0)   //0이면 종료.
		{
			run++;
			break;
		}
		else if (time < 30)  //최초 요금 2천원...?
		{
			money = 2000;
			printf("주차 요금 : 2000원\n");
			continue;
		}
		else if (time > 30)    //최초 30분 넘겼을시.
		{
			time -= 30;
			money = (time % 10) * 1000;
			money = money < 25000 ? 25000 : money;
			printf("주차요금 : %d원\n", money);
			continue;
		}
		
	}


}


int main()
{
	solve();
	return 0;
}