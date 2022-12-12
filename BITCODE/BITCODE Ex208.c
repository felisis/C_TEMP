//BITCODE Ex208
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

void fun(int *a) {
	(*a)++;
}

int main(void) {
	int a = 10;
	printf("%d %d\n", a, &a);
	fun(&a);
	printf("%d %d\n", a,&a);
	a++;
	printf("%d %d", a, &a);
}