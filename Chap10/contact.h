//#pragma once

#ifndef _CONTACT_H_1234123
#define _CONTACT_H_1234123

enum gender { MAN, WOMAN };
typedef enum gender EGnder;

struct contact
{
	char name[24];
	char phone[24];
	EGnder gender;
	int year;
};
typedef struct contact Contact;



int isEqualContact(Contact a, Contact b);

void printContact(Contact ct);

int isEqualContactptr(Contact* a, Contact* b);

void printContactptr(Contact* ct);

#endif