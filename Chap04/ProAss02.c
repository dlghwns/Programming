/* ���ϸ�: ProAss2.c

 * ����: Programming Assignment. ȭ���µ�(F)�� �Ǽ��� �Է¹޾� ���� �µ��� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 *								ȭ���µ��� �����µ��� ��ȯ�ϴ� ������ ������ ����.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 8

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 /*
 * �Լ��� : double()
 * ���(å��) : �����µ��� ���ϴ� ���Ŀ� �������
 * ��ȯ : ����� result��.
 */
double cal(double a)
{
	double result = (a - 32) * (5.0 / 9.0);
	return result;
}


/*
* �Լ��� : solve()
* ���(å��) : ȭ���µ��� �Է¹ް� cal�Լ��� �����.
* ��ȯ : ����
*/
void solve()
{
	float c = 0;
	printf("ȭ���µ�?");
	scanf("%f", &c);

	printf("%.2f F = %.2lf C", c, cal(c));
}


int main()
{
	solve();
	return 0;
}