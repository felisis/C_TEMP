//BITCODE Ex114
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int num = 73;
	if (num <= 30) {
		num += ++num;

	}
	if (num <= 100) {
		num -= num / 2;
	}
	printf("%d", num);
}