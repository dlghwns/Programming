/* 파일명: ProAss16.c

 * 내용: 정수형 배열과 키 값을 매개변수로 전달받아 배열에서 키 값을 찾아 인덱스를 리턴하는 find_array 함수를 작성하시오.
 * 만일 키 값을 찾을 수 없으면 -1을 리턴한다.
 * 작성자: 이호준

 * 날짜:  2025.05.21
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 함수명 : find_array()
* 기능(책임) : 배열안에 주어진 값이 있는지 확인하고 값이 있으면 그 인덱스를, 없으면 -1을 반환한다.
* 반환 : 인덱스 번호 또는 -1
*/
int find_array(int arr[], int num)
{
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == num)
		{
			return i;
		}
	}
	return -1;
}

 /*
 * 함수명 : solve()
 * 기능(책임) : 찾을 값을 입력받고 find_array 함수를 호출한다.
 * 반환 : 없음
 */
void solve()
{
	int arr[10] = { 23, 45, 62, 12 ,99, 83, 23, 50, 72, 37 };
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");


	int num;
	printf("찾을 값? ");
	scanf("%d", &num);

	int a = find_array(arr, num);
	if (a == -1)
	{
		printf("값이 없음.");
	}
	else
	{
		printf("%d는 %d번째 원소입니다.", num, a);
	}
}


int main()
{
	solve();
	return 0;
}