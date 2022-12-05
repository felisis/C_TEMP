//BITCODE Ex092
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int a, b, c;
	printf("first number ? :");
	scanf("%d", &a);
	printf("second number ? :");
	scanf("%d", &b);
	printf("third number ? :");
	scanf("%d", &c);
	if (a + b == c) {
		printf("1");
	}
	else {
		printf("0");
	}
}