#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("커피 사이즈(S, T, G)와 주문 수량?\n");
	char size;
	int howmany;
	scanf("%c %d", &size, &howmany);
	printf("%c 사이즈 %d잔을 주문합니다.\n", size, howmany);

	return 0;
}