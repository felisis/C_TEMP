//BITCODE Ex109
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int num;
	scanf("%d", &num);
	printf("%d, %d", (num >> 1)&1, (num >> 4)&1);
}