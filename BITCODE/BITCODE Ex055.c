//BITCODE Ex055
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	char str1[] = "physical";
	char str2[] = "physiology";

	int index = strspn(str1, str2);
	printf("%s\n", str1 + index);
	printf("%s\n", str2 + index);
}