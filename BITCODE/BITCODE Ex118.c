//BITCODE Ex118
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	char c1[100];
	scanf("%s", &c1);
	if (c1[0] == 'a' || c1[0] == 'e' || c1[0] == 'i' || c1[0] == 'o' || c1[0] == 'u') {
		printf("Good sentence");
	}

}
