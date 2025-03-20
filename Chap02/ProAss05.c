#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("몸무게?\n");
	float mugae;
	scanf("%f", &mugae);
	printf("입력한 몸무게는 %.2fKG입니다\n", mugae);
	
	return 0;
}