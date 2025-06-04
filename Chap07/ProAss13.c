/* 파일명: ProAss13.c

 * 내용: 비트 OR 연산자를 이용하면 두 이미지를 합칠 수 있다, 크기가 같은 2개의 unsigned char 배열을 비트 OR 연산한 결과를 출력하는 프로그램을 작성하시오.
 * unsigned char 배열 2개는 크기가 16인 배열로 선언하고 임의의 데이터(0~255)를 채우고, 비트 OR 연산 결과를 저장할 배열을 따로 선언해서 사용하시오.
 * 작성자: 이호준

 * 날짜:  2025.05.21
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /*
 * 함수명 : solve()
 * 기능(책임) : 임의의 숫자가 담긴 배열 2개를 만들고 그 배열을 OR 시킨 배열을 만들어 계산하고 출력을 해줌.
 * 반환 : 없음
 */
void solve()
{
	unsigned char image1[16];
	unsigned char image2[16];
	unsigned char image3[16];

	srand((unsigned int)time(0));
	for (int i = 0; i < 16; i++)
	{
		image1[i] = rand() % 256;
		image2[i] = rand() % 256;
	}

	printf("image1 : ");
	for (int i = 0; i < 16; i++) 
	{
		printf("%X ", image1[i]);
	}

	printf("\n");

	printf("image2 : ");
	for (int i = 0; i < 16; i++)
	{
		printf("%X ", image2[i]);
	}

	printf("\n");

	for (int i = 0; i < 16; i++)
	{
		image3[i] = image1[1] | image2[i];
	}

	printf("image3 : ");
	for (int i = 0; i < 16; i++)
	{
		printf("%X ", image3[i]);
	}
}


int main()
{
	solve();
	return 0;
}