//BITCODE Ex067
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int num = 1;
	int i;
	for (i = 1; i < 8; i++) {
		printf("%d\n", num << i);
	}
}