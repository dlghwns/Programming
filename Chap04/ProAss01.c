/* ���ϸ�: ProAss1.c

 * ����: Programming Assignment. ������ �ӷ��� �Ǽ��� �Է¹޾� � �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 *								������ kg����, �ӷ��� m/s������ �Է¹޴´�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 8

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 //������� = 0.5 * ���� * �ӷ�^2


/*
* �Լ��� : getMotionEnergy()
* ���(å��) : ������ �ӷ��� �Է¹޾� ��������� ����Ͽ� ��ȯ
* �Է� : ����(kg), �ӷ�(m/s)
* ��ȯ : �������
*/
double getMotionEnergy(double mass, double speed)
{
	double energy = 0.5 * mass * speed * speed;
	return energy;
}


/*
* �Լ��� : assignment0401()
* ���(å��) : ������ �ӷ��� �Է¹޾� ��������� ���ϴ� �Լ�
* ��ȯ : �����̸� 0�̸� ����, �� ���� ���� �����̴�.
*/
int assignment0401(void)
{
	double mass, speed = 0.0;

	printf("����(kg)? ");
	scanf("%lf", &mass);

	printf("�ӷ�(m/s)");
	scanf("%lf", &speed);

	printf("������� : %.2f J", getMotionEnergy(mass, speed));
}


int main()
{
	assignment0401();
	return 0;
}