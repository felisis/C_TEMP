//BITCODE Ex174
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int i = 1;
	int sum = 0;
Start:
	sum = sum + i;
	i++;
	if (i <= 10) goto Start;
	printf("%d", sum);


	

}