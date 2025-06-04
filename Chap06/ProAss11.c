/* ���ϸ�: ProAss11.c

 * ����: �����ڿ� 2���� �ǿ����ڸ� ���ڷ� �޾ƿͼ� ��Ģ������ �����ϴ� calculator �Լ��� �ۼ��Ͻÿ�.
 * �̶�, �����ڴ� ���ڷ� �޾ƿ���, �ǿ����ڴ� �Ǽ��� �޾ƿ´�. �� �Լ��� �̿��ؼ� "0 0 0"�� �Էµɶ�����
 * ��Ģ������ ����� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.05.15

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
  * �Լ��� : calculator()
  * ���(å��) : �ΰ��� �Ǽ��� �����ڸ� ���ڷ� �޾ƿͼ� ��Ģ������ ������.
  * ��ȯ : ���� ������� �Ǽ������� ��ȯ��.
  */
float calculator(float num1, char op, float num2)
{
	float result = 0;
	switch (op)
	{
	case '+':
		
		result = num1 + num2;
		return result;

	case '-':
		result = num1 - num2;
		return result;

	case '*':
		result = num1 * num2;
		return result;

	case '/':
		if (num2 == 0)
		{
			printf("0���� ���� �� �����ϴ�.\n");
			return 0;
		}
		else
		{
			result = num1 / num2;
			return result;
		}
	default:
		printf("�߸��� �������Դϴ�.\n");
		return 0;
	}
	

}

 /*
 * �Լ��� : solve()
 * ���(å��) : �ΰ��� �Ǽ��� �����ڸ� �Է¹޾� calculator �Լ��� ȣ����.
 *
 * ��ȯ : ����
 */
void solve()
{
	int run = 0;
	
	char op;
	float num1, num2 = 0;

	while (run == 0)
	{
		printf("���� (0 0 0�Է½� ����)? ");
		scanf("%f %c %f", &num1, &op, &num2);
		if (num1 == 0 && num2 == 0 && op == '0')
		{
			run++;
		}
		else
		{
			printf("%f\n", calculator(num1, op, num2));
			continue;
		}
	}
}


int main()
{
	solve();
	return 0;
}