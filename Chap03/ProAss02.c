/* ���ϸ�: ProAss02.c

 * ����: Programming Assignment. ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 2

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) : ���ο� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ����.
 * ��ȯ : ����
 */
void solve() 
{
	int ga, sa;
	printf("���� ���̴�? ");
	scanf("%d", &ga);
	printf("���� ���̴�? ");
	scanf("%d", &sa);
	printf("���簢���� ���� : %d\n", ga * sa);
	printf("���簢���� �ѷ� : %d\n", 2 * (ga + sa));
}

int main() 
{
	solve();
	return 0;

}