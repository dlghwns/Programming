/* ���ϸ�: ProAss7.c

 * ����: Programming Assignment. ���� �ﰢ������ ������ �� �� �� a, b�� ���̸� �Է¹޾� ������ ���̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 8

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


 /*
 * �Լ��� : solve()
 * ���(å��) : �غ��� ������ ���̸� �޾� ������ ���̸� �����ִ� �Լ��̴�.
 *
 * ��ȯ : ���̴� ������ �� �� �����Ƿ� �� ���� ������� �Ǵ��Ѵ�
 *		  �� ���� ����̸� 0�� ��ȯ�ϰ�
 *		  �� �� �߿� �ϳ��� �������̶�� 1�� ��ȯ�Ѵ�.
 */
int solve()
{
	//�غ�=a, ���� =b
	int a, b = 0;
	printf("�غ�?");
	scanf("%d", &a);

	printf("����?");
	scanf("%d", &b);


	if (a && b > 0)
	{
		printf("������ ����: %f", (float)sqrt((a * a) + (b * b)));
		return 0;
	}
	else
	{
		return 1;
	}
}


int main()
{
	int result = solve();

	if (result == 0)
	{
		return 0;
	}
	else
	{
		printf("����������.");
		return 1;
	}
}