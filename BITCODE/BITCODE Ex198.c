//BITCODE Ex198
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>

void func(char* str, int len) {
	for (int i = len - 1; i >= 0; i--) {
		printf("%c", str[i]);
	}

}
int main(void) {
	char str[100];
	printf("Enter num >> ");
	gets(str);
	func(str, strlen(str));

}
