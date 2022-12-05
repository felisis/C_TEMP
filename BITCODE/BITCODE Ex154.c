//BITCODE Ex154
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int value, number;
	printf("정수 입력:");
	scanf("%d", &value);
	printf("\n 반대로 출력 >> ");
	do {
		number = value % 10;
		printf("%d", number);
		value = value / 10;
	} while (value);
	printf("\n");
}
