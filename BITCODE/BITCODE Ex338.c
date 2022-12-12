//BITCODE Ex338
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	int* ptr;
	ptr = (int*)malloc(sizeof(int));
	printf("size of ptr memory  : %d", sizeof(*ptr));
	free(ptr);
}