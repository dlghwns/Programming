/* ���ϸ�: ProAss03.c

 * ����: �� �� ������ ���� �Ÿ��� ���ϴ� distance �Լ��� �ۼ��Ͻÿ�. 
 distance �Լ��� �̿��ؼ� �Է¹��� ���������� ���� ������ �����Ÿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.05.15

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


 /*
  * �Լ��� : distance()
  * ���(å��) : �� �� ������ ���� �Ÿ��� ���ϴ� �Լ�
  *
  * ��ȯ : �� �� ������ ���� �Ÿ� result��.
  */
float distance(float x1, float y1, float x2, float y2)
{
	float result = 0;
	return result = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));


}

 /*
 * �Լ��� : solve()
 * ���(å��) : �� ���� �Է¹ް� distance�Լ��� ȣ��
 *
 * ��ȯ : ����
 */
void solve()
{
	float x1, y1, x2, y2 = 0;

	printf("������  ������ ��ǥ?");
	scanf("%f %f", &x1, &y1);
	printf("������  ���� ��ǥ?");
	scanf("%f %f", &x2, &y2);
	printf("(%.0f, %.0f)~(%.0f, %.0f) ������ ���� : %f", x1, y1, x2, y2, distance(x1, y1, x2, y2));
}


int main()
{
	solve();
	return 0;
}