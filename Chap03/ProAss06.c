/* ���ϸ�: ProAss06.c

 * ����: Programming Assignment. ����Ʈ�� ������ ��������(m^2)�� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ�������. 1m^2 = 0.3025�� �ش��Ѵ�.
 *								 ���α׷��� �ۼ��� �� �̸��� �ִ� ����� �̿��غ���.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 2

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

const double PYUNG = 0.3025;


/*
* �Լ��� : solve()
* ���(å��) : ������ �Է¹޾� ��� PYUNG���� �������� ������ش�.
* ��ȯ : ����
*/
void solve() 
{
	float app_my;
	printf("����Ʈ�� ����(��������)? ");
	scanf("%f", &app_my);
	printf("%.2f �������� = %.2f ��\n", app_my, app_my * PYUNG);
}


int main() 
{
	solve();
	return 0;
}