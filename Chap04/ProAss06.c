/* ���ϸ�: ProAss6.c

 * ����: Programming Assignment. �� A�� ��ǥ(x1, y1)�� �� B�� ��ǥ (x2, y2)�� �Է¹޾� �� �� A, B�� ������ ������ ���⸦
 *								 ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 8

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 /*
 * �Լ��� : solve()
 * ���(å��) : �� ���� ��ǥ, �� (x1, y1)�� (x2, y2)
 *				���� �Է¹޾� ���⸦ ����Ѵ�.
 * ��ȯ : ����
 */
void solve()
{
	float x1, y1, x2, y2 = 0;

	printf("�� ���� ��ǥ (x1, y1)?");
	scanf("%f %f", &x1, &y1);

	printf("�� �ٸ� ���� ��ǥ (x2, y2)?");
	scanf("%f %f", &x2, &y2);

	printf("���� : %f\n", (y2 - y1) / (x2 - x1));
}

int main()
{
	solve();
	return 0;
}