//BITCODE Ex029
#include<stdio.h>

void main(void) {
	int a = 1;
	int b = 2;
	int c = 3;
	a += b++ + c; // a = 6, b = 3 , c = 3
	b += ++b + c; // a = 6, b = 10, c = 3
	c += c++ + ++c; // a = 6, b =11 , c =12
	//a = 6 , b = 11 , c = 13
	printf("%d \n", a);
	printf("%d \n", b);
	printf("%d \n", c);
}