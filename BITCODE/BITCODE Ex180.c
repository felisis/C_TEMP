//BITCODE Ex180
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int x = 10;
	int* intptr = &x;
	*intptr = 100;
	printf("%d", *intptr + x);
}