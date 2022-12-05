//BITCODE Ex136
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	char str[100] = "abcdefghijklmnop";
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	int i = num1;
	while (i <= num2) {
		printf("%c", str[i-1]);
		i++;
	}
}
