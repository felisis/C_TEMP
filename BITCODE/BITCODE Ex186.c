//BITCODE Ex186
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>

int main(void) {
	char* str = "ADGJM";
	printf("%c \n", *str);
	printf("%c \n", *str++);
	printf("%c \n", *str);
	printf("%c \n", *++str);
	printf("%c \n", *str);
	printf("%s \n", str);
}