/* ���ϸ�: ProAss9.c

 * ����: Programming Assignment. �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 8

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : cal()
 * ���(å��) : solve�Լ����� �Է¹��� ��ü ����ð��� �ð�, ��, �ʷ� ��ȯ�Ͽ� ����Ѵ�.
 * ��ȯ : ����
 */
void cal(int s)
{
	int remain_h = s / 3600;
	int remain_m = (s % 3600) / 60;
	int remain_s = s % 60;

	printf("����ð��� %d�ð� %d�� %d���Դϴ�.", remain_h, remain_m, remain_s);
}


/*
* �Լ��� : solve()
* ���(å��) : ����ð��� int������ �Է¹޾� cal()�Լ��� ȣ���Ѵ�.
* ��ȯ : ����
*/
void solve()
{
	int s = 0;
	printf("����ð�(��)? ");
	scanf("%d", &s);
	cal(s);
}

int main()
{
	solve();
	return 0;
}