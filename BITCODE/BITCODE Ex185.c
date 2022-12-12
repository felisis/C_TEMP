//BITCODE Ex185
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>

int main(void) {
	char* str = "123456";
	printf("%c \n", *str + 1);
	printf("%c \n", *str++);
	printf("%c \n", *str++ + 1);
	printf("%c \n", *++str);
}