#include <stdio.h>
#include <string.h>
#include "contact.h"

/*
* ��ȯ��: ������ 1�� ��ȯ�ϰ� �ٸ��� 0�� ��ȯ.
* �Է� : ���� �� Contact ��
*/


int isEqualContact(Contact a, Contact b)
{
	if (a.year == b.year &&
		a.gender == b.gender &&
		strcmp(a.name, b.name) == 0 &&
		strcmp(a.phone, b.phone) == 0)
	{
		return 1;
	}


	return 0;
}


void printContact(Contact ct)
{
	printf("�̸� : %s\n", ct.name);
	printf("��ȭ��ȣ : %s\n", ct.phone);
	printf("���� : %s\n", ct.gender == MAN ? "����" : "����");
	printf("���� : %4d\n", ct.year);
}

//====================================================================================================


int isEqualContactptr(const Contact *a, const Contact *b)
{
	if (a->year == b->year &&
		a->gender == b->gender &&
		strcmp(a->name, b->name) == 0 &&
		strcmp(a->phone, b->phone) == 0)
	{
		return 1;
	}


	return 0;
}


void printContactptr(const Contact *ct)
{
	printf("�̸� : %s\n", ct->name);
	printf("��ȭ��ȣ : %s\n", ct->phone);
	printf("���� : %s\n", ct->gender == MAN ? "����" : "����");
	printf("���� : %4d\n", ct->year);
}