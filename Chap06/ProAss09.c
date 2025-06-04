/* ���ϸ�: ProAss09.c

 * ����: red, green, blue�� ���ڷ� �����ؼ� RGB ���� ����� �����ϴ� kae_rgb �Լ��� �����Ͻÿ�.
 * �տ��� ������ get_red, get_green, get_blue �Լ��� �Բ� �̿��ؼ� �Է¹��� RGB ������ ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.05.15

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>





 /*
  * �Լ��� : get_red, get_green, get_blue
  * ���(å��) : RGB �������κ��� red, green, blue ���� ���� �����Ѵ�.
  * ��ȯ : red, green, blue ��
  */
int get_red(int rgb)
{
	int red = (rgb & 0xFF0000) >> 16;
	return 0xff ^ red;
}

int get_green(int rgb)
{
	int green = (rgb & 0x00FF00) >> 8;
	return 0xff ^ green;

}

int get_blue(int rgb)
{
	int blue = (rgb & 0x0000FF);
	return 0xff ^ blue;
}

 /*
 * �Լ��� : solve()
 * ���(å��) : rgb���� �Է¹޾� get_���� �Լ��� ȣ���Ͽ� ������ ���Ϲ޾� ����Ѵ�.
 *
 * ��ȯ : ����
 */
void solve()
{
	int rgb = 0;
	printf("RGB ����? ");
	scanf("%x", &rgb);

	printf("RGB %#x�� ���� : 0x%02x%02x%02x", rgb, get_red(rgb), get_green(rgb), get_blue(rgb));
}


int main()
{
	solve();
	return 0;
}