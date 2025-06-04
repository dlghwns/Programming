/* 파일명: ProAss16.c

 * 내용: 정수의 배수를 구해서 출력하는 프로그램을 작성하시오. 양의 정수를 입력받고 배수를 몇 개나 출력할지 입력받아
 *		정수의 배수를 입력받은 개수만큼 출력하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜: 2025.4. 16

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 양의 정수와 배수의 개수를 입력받아 for문으로 계산한 값을 출력해준다.
 * 반환 : 없음
 */
int solve()
{
	int num = 0;
	int how = 0;

	printf("양의 정수?");
	scanf("%d", &num);

	printf("배수의 개수?");
	scanf("%d", &how);

	for (int i = 1; i <= how; i++)
	{
		printf("%d ", (num * i));
	}
}


int main()
{
	solve();
	return 0;
}