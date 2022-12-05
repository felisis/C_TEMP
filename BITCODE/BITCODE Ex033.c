//BITCODE Ex033
#include<stdio.h>

void main(void) {
	int a = 1; int b = 2;
	a += b += 3;
	printf("%d %d \n", a, b);

	a *= a++ - a++ * b;
	printf("%d \n", a + b);
}