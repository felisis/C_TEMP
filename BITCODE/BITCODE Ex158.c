//BITCODE Ex158
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	char str[100];
	printf("enter sentence : ");
	gets(str, sizeof(str));
	for (int i = 1; i <= strlen(str); i++) {
		for (int j = 0; j < i; j++) {
			printf("%c", str[j]);
		}
		printf("\n");
	}
}