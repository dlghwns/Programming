/* ���ϸ�: ProAss08.c

 * ����: RGB �������κ��� red, green, blue ���� ���� �����ϴ� get_red, get_green, get_blue �Լ��� �����Ͻÿ�.
 * �� �Լ����� �̿��ؼ� �Է¹��� RGB ������ red, green, blue ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.05.15

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



// ��Ʈ ������ �̿��ϱ�. & �̿��ؼ� ������ �κ� �� 0 ���� �����.
/*
 * �Լ��� : get_red, get_green, get_blue
 * ���(å��) : RGB �������κ��� red, green, blue ���� ���� �����Ѵ�.
 * ��ȯ : red, green, blue ��
 */
int get_red(int rgb)
{
	int red = (rgb & 0xFF0000) >> 16;
	return red;
}

int get_green(int rgb)
{
	int green = (rgb & 0x00FF00) >> 8;
	return green;
}

int get_blue(int rgb)
{
	int blue = (rgb & 0x0000FF);
	return blue;
}

 /*
 * �Լ��� : solve()
 * ���(å��) : get_red, get_green, get_blue �Լ��� ȣ�����ش�.
 *
 * ��ȯ : ����
 */
void solve()
{
	int rgb = 0;
	printf("RGB ����?");
	scanf("%x", &rgb);

	get_red(rgb);
	get_green(rgb);
	get_blue(rgb);

	printf("RGB %x�� red: %d, green: %d, blue: %d", rgb, get_red(rgb), get_green(rgb), get_blue(rgb));
}


int main()
{
	solve();
	return 0;
}