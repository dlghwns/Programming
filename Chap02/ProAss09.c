/* ���ϸ�: ProAss09.c

 * ����: Programming Assignment. 16���� ������ �Է¹޾� 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ��ȣ��

 * ��¥: 2025.3.20

 * ����: v1.0

 */


 /*
 * �Լ��� : solve()
 * ���(å��) : 16���� ������ �Է¹޾� 10������ �������.
 * ��ȯ : ����
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve() 
{
	printf("16���� ����?\n");
	int hex;
	scanf("%x", &hex);
	printf("16���� %x�� 10������ %d�Դϴ�.", hex, hex);
}

int main() 
{
	solve();
	return 0;
}