/* 파일명: ProAss.c

 * 내용: 열 크기가 5인 2차원 int 배열의 모든 원소를 특정 값으로 채우는 fill_2d_array() 함수를 작성하시오.
 * 함수의 매개변수로 배열 전체에 대한 포인터와 배열의 행 크기를 전달한다.
 * 열 크기가 5, 행 크기가 4인 2차원 배열을 입력받은 값으로 채우고 출력하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜:  2025.05.21
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void fill_2darray(int ptr[], int hang, int num)
{

}


 /*
 * 함수명 : solve()
 * 기능(책임) : 숫자 하나를 입력받아 fill_2d_array() 함수를 호출함.
 * 반환 : 없음
 */
void solve()
{
	int arr[4][5]; // 2차원 배열 선언
	int* ptr = &arr[0][0];

	int num; // 입력받을 숫자
	// 숫자 입력
	printf("숫자를 입력하세요: ");
	scanf("%d", &num);
	
	fill_2darray();

}


int main()
{
	solve();
	return 0;
}