//BITCODE Ex113
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int a=5, b=5;
	if (a > b) {
		a++;
		printf("%d %d", a, b);
	}
	else if (a == b) {
		b += a;
		printf("%d %d", a, b);
	}
	else //a<b
	{

	}


}