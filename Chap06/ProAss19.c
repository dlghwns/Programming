/* ���ϸ�: ProAss19.c

 * ����: ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� graph �Լ��� �ۼ��Ͻÿ�.
 ���� ��� graph(1200, 100);�� 100���� *�� �ϳ��� ����ϹǷ� *�� 12�� ����ϰ�, 
 graph(1200, 10);�� 10���� *�� �ϳ��� ����ϹǷ� *�� 120�� ����Ѵ�.
 0~9999������ ������ ���� 3���� �����ϰ� ������ 100���� �׷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥:  2025.05.15
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


 /*
  * �Լ��� : graph()
  * ���(å��) : int�� �ϳ��� �Է¹޾� 100���� ���� ����ŭ *�� ����Ѵ�.
  * ��ȯ : ����
  */
void graph(int num)
{
	printf("%d:", num);
	for (int i = 0; i < num / 100; i++)
	{
		printf("*");	
	}
	printf("\n");
}

 /*
 * �Լ��� : solve()
 * ���(å��) : ������ ���ڸ� graph �Լ��� ������.
 * ��ȯ : ����
 */
int solve()
{
	srand((unsigned int)time(NULL));
	graph(rand() % 10000);
	graph(rand() % 10000);
	graph(rand() % 10000);
}


int main()
{
	solve();
	return 0;
}