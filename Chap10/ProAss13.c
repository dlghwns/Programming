/* ���ϸ�: ProAss13.c

 * ����: ���簢�� ������ ��Ÿ���� RECT ����ü�� �����Ͻÿ�.
 * ���簢���� ���ϴ����� ���������� �����Ǹ� ���� ��ǥ�� POINT ����ü�� �̿��ؼ� ��Ÿ����.
 * ���簢�� ������ ����ϴ� print_rect �Լ��� �����ϰ� RECT ����ü ������ �����ؼ� ���簢�� ������ �Է¹ް� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥:  2025.06.10

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



typedef struct{
    int x;
    int y;
}POINT;


typedef struct {
    POINT ld;
    POINT ru;
}RECT;


/*
* �Լ��� : print_rect()
* ���(å��)
*/
void print_rect(RECT rect)
{
    printf("[RECT ���ϴ��� : (%d, %d) ������ : (%d, %d)]", rect.ld.x, rect.ld.y, rect.ru.x, rect.ru.y);
}

 /*
 * �Լ��� : solve()
 * ���(å��) : ���ϴ�, �������� �Է¹޾� �������.
 * ��ȯ : ����
 */
void solve()
{
    RECT rect;
    printf("���簢���� ���ϴ���(x,y)?");
    scanf("%d %d", &rect.ld.x, &rect.ld.y);
    printf("���簢���� ������(x,y)?");
    scanf("%d %d", &rect.ru.x, &rect.ru.y);


    print_rect(rect);
}


int main()
{
    solve();
    return 0;
}
