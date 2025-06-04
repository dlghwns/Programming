/* ���ϸ�: ProAss04.c

 * ����: ��ǰ�� ���ݰ� �������� ���ڷ� �޾Ƽ� ���ΰ��� �����ϴ� discount_price �Լ��� �����Ͻÿ�.
 * discount_price �Լ��� �̿��ؼ� �ǸŵǴ� ��ǰ�� ���ؼ� ������ �������� �����ؼ� ���ΰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �������� ���� �Է¹��� ����, �ݺ������� �Էµ� ��ǰ�� ���ݿ� ���ؼ� ���ΰ��� ���ؼ� ����ϸ�,
 * ��ǰ�� �������� 0�� �ԷµǸ� ���α׷��� �����Ѵ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.05.15

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* �Լ��� : get_discount_price()
 * ���(å��) : ��ǰ�� ���ݰ� �������� �޾Ƽ� ���ΰ��� ����.
 *
 * ��ȯ : �� ����, �� ���ΰ�
 */
int get_discount_price(int price, int discount)
{
	price = price * (100 - discount) / 100;
	return price;
}

 /*
 * �Լ��� : solve()
 * ���(å��) : ��ǰ�� ���ݰ� �������� �޾Ƽ� discount_price �Լ��� ȣ��.
 *
 * ��ȯ : ����
 */
void solve()
{
	int run = 0;
	int price = 0;
	int discount = 0;

	while (run == 0)
	{
		printf("������(%%)?: ");
		scanf("%d", &discount);

		while (1)
		{
			printf("��ǰ�� ����?: ");
			scanf("%d", &price);
			if (price == 0)
			{
				break;
			}
			int discount_price = get_discount_price(price, discount);
			printf("���ΰ�: %d\n", discount_price);
		}

		run++;
	}
}


int main()
{
	solve();
	return 0;
}