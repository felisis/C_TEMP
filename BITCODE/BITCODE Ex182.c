//BITCODE Ex182
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>

int main(void) {
	int num = 3;
	int* p = &num;
	printf("%d \n", p);//10002000
	printf("%d \n", *p);//3
	printf("%d \n", (*p)++);//num = 4
	printf("num = %d", num);
}