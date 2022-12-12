//BITCODE Ex280
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	srand(time(NULL));
	float answer = (rand() % 1001) / 100.0;
	printf("%.2f ", answer);


}