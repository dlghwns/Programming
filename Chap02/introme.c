/* ���ϸ�: intro.c

 * ����: intro. Visual Stdio�� �̿��ؼ� ������ ���� C ���α׷��� �ۼ��Ͻð�, ���� �� �����Ͻÿ�.

 * �ۼ���: ��ȣ��

 * ��¥: 2025.3.20

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : introme()
 * ���(å��) : �̸�, ����, �λ��� �޾� �����.
 * ��ȯ : ����.
 */
void introme() 
{
	int age;
	char hello[256];
	char name[256];

	printf("�̸� ���� �λ� �λ縻�� �Է����ּ���\n");
	scanf("%s %d %s", name, &age, hello);


	printf("�̸� : %s ���� : %d \n�λ� : %s", name, age, hello);
}


int main() 
{

	introme();
	return 0;
}