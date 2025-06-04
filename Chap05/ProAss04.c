/* 파일명: ProAss04.c

 * 내용: Programming Assignment. 연도를 입력받아 윤년인지 검사하는 프로그램을 작성하시오.
 *								윤년이 되는 조건은 다음과 같다.
 * 작성자: 이호준

 * 날짜: 2025.4. 16

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 년도를 입력받아 윤년인지 학인해준다. 
 * 반환 : 없음
 */

// 4로 나누어 떨어지는 해는 윤년이다.
// 4로 나누어 떨어지는 해 중에서 100으로 나누어 떨어지는 해는 윤년이 아니다.  = 중첩if 쓰기.
// 100으로 나누어 떨어지는 해 중에서 400으로 나누어 떨어지는 해는 윤년이다.  = 3중첩  근데 이거 먼저 쓰는게 나을듯

int solve()
{
	int year = 0;
	printf("연도? ");
	scanf("%d", &year);
	
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				printf("%d년은 윤년입니다.", year);
			}
			else
			{
				printf("%d년은 윤년이 아닙니다.", year);
			}
		}
		else
		{
			printf("%d년은 윤년입니다.", year);
		}
	}
	else
	{
		printf("%d년은 윤년이 아닙니다.", year);
	}
	
}


int main()
{
	solve();
	return 0;
}