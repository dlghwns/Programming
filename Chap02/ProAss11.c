/* ���ϸ�: ProAss11.c

 * ����: Programming Assignment. ������ ���� ���� 3.14159265��� �� ��, ���� ���� ���� ���� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
		 �Ҽ��� ���� 2�ڸ�����, ������ ���� 4�ڸ�����, �Ҽ��� ���� 6�ڸ�����, �Ҽ��� ���� 8�ڸ����� ���� ����ϰ�
		 ���� ǥ��ε� ����غ���.

 * �ۼ���: ��ȣ��

 * ��¥: 2025.3.20

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) : ���̰��� �Ҽ��� ������ �������.
 * ��ȯ : ����
 */
void solve() 
{
	double pi = 3.14159265;

	printf("pi = %.2f\n", pi);
	printf("pi = %.4f\n", pi);
	printf("pi = %.6f\n", pi);
	printf("pi = %.8f\n", pi);
	printf("pi = %e\n", pi);
}

int main() 
{
	solve();
	return 0;
}