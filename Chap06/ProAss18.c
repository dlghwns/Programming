/* ���ϸ�: ProAss18.c

 * ����: ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� divisors �Լ��� �ۼ��Ͻÿ�.
   0~999������ ������ ���� 3���� �����ϰ� divisors �Լ��� �̿��ؼ� ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
 * �ۼ���: ��ȣ��

 * ��¥:  2025.05.15
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /*
  * �Լ��� : divisors()
  * ���(å��) : ���ڷ� ���޵� ������ ����� ������ ���ؼ� �����.
  * ��ȯ : ����
  */
void divisors(int num)
{
	int count = 0;

	printf("%d�� ���: ", num);
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("=> �� %d��\n", count);
}


 /*
 * �Լ��� : solve()
 * ���(å��) :
 * ��ȯ : ����
 */
int solve()
{
	// ������ 0~ 999������ ���� 3���� ���� num1, num2, num3�� ����.
	// rand() % 1000; : 0~999������ ������ ���� ����
	srand((unsigned int)time(NULL)); // ���� �õ� �ʱ�ȭ
	divisors(rand() % 1000);
	divisors(rand() % 1000);
	divisors(rand() % 1000);


}


int main()
{
	solve();
	return 0;
}