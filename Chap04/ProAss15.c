/* ���ϸ�: ProAss15.c

 * ����: Programming Assignment. �츮�� �˰� �ִ� ȯ���� �Ÿű������̴�. ���� �޷��� ������ ���� �Ÿű������� ������ ȯ�������Ḧ ���ؼ� ȯ���� �����ȴ�.
								 ȯ��������� ȯ��������� ���� �޶�����. ȯ������������ ���ึ �� �̸� ��������, ȯ��������� ������ �ٸ��� å���ȴ�.
								ȯ������������ 1.75%�� ������ �� �ٰ� �����ϰ� ��-�޷� �Ÿű������� ȯ�������(%)�� �Է¹޾� �޷��� �� �� ����Ǵ� ȯ���� �� ���ϰ�,
								�����ϰ��� �ϴ� �޷��� ������ �Է¹޾Ƽ� �� ���� �ش��ϴ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 8

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



 /*
 * �Լ��� : solve()
 * ���(å��) : �޷��� �� �� ����Ǵ� ȯ���� �����ش�.
 * ��ȯ : ����
 */
void solve()
{

	double maemae = 0.0;
	printf("��/�޷� �Ÿű�����? ");
	scanf("%lf", &maemae);

	double udae = 0.0;
	printf("ȯ�������(%)? ");
	scanf("%lf", &udae);

	double result1 = maemae + (maemae * 0.0175 * (1 - udae / 100));
	printf("�޷� �� �� ȯ���� %f�Դϴ�.\n", result1);

	double dallar = 0.0;
	printf("������ �޷�(USD)?");
	scanf("%lf", &dallar);
	double result2 = dallar * result1;
	printf("USD %f �� �� ==> KRW %.2f", dallar, result2);

}

int main()
{
	solve();
	return 0;
}