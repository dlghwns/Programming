/* ���ϸ�: ProAss5.c

 * ����: Programming Assignment. �������� ���̸� ������ �Է¹޾� ������� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 *							     �̶� ���̴� 3.141592��� ����.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 8

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) : �������� ������ ���̸� �Է¹ް� ���Ǹ� �����.
 *				�������� ���̿� ������ ���� ������ �� �����Ƿ�
 *				������ && ���� �� ���� 0 �ʰ����� Ȯ�θ� �Ѵ�.
 * ��ȯ : �� ���� ���� ��� ����̸� 0�� ��ȯ,
 *		  �� ���� �ϳ��� �����̸� 1�� ��ȯ�Ѵ�.
 */
int solve()
{
	const double PI = 3.141592;
	int r, h = 0;

	printf("�������� ����? ");
	scanf("%d", &r);
	printf("����? ");
	scanf("%d", &h);

	if (r && h > 0)
	{
		printf("���� : %.6f\n", PI * r * r * h);
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