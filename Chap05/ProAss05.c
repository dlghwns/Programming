/* ���ϸ�: ProAss05.c

 * ����: Programming Assignment. �µ��� �Է¹޾� ���� �µ��� ȭ�� �µ���, ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�. 
								"27 C" �Ǵ� 27 F"ó�� �µ��� �Է¹��� �� �������� ȭ������ ������ �� �ִ� ���ڸ� �Բ� �Է¹޴´�. 
								�Բ� �Էµ� ���ڰ� 'C'�� ���� �µ��̹Ƿ� ȭ�� �µ��� ���ؼ� ����ϰ�,
								�Էµ� ���ڰ� 'F'�� ȭ�� �µ��̹Ƿ� ���� �µ��� ���ؼ� ����Ѵ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 16

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve() 
 * ���(å��) : �� �Ǽ� temp �� result�� ���� ch�� �Է¹޴´�
 *				ch�� c�� f�� ������ ���� �ùٸ� ����� ���ش�.
 * ��ȯ : ����
 */
int solve()
{
	char ch;
	float temp = 0.0;
	
	float result = 0.0;

	printf("�µ�? ");
	scanf("%f %c", &temp, &ch);
	
	if (ch == 'c' || ch == 'C')
	{
		result = (temp * (9.0 / 5.0)) + 32.0;
		printf("%.2f C ==> %.2f F",temp, result);
	}
	else if (ch == 'f' || ch == 'F')
	{
		result = (temp - 32.0) * (5.0 / 9.0);
		printf("%.2f F ==> %.2f C", temp, result);
	}
	else
	{
		printf("�߸��Է��ϼ̽��ϴ�.\n");
	}
}


int main()
{
	solve();
	return 0;
}