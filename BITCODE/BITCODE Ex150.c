//BITCODE Ex150
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	char str[100];
	int sum = 0;
	printf("Enter : ");
	scanf("%s", &str);
	for (int i = 0; i < strlen(str); i++) {
		sum = sum + str[i];
	}	
	printf("%d", sum);
}