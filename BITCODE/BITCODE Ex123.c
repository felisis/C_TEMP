//BITCODE Ex123
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int a, b,c;
	scanf("%d %d %d", &a, &b, &c);
	int result = a > b ? (b > c ? c : b) : (a > c ? c : a);
	printf("%d", result);
}
