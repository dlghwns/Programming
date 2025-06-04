/* 파일명: ProAss03.c

 * 내용:특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 최대값과 최소값을 찾아서 출력하는 프로그램을 작성하시오.
  배열의 초기값은 마음대로 정하시오.

 * 작성자: 이호준

 * 날짜: 2025.05.21

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 가장 큰 수와 가장 작은수를 비교 하며 각각 저장을 함. 배열과 최댓값, 최솟값을 출력.
 * 반환 : 없음
 */
int solve()
{
	int arr[10] = { 12, 34, 56, 78 ,99, 26, 31, 48, 1, 35 };  //책에 있는 값.

	int max = arr[0];
	int min = arr[0];

	printf("배열 : ");

	for (int i = 0; i < 10; i++)
	{
		printf(" %d ", arr[i]);
		//~~~~~~~~~~~~~~~~~~~~~~~~~~


		if (max < arr[i]) 
		{
			max = arr[i];
		}

		if (min > arr[i])
		{
			min = arr[i];
		}
	
	}

	printf("\n최대 : %d\n", max);
	printf("최소 : %d", min);
}


int main()
{
	solve();
	return 0;
}