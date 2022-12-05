//BITCODE Ex103
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	char str[10] = "ABCDEFGH";
	printf("%c\n", str[5]);
	printf("%c%c", str[6], str[7]);
	//printf("%s", str+6);
}