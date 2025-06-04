/* ���ϸ�: ProAss16.c

 * ����: ������ �迭�� Ű ���� �Ű������� ���޹޾� �迭���� Ű ���� ã�� �ε����� �����ϴ� find_array �Լ��� �ۼ��Ͻÿ�.
 * ���� Ű ���� ã�� �� ������ -1�� �����Ѵ�.
 * �ۼ���: ��ȣ��

 * ��¥:  2025.05.21
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* �Լ��� : find_array()
* ���(å��) : �迭�ȿ� �־��� ���� �ִ��� Ȯ���ϰ� ���� ������ �� �ε�����, ������ -1�� ��ȯ�Ѵ�.
* ��ȯ : �ε��� ��ȣ �Ǵ� -1
*/
int find_array(int arr[], int num)
{
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == num)
		{
			return i;
		}
	}
	return -1;
}

 /*
 * �Լ��� : solve()
 * ���(å��) : ã�� ���� �Է¹ް� find_array �Լ��� ȣ���Ѵ�.
 * ��ȯ : ����
 */
void solve()
{
	int arr[10] = { 23, 45, 62, 12 ,99, 83, 23, 50, 72, 37 };
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");


	int num;
	printf("ã�� ��? ");
	scanf("%d", &num);

	int a = find_array(arr, num);
	if (a == -1)
	{
		printf("���� ����.");
	}
	else
	{
		printf("%d�� %d��° �����Դϴ�.", num, a);
	}
}


int main()
{
	solve();
	return 0;
}