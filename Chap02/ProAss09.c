#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("16진수 정수?\n");
	int hex;
	scanf("%x", &hex);
	printf("16진수 %x는 10진수로 %d입니다.", hex, hex);

	return 0;
}