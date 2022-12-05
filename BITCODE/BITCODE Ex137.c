//BITCODE Ex137
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	char str ='a';
	while (str != 'q') {
		printf("enter a: ");
		scanf(" %c", &str);
	}
	printf("finish");
}
