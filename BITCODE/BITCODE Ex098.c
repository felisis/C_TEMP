//BITCODE Ex098
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int num;
	scanf("%d", &num);
	printf("%d", num % 3 == 0 && num % 4 != 0);
	
}