#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void f1(void);
int f3(int a, int b);

int main()
{
	int x = 3;
	f1();
	int result = f3(2, 3);


	return 0;
}




void f1(void)
{
	//1. hello world 출력한다.
	printf("hello world\n");
	return;
}

/*
* 함수명 int f3(int a, int b)
* 기능: 입력된 두 수 a, b를 더해서 반환.
* 입력 : a, b는 상수
* 반환 : 정수
*/
int f3(int a,int b)
{
	int result = 0;
	//두 수를 더해서 반환
	result = a + b;

	return result;
}