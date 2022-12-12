//BITCODE Ex178
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int num = 10;
	int* pointer = &num;
	printf("value : %d\n", *pointer);
	*pointer = 20;
	printf("num : %d, pointer : %d", num, *pointer);
}