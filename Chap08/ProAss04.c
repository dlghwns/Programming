/* ���ϸ�: ProAss04.c

 * ����: �迭 ���Ҹ� ����Ű�� �����͸� �̿��ؼ� �Ǽ��� �迭�� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �Ǽ��� �迭�� ũ�Ⱑ 10�̰� ������� �ʱ�ȭ�ؼ� ����Ѵ�.
 * �ۼ���: ��ȣ��

 * ��¥:  2025.05.21
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) :
 * ��ȯ : ����
 */
void solve()
{
	double arr[10] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };
	double* p = arr; 

	double sum = 0.0;

	printf("�迭 : "); 
	for (int i = 0; i < 10; i++)
	{
		printf("%.2lf ", *(p + i)); 
	}
	printf("\n");

	for (int i = 0; i < 10; i++)
	{
		sum += *(p + i); 
	}
	printf("��� : %lf", sum);

}


int main()
{
	solve();
	return 0;
}