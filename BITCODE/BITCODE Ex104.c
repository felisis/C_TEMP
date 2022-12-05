//BITCODE Ex104
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int num;
	scanf("%d", &num);
	printf("%d번째 알파벳 : %c , %c", num, 64 + num, 96 + num);
}