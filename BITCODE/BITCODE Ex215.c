//BITCODE Ex215
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int func1(int* num1, int* num2) {
	*num1 = *num1 * *num1 * *num1;
	*num2 = *num2 * *num2 ;
	return *num1 + *num2;
}


int main(void) {
	int num1 = 2;
	int num2 = 5;
	int value = func1(&num1, &num2);
	printf("%d %d %d", num1,num2,value);
}