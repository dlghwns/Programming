/* ���ϸ�: ProAss07.c

 * ����: �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� reverse_array �Լ��� �ۼ��Ͻÿ�.
 * ũ�Ⱑ 10�� double �迭�� ���ؼ� ���ϴ� ������ �ʱⰪ�� ä�� ���� reverse_array �Լ��� ȣ�� ����� Ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥:  2025.05.21
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
�Լ��� : reverse_array()
 * ���(å��) : double�� �迭�� �޾� �������� ����ϴ� �Լ�
 * ��ȯ : ����
 */
void reverse_array(double *ptr)
{
	printf("����: ");
	for (int i = 9; i >= 0; i--)
	{
		printf("%.2lf ", *(ptr + i));
	}
}

 /*
 * �Լ��� : solve()
 * ���(å��) :
 * ��ȯ : ����
 */
void solve()
{
	double arr[10] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
	double* ptr = arr;
	printf("�迭: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%.2lf ", arr[i]);
	}
	printf("\n");

	reverse_array(arr);

}


int main()
{
	solve();
	return 0;
}