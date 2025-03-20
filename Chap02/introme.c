#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void introme() {
	int age;
	char hello[256];
	char name[256];

	printf("이름 나이 인사 인사말을 입력해주세요\n");
	scanf("%s %d %s", name, &age, hello);


	printf("이름 : %s 나이 : %d \n인삿말 : %s", name, age, hello);
}


int main() {

	introme();
	return 0;
}