/* ���ϸ�: ProAss05.c

 * ����: ���ڷ� ���޹��� ������ ¦������ �˻��ϴ� is_even() �Լ��� Ȧ������ �˻��ϴ� is_odd() �Լ��� �ۼ��Ͻÿ�.
 * �� �Լ��� �̿��ؼ� 0�� �Է� �� ������ �Էµ� �����鿡 ���ؼ� ¦���� Ȧ���� ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.05.15

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



 /*
  * �Լ��� : is_even()
  * ��� : ������ ¦���̸� 1, �ƴϸ� 0 ��ȯ
  */
int is_even(int num)
{
    return num % 2 == 0;
}

/*
 * �Լ��� : is_odd()
 * ��� : ������ Ȧ���̸� 1, �ƴϸ� 0 ��ȯ
 */
int is_odd(int num)
{
    return num % 2 != 0;
}

/*
 * �Լ��� : solve()
 * ��� : �Է¹��� �����鿡 ���� ¦��/Ȧ�� ���� ���
 */
void solve()
{
    int num;
    int even = 0;
    int odd = 0;

    printf("������ �� �ٿ� �Է��ϼ��� (0 �Է� �� ����):\n");

    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
            break;

        if (is_even(num))
            even++;
        else if (is_odd(num))
            odd++;
    }

    printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.\n", even, odd);
}

int main()
{
    solve();
    return 0;
}