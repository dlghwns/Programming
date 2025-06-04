/* ���ϸ�: ProAss16.c

 * ����: Programming Assignment. ��ǻ�� �ý��ۿ��� ������ ǥ���ϴ� ��� �߿� RGB ǥ����� red, green, blue�� 8��Ʈ���� ����ؼ� ������ ǥ���ϹǷ� 24��Ʈ Ʈ���÷���� �Ѵ�.
								 ��ǻ�� �ý��ۿ����� 32��Ʈ �������� �� ���� ����Ʈ���� red, green, blue�� ������ ���� ������ �����ϰ� �ֻ��� ����Ʈ�� ������� �ʰ� 0���� ä���.
								 0~255������ ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� RGB �� ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
								 RGB ������ ����� ���� ����Ʈ ������ �˾ƺ��� ������ 16������ ����Ѵ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 8

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) : red, green, blue ���� �޾� 256�̻��̸� 0���� �������ְ� 16������ ������ش�.
 *
 * ��ȯ : ����
 */
int solve()
{
	int red = 0, green = 0, blue = 0;
	printf("red");
	scanf("%d", &red);
	printf("green");
	scanf("%d", &green);
	printf("blue");
	scanf("%d", &blue);

	red = (red < 256) ? red : 0;
	green = (green < 256) ? green : 0;
	blue = (blue < 256) ? blue : 0;

	// b g r ����
	printf("RGB Ʈ���÷� : %02x%02X%02X", blue, green, red);

}


int main()
{
	solve();
	return 0;
}