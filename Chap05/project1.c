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
	//1. hello world ����Ѵ�.
	printf("hello world\n");
	return;
}

/*
* �Լ��� int f3(int a, int b)
* ���: �Էµ� �� �� a, b�� ���ؼ� ��ȯ.
* �Է� : a, b�� ���
* ��ȯ : ����
*/
int f3(int a,int b)
{
	int result = 0;
	//�� ���� ���ؼ� ��ȯ
	result = a + b;

	return result;
}