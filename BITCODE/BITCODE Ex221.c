//BITCODE Ex221
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

void function(void) {
	static int num1 = 0;
	int num2 = 0;
	num1++; num2++;
	printf("static :%d, general :%d\n", num1, num2);
}

int main(void) {
	function(); function();
	function(); function();
}