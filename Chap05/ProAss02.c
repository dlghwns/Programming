/* ���ϸ�: ProAss.c

 * ����:
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 16

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) : x,y ��ǥ�� �Է¹ް� x,y ��ǥ�� ���� ��и��� �����Ͽ� ����ϴ� �Լ�, x, y�� 0�� ��� �������� ������ִ� ����� �߰��߽��ϴ�.
 * ��ȯ : ����
 */
int solve()
{
	int x, y = 0;

	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("1��и��Դϴ�.\n");
	}
	else if (x < 0 && y > 0)
	{
		printf("2��и��Դϴ�.\n");
	}
	else if (x < 0 && y < 0)
	{
		printf("3��и��Դϴ�.\n");
	}
	else if (x > 0 && y < 0)
	{
		printf("4��и��Դϴ�.\n");
	}
	else
	{
		printf("�����Դϴ�.\n");
	}
}


int main()
{
	solve();
	return 0;
}