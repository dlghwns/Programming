/* ���ϸ�: ProAss03.c

 * ����: Programming Assignment. ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ������kg, ���̴� m ������ �Է¹޴´�.

 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 2

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : calcPositonEnergy()
 * ���(å��) :
 * ��ȯ : energy, �Ű����� ���̿� ���Կ� 9.8�� ���Ѱ��� ��ȯ��.
 */
double calcPositonEnergy(int weight, int height) 
{
	double energy = weight * height * 9.8;
	return energy;

}


/*
* �Լ��� : assignment0303()
* ���(å��) : ������ ���̸� �Է¹޾� calcPositonEnergy�Լ��� ���.
* ��ȯ : ����
*/
void assignment0303() 
{
	int kg, m;
	printf("����(kg)? ");
	scanf("%d", &kg);

	printf("����(m)? ");
	scanf("%d", &m);

	printf("��ġ������ : %.6f J\n", calcPositonEnergy(kg, m));
}



int main() 
{
	assignment0303();
	return 0;
}