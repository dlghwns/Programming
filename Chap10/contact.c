#include <stdio.h>
#include <string.h>
#include "contact.h"

/*
* 반환값: 같으면 1을 반환하고 다르면 0을 반환.
* 입력 : 비교할 두 Contact 값
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
	printf("이름 : %s\n", ct.name);
	printf("전화번호 : %s\n", ct.phone);
	printf("성별 : %s\n", ct.gender == MAN ? "남자" : "여자");
	printf("연도 : %4d\n", ct.year);
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
	printf("이름 : %s\n", ct->name);
	printf("전화번호 : %s\n", ct->phone);
	printf("성별 : %s\n", ct->gender == MAN ? "남자" : "여자");
	printf("연도 : %4d\n", ct->year);
}