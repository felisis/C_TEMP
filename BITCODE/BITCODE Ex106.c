//BITCODE Ex106
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int num;
	scanf("%x", &num);
	int num1 = (num / 10000);
	int num2 = ((((num % 10000)) % 1000) % 100) / 10;
	printf("%d", num1 + num2);
}