//BITCODE Ex176
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int num;
	do {
		printf("enter num : ");
		scanf("%d", &num);
	} while (num < 0 | num >10);
	printf("FINISH");
}