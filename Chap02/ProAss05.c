/* ���ϸ�: ProAss05.c

 * ����: Programming Assignment. �����Ը� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �����Դ� �Ǽ��� �Է¹�����, 
         ������ ���� 2�ڸ������� ����Ѵ�.

 * �ۼ���: ��ȣ��

 * ��¥: 2025.3.20

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) : �����Ը� �Է¹޾� �����.
 * ��ȯ : ����
 */
void solve() 
{
	printf("������?\n");
	float mugae;
	scanf("%f", &mugae);
	printf("�Է��� �����Դ� %.2fKG�Դϴ�\n", mugae);
}

int main() 
{
	solve();
	return 0;
}