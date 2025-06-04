/* ���ϸ�: ProAss05.c

 * ����: ���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�.
 * �迭�� �迭�� ũ��, ����(common difference)�� �Ű������� �޾Ƽ� ���������� �迭�� ä��� arith_seq() �Լ��� �����Ͻÿ�.
 * ù ��° ���� ���� �迭�� 0�� ���ҿ� �־ �����Ѵ�.
 * arith_seq() �Լ��� �̿��ؼ� �Է¹��� ù ��° �װ� ������ ũ�Ⱑ 10�� ������ �迭�� ���ؼ� ���������� ���ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.05.21
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* �Լ��� : arith_seq()
* ���(å��) : ���������� ���Ͽ� �迭�� �����ϴ� �Լ�
* ��ȯ : ����
*/
void arith_seq(int arr[], int diff)
{
	for (int i = 1; i < 10; i++)
	{
		arr[i] = arr[i - 1] + diff;
	}
}

 /*
 * �Լ��� : solve()
 * ���(å��) : �Է��� �޾� arith_seq() �Լ��� ȣ���Ͽ� ���������� �迭�� �����ϰ� �迭�� ������ִ� �Լ�
 * ��ȯ : ����
 */
void solve()
{
	int first;
	int diff;

	int arr[10];

	printf("ù ��° ��? ");
	scanf("%d", &first);

	printf("����? ");
	scanf("%d", &diff);

	arr[0] = first; 

	arith_seq(arr, diff); // ���������� ���ϴ� �Լ� ȣ��


	printf("��������: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}



int main()
{
	solve();
	return 0;
}