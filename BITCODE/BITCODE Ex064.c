//BITCODE Ex064
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int a = 11; // 0000 1011
	int b = 22; // 0001 0110
	int c = 33; // 0010 0001
	printf("%x\n", a);
	printf("%o\n", b);
	printf("%d\n", a&b);
	printf("%o\n", a|c);
}