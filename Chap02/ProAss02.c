/* 파일명: ProAss02.c

 * 내용: Programming Assignment. 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오. 학생의 번호는 정수로, 학점은 실수로 입력받는다.

 * 작성자: 이호준

 * 날짜: 2025.3.20

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


 /*
 * 함수명 : solve()
 * 기능(책임) : 번호와 학점을 입력받아 출력함.
 * 반환 : 없음
 */
void solve() 
{
	printf("번호?\n");
	int num;
	scanf("%d", &num);
	float hakjum;
	printf("학점?\n");
	scanf("%f", &hakjum);
	printf("%d번 학생의 학점은 %f입니다.\n", num, hakjum);

}

int main() 
{
	solve();
	return 0;
}