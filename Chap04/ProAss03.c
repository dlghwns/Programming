/* ���ϸ�: ProAss3.c

 * ����: Programming Assignment. ������ ���Ǹ� �Ǽ��� �Է¹޾� �е��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 *								���Ǵ� cm^3������ �Է¹޴´�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 8

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) : ������ ���Ǹ� �Է¹޾� ����� ���ش�

 * ��ȯ : �� ���� ���� ��� ����̸� 0�� ��ȯ,
 *		  �� ���� �ϳ��� �����̸� 1�� ��ȯ�Ѵ�.
 */
int solve()
{
	float g, cm3 = 0;

	printf("����(g)? ");
	scanf("%f", &g);
	printf("����(cm^3)? ");
	scanf("%f", &cm3);

	if (g && cm3 > 0)
	{
		printf("�е� : %f\n", g / cm3);
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