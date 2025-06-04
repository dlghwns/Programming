/* 파일명: ProAss05.c

 * 내용: 등차수열은 앞의 항에 항상 일정한 수(공차)를 더하여 만들어간는 수열이다.
 * 배열과 배열의 크기, 공차(common difference)를 매개변수로 받아서 등차수열로 배열을 채우는 arith_seq() 함수를 정의하시오.
 * 첫 번째 항의 값은 배열의 0번 원소에 넣어서 전달한다.
 * arith_seq() 함수를 이용해서 입력받은 첫 번째 항과 공차로 크기가 10인 정수형 배열에 대해서 등차수열을 구하고 출력하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜: 2025.05.21
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 함수명 : arith_seq()
* 기능(책임) : 등차수열을 구하여 배열에 저장하는 함수
* 반환 : 없음
*/
void arith_seq(int arr[], int diff)
{
	for (int i = 1; i < 10; i++)
	{
		arr[i] = arr[i - 1] + diff;
	}
}

 /*
 * 함수명 : solve()
 * 기능(책임) : 입력을 받아 arith_seq() 함수를 호출하여 등차수열을 배열에 저장하고 배열을 출력해주는 함수
 * 반환 : 없음
 */
void solve()
{
	int first;
	int diff;

	int arr[10];

	printf("첫 번째 항? ");
	scanf("%d", &first);

	printf("공차? ");
	scanf("%d", &diff);

	arr[0] = first; 

	arith_seq(arr, diff); // 등차수열을 구하는 함수 호출


	printf("등차수열: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}



int main()
{
	solve();
	return 0;
}