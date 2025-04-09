/* 파일명: intro.c

 * 내용: intro. Visual Stdio를 이용해서 다음과 같이 C 프로그램을 작성하시고, 빌드 후 실행하시오.

 * 작성자: 이호준

 * 날짜: 2025.3.20

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : introme()
 * 기능(책임) : 이름, 나이, 인삿말을 받아 출력함.
 * 반환 : 없음.
 */
void introme() 
{
	int age;
	char hello[256];
	char name[256];

	printf("이름 나이 인사 인사말을 입력해주세요\n");
	scanf("%s %d %s", name, &age, hello);


	printf("이름 : %s 나이 : %d \n인삿말 : %s", name, age, hello);
}


int main() 
{

	introme();
	return 0;
}