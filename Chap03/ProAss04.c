/* ���ϸ�: ProAss04.c

 * ����: Programming Assignment. ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 *								���� ũ��� N ������ �Է¹ް�, �̵��� �Ÿ��� m ������ �Է¹޴´�.

 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 2

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) : ���� �̵��Ÿ��� �Է¹޾� ���� ���� ���Ѵ�
 * ��ȯ : ����
 */
void solve() 
{
	float n, m;

	printf("��(N)? ");
	scanf("%f", &n);
	printf("�̵��Ÿ�(m)? ");
	scanf("%f", &m);

	printf("���� �� : %.2f J\n", n * m);
}


int main()
{
	solve();
	return 0;
}