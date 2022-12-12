//BITCODE Ex250
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>


int main(void) {
	int num = 13;

	//num 3 or 4배수
	if (num % 3 == 0 | num % 4 == 0) {
		printf("Y");
	}
	else {
		printf("N");
	}
}