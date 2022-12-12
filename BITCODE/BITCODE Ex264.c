//BITCODE Ex264
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	*ptr1 = 15;
	(*ptr1)++;
	(*ptr2)++;

	printf("%d\n", num);
}