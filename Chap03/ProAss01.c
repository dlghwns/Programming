/* ���ϸ�: ProAss01.c

 * ����: Programming Assignment. �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 2

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 /*
 * �Լ��� : solve()
 * ���(å��) : �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ����.
 * ��ȯ : ����
 */
void solve() 
{
	int a;
	printf("�� ���� ���̴�? ");
	scanf("%d", &a);
	printf("���簢���� ���� : %d\n", a*a);
	printf("���簢���� �ⷡ : %d\n", a*4);
}


int main() 
{
	solve();
	return 0;
}