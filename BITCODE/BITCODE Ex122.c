//BITCODE Ex122
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	int result = a + b >= 0.5 * a * b ? printf("Nice") : printf("Bad");
}
