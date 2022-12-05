//BITCODE Ex025
#include<stdio.h>

void main(void) {
	int a = 1; 
	int b = 2;
	int c = 3;
	a += b;
	b += c;
	c ++;
	c ++;
	printf("%d \n", a); //3
	printf("%d \n", b); //5
	printf("%d \n", c); //5
}