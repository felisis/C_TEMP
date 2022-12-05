//BITCODE Ex028
#include<stdio.h>

void main(void) {
	int a = 1; int b = 3;
	double c = 4;
	a += b + c;
	b += b++ + c++;
	int d = a * ( a+b/ 2); //b = 10 -> 10 + 10 +4 = 24
	printf("%d \n", a);
	printf("%d \n", b);
	printf("%d \n", c);
	printf("%d \n", d);
}