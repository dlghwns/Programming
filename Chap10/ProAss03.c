/* ���ϸ�: ProAss03.c

 * ����: LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷��� �ۼ��Ͻÿ�.
 * ���̵� �Է¹޾� LOGIN ����ü �迭���� ���̵� ã�� ���� �Է¹��� �н������ ��ϵ� �н����带 ���ؼ� ������ �α��μ��� �̶�� ����Ѵ�
 * LOGIN ����ü �迩���� ũ�Ⱑ 5�� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�.
 * 
 * // ���̵� : guest, pw = idontknow
 * �ۼ���: ��ȣ��

 * ��¥:  2025.06.05

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


typedef struct {
	char id[6];
	char pw[12];
} LOGIN;


 /*
 * �Լ��� : solve()
 * ���(å��) : �α��� ������ ����.
 * ��ȯ : ����
 */
void solve()
{

	LOGIN user = { "guest", "idontknow" };
	

	char i_id[10], i_pw[10];

	printf("ID?");
	scanf("%9s", i_id);
	printf("PW:");
	scanf("%9s", i_pw);

	if (strcmp(user.pw, i_pw) == 0)
	{
		printf("�α��� ����");
	}
	else 
	{
		printf("�α��� ����");
	}

}


int main()
{
    solve();
    return 0;
}
