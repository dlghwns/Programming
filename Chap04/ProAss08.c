/* ���ϸ�: ProAss8.c

 * ����: Programming Assignment. �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 *								 �̶� ���̴� 3.141592��� ����.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 8

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int solve()
{
	const double PI = 3.141592;
	int r = 0;

	printf("�������� ����? ");
	scanf("%d", &r);
	if (r > 0)
	{
		printf("���� : %f\n", (4.0 / 3.0) * PI * r * r * r);
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int result = solve();

	if (result == 0)
	{
		return 0;
	}
	else
	{
		printf("����������.");
		return 1;
	}
}