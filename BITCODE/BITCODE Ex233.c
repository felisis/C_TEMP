//BITCODE Ex233
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>
#define FUN(x,y) (x+y)*(x-y)
#define PRT(X,Y) (X*Y)

int main(void) {
	int X = 3;
	int Y = 5;
	printf("%d\n",FUN(X, Y));
	printf("%d\n",PRT(X, Y));
}