/* ���ϸ�: ProAss(17, 18).c

 * ����: ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 *		���� ����� ���� 30�� 2000��, �� ���Ĵ� 10�д� 1000�������� ����Ѵ�.�Ϸ� �ִ� 25000���� ���� �� ����.
 *		���� �ð��� 24�ð��� ���� ���� ���ٰ� �����Ѵ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 16

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) :
 * ��ȯ : ����
 */
int solve()
{
	int money, time = 0;
	int run = 0;

	while (run == 0)
	{
		printf("���� �ð�(��)? ");
		scanf("%d", &time);
		if (time > 1440)
		{
			printf("���� �ð��� �ִ� 23�ð�(1440��)�� ���� �� �����ϴ�.\n");
			continue;
		}

		if (time == 0)   //0�̸� ����.
		{
			run++;
			break;
		}
		else if (time < 30)  //���� ��� 2õ��...?
		{
			money = 2000;
			printf("���� ��� : 2000��\n");
			continue;
		}
		else if (time > 30)    //���� 30�� �Ѱ�����.
		{
			time -= 30;
			money = (time % 10) * 1000;
			money = money < 25000 ? 25000 : money;
			printf("������� : %d��\n", money);
			continue;
		}
		
	}


}


int main()
{
	solve();
	return 0;
}