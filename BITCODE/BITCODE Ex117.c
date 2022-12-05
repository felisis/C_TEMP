//BITCODE Ex117
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	char cha;
	scanf("%c", &cha);
	if (cha < 97) {
		printf("대문자");
	}
	else{
		printf("소문자");
	}
}
