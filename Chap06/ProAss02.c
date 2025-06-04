/* ���ϸ�: ProAss02.c

 * ����: �� ���� ���̸� �Ű������� ���޹޾� ���簢���� ���̸� ���ϴ�  get_area_of_square �Լ��� �ۼ��Ͻÿ�.
 * get_area_of_square �Լ��� �̿��ؼ� �Է¹��� �� ���� ���̷� ���簢���� ���̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.05.15

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
  * �Լ��� : get_area_of_square()
  * ���(å��) : �Ű����� x �� ����Ͽ� area�� ����.
  *
  * ��ȯ : �Ű��������� ����.
  */
float get_area_of_square(float x)
{
	return x * x;
}

 /*
 * �Լ��� : solve()
 * ���(å��) : ���簢���� �� ���� ���̸� �Է¹޾� get_area_of_square() �Լ��� ȣ����.
 *
 * ��ȯ : ����
 */
void solve()
{
	float x = 0.0;
	printf("�� ���� ����? ");
	scanf("%f", &x);
	printf("���簢���� ����: %f", get_area_of_square(x));
}


int main()
{
	solve();
	return 0;
}