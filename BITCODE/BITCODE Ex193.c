//BITCODE Ex193
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>


int plusAB(int a, int b) {
	a++; b++;
	return ++a + b;
	}

int main(void) {
	int a = 1;
	int b = 1;
	printf("%d %d\n", a, b);
	a = plusAB(a, b);
	printf("%d %d\n", a,b);
	a = plusAB(a, b);
	printf("%d %d\n", a, b);
	printf("%d\n", plusAB(a, b));
	printf("%d\n", b);
	
}