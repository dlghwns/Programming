/* ���ϸ�: ProAss02.c

 * ����: Programming Assignment. �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.

 * �ۼ���: ��ȣ��

 * ��¥: 2025.3.20

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


 /*
 * �Լ��� : solve()
 * ���(å��) : ��ȣ�� ������ �Է¹޾� �����.
 * ��ȯ : ����
 */
void solve() 
{
	printf("��ȣ?\n");
	int num;
	scanf("%d", &num);
	float hakjum;
	printf("����?\n");
	scanf("%f", &hakjum);
	printf("%d�� �л��� ������ %f�Դϴ�.\n", num, hakjum);

}

int main() 
{
	solve();
	return 0;
}