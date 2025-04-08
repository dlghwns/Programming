/* 파일명: ProAss03.c

 * 내용: Programming Assignment. 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오. 질량은kg, 높이는 m 단위로 입력받는다.

 * 작성자: 이호준

 * 날짜: 2025.4. 2

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double calcPositonEnergy(int weight, int height) 
{
	double energy = weight * height * 9.8;
	return energy;

}


void assignment0303() 
{
	int kg, m;
	printf("질량(kg)? ");
	scanf("%d", &kg);

	printf("높이(m)? ");
	scanf("%d", &m);

	printf("위치에너지 : %.6f J\n", calcPositonEnergy(kg, m));
}



int main() 
{
	assignment0303();
	return 0;
}