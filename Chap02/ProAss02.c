#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main() {
	printf("번호?\n");
	int num;
	scanf("%d", &num);
	float hakjum;
	printf("학점?\n");
	scanf("%f", &hakjum);
	printf("%d번 학생의 학점은 %f입니다.\n", num, hakjum);

	return 0;
}