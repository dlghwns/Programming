/* ���ϸ�: ProAss14.c

 * ����: ��, ��, ���� ���ڷ� ���޹޾� ��ȿ�� ��¥���� �˻��ϴ� check_date �Լ��� �ۼ��Ͻÿ�.
 * ���ڷ� �Ѱ� ���� ��¥�� ��ȿ�� ��¥�� 1�� �ƴϸ� 0�� �����Ѵ�. 12, 13������ �ۼ��� ios_leap_year �Լ���
 * get_days_of_month �Լ��� �̿��ص� ����. check_date �Լ��� �̿��ؼ� ��¥�� �Է¹޴� ���α׷��� �ۼ��Ͻÿ�.
 * ����ڰ� �߸��� ��¥�� �Է��ϸ� ��ȿ�� ��¥�� �Է��� ������ ����ؼ� �ٽ� �Է¹޵��� ó���Ѵ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.05.15

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int check_date(int year, int month, int day)
{
	//ù��° �� üũ, �ι�° ���� üũ, ����° �� üũ

	if(month > 0 && month < 13)
	{

		if ((year % 4 == 0 && year % 100 != 0) || ((year % 400 == 0) == 1))
		{
			//�����̹Ƿ� 2������ 29����.
			if (month == 2) //2���� ���.
			{
				if (day <= 29)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}

		}
		else
		{
			//������ �ƴ�.
			if (month == 2) //2���� ���.
			{
				if (day <= 28)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}

		 if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)  //31�ϱ��� �ִ� ��
		 {
			if (day <= 31)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		 }

		else if (month == 4 || month == 6 || month == 9 || month == 11) //30�ϱ��� �ִ� ��
		{
			if (day <= 30)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}

	}
	else 
	{
		return 0; //�� ���� �߸���.
	}
}


 /*
 * �Լ��� : solve()
 * ���(å��) : �� �� ���� �Է¹޾� �Լ��� ȣ����.
 *
 * ��ȯ : ����
 */
void solve()
{
	int year, month, day = 0;
	

	while (1) 
	{
		printf("��¥ (�� �� ��)?");
		scanf("%d %d %d", &year, &month, &day);

		int result = check_date(year, month, day);
		if (result == 0)
		{
			printf("�߸� �Է��ϼ̽��ϴ�. ��ȿ�� ��¥�� �Է��ϼ���.\n");
			continue;
		}
		else
		{
			printf("�Է��� ��¥�� %d�� %d�� %d�� �Դϴ�.\n", year, month, day);
			break;
		}
		
	}


}


int main()
{
	solve();
	return 0;
}