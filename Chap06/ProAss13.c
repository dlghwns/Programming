/* ���ϸ�: ProAss13.c

 * ����: ������ ���� ���ڷ� ���޹޾� �� ���� ��ĥ���� �����ϴ� get_days_of_month �Լ��� �ۼ��Ͻÿ�.
 * 12������ �ۼ��� is_leap_year �Լ��� �̿��ص� �ȴ�.
 * get_days_of_month �Լ��� �̿��ؼ� �Է¹��� ������ 1������ 12�������� ��¥���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.05.15

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>






 /*
   * �Լ��� : is_leap_year()
   * ���(å��) : ������ ���ڷ� ���޹޾� �������� �˻���.
   * 	�����̸� ������ ����ϰ�, �ƴϸ� �ƹ��͵� ���� ����.
   *
   *
   * ��ȯ : int : �����̸� ����, �ƴϸ� �ƹ��͵� ���� ����
   */
int is_leap_year(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

/*
* �Լ��� : get_days_of_month()
* ���(å��) : ������ ���޹޾� �� ���� ��ĥ���� �ִ��� ���..
*
* ��ȯ : ����
*/
void get_days_of_month(int year)
{
	if (year < 13)
	{
		printf("������ �ùٸ��� �ʽ��ϴ�\n");
	}

	if (is_leap_year(year))
	{
		//���� : 2������ 29�ϱ���.
		int month[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		for (int i = 0; i < 12; i++)
		{
			printf("%d��: %d��  ", i + 1, month[i]);
		}

	}
	else
	{
		int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		for (int i = 0; i < 12; i++)
		{
			printf("%d��: %d��  ", i + 1, month[i]);
		}
	}
}

 /*
 * �Լ��� : solve()
 * ���(å��) : ������ �Է¹޾� get_days_of_month �Լ��� ȣ����.
 *
 * ��ȯ : ����
 */
void solve()
{
	int year = 0;
	printf("����?");
	scanf("%d", &year);
	printf("[ %d�� ]\n", year);
	get_days_of_month(year);
}


int main()
{
	solve();
	return 0;
}