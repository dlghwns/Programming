/* ���ϸ�: ProAss4.c

 * ����: Programming Assignment. ����� ������ ������ ������ ������ �Է¹޾� ����� �ۼ�Ʈ �󵵸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 *								����� ������ ������ ������ g������ �Է¹޴´�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 8

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 /*
 * �Լ��� : solve()
 * ���(å��) : ��ſ� ������ �Է¹޾� �󵵸� �����.
 *				�� �󵵰� ������ �� �����Ƿ�
 *				��� && ������ ���� 0�ʰ����� Ȯ����.
 *
 * ��ȯ : �� ���� ���� ��� ����̸� 0�� ��ȯ,
 *		  �� ���� �ϳ��� �����̸� 1�� ��ȯ�Ѵ�.
 */
int solve()
{
	float mae, jil = 0;

	printf("���(g)? ");
	scanf("%f", &mae);

	printf("����(g)? ");
	scanf("%f", &jil);

	if (jil && mae > 0)
	{
		printf("�� : %.2f %%\n", (jil / (mae + jil)) * 100);
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