/* ���ϸ�: ProAss10.c

 * ����: Programming Assignment. ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 2

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) : USD�� �Է¹޾� �� �޷� ȯ���� ���� ������ش�.
 * ��ȯ : ����
 */
void solve() 
{
	int usd;
	float dall;
	printf("USD? ");
	scanf("%d", &usd);
	printf("��/�޷� ȯ��? ");
	scanf("%f", &dall);
	printf("USD %d = KRW %.2f", usd, usd*dall);
}


int main() 
{
	solve();
	return 0;
}