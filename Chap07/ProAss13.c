/* ���ϸ�: ProAss13.c

 * ����: ��Ʈ OR �����ڸ� �̿��ϸ� �� �̹����� ��ĥ �� �ִ�, ũ�Ⱑ ���� 2���� unsigned char �迭�� ��Ʈ OR ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * unsigned char �迭 2���� ũ�Ⱑ 16�� �迭�� �����ϰ� ������ ������(0~255)�� ä���, ��Ʈ OR ���� ����� ������ �迭�� ���� �����ؼ� ����Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥:  2025.05.21
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /*
 * �Լ��� : solve()
 * ���(å��) : ������ ���ڰ� ��� �迭 2���� ����� �� �迭�� OR ��Ų �迭�� ����� ����ϰ� ����� ����.
 * ��ȯ : ����
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