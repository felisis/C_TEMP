//BITCODE Ex183
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>

int main(void) {
	int num = 3;
	int* p = &num;
	printf("*p : %d \n", *p);
	printf("(*p)++ : %d\n", (*p)++);
	printf("num : %d \n", num);
	printf("++*p : %d \n", ++*p);
	printf("num : %d \n", num);
	printf("p : %d \n", p);
	printf("&num : %d \n", &num);
}