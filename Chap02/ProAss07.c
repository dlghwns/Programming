/* ���ϸ�: ProAss07.c

 * ����: Programming Assignment. Ŀ�� ������(S, T, G)�� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�, 
         Ŀ�� ������� S, T, G �� ���� ���� �� �ϳ��� �Է¹޴´�.

 * �ۼ���: ��ȣ��

 * ��¥: 2025.3.20

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) : Ŀ�� ������� ������ �Է¹޾� �����.
 * ��ȯ : ����
 */
void solve() 
{
	printf("Ŀ�� ������(S, T, G)�� �ֹ� ����?\n");
	char size;
	int howmany;
	scanf("%c %d", &size, &howmany);
	printf("%c ������ %d���� �ֹ��մϴ�.\n", size, howmany);
}

int main()
{
	solve();
	return 0;
}