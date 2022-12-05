//BITCODE Ex091
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int a, b;
	printf("first number ? ");
	scanf("%d", &a);
	printf("second number? ");
	scanf("%d", &b);
	if (a > b) {
		printf("1");
	}
	else {
		printf("0");
	}
}