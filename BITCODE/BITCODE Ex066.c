//BITCODE Ex066
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int a = 5; // 0000 0101
	int b = 8; // 0000 1000
	int c = 2; // 0000 0010

	int num1 = a & b;
	int num2 = a | b;
	int num3 = a ^ c;
	int num4 = a & b | c;

	printf("%d %d %d %d ", num1, num2, num3, num4);
}