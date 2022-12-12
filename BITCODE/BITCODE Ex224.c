//BITCODE Ex224
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>


int num = 3;
void fun1(int num) {
	const int A = 1;
	num++;
#define B 3
}
#define A 2

void main(void) {
	num++; int num = 3; num++;
	printf("%d %d %d\n", A, B, num);
}
