/* ���ϸ�: ProAss01.c

 * ����:���ο� ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ�  get_perimeter �Լ��� �ۼ��Ͻÿ�.
 * get_perimeter �Լ��� �̿��ؼ� �Է¹��� ����, ������ ���̷� ���簢���� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.05.15

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : get_perimeter()
 * ���(å��) : �Ű����� widthm height �� ����Ͽ� perimeter�� ����.
 *
 * ��ȯ : perimeter
 */
int get_perimeter(int width, int height)
{
	int perimeter = 0;
	perimeter = (width + height) * 2;
	return perimeter;
}

/*
 * �Լ��� : solve()
 * ���(å��) : ���簢���� ���ο� ���θ� �Է¹޾� get_perimeter() �Լ��� ȣ����.
 * ��ȯ : ����
 */
void solve()
{
	int width, height = 0;

	printf("����? ");
	scanf("%d", &width);
	printf("����? ");
	scanf("%d", &height);
	printf("���簢���� �ѷ�: %d", get_perimeter(width, height));
}

int main()
{
	solve();
	return 0;
}