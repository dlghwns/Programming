/* ���ϸ�: ProAss04.c

 * ����: Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���ؼ� �迭�� ���� �� �ִ��� ���� ���ҿ� �ּڰ��� ���� ���Ҹ� ã�Ƽ�
 * �ε����� ���� �Բ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �迭�� �ʱⰪ�� ������� ���Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥:  2025.05.21
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) : �迭 ������ �ִ밪�� �ּҰ��� ã�Ƽ� �ε����� �� ���� ����Ѵ�.
 * ��ȯ : ����
 */
void solve()
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };

	int max = arr[0];
	int min = arr[0];

	//find max, min
	for (int i = 0; i < 10; i++)
	{
		max = arr[i] > max ? arr[i] : max;
		min = arr[i] < min ? arr[i] : min;
	}
	

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == max)
		{
			printf("�ִ�: �ε���=%d, ��=%d\n", i, max);
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == min)
		{
			printf("�ּڰ�: �ε���=%d, ��=%d", i, min);
		}
	}

}


int main()
{
	solve();
	return 0;
}