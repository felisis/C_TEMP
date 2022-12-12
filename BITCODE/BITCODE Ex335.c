//BITCODE Ex335
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	char animal[3][20] = { "cat","dog","zebra" };
	for (int i = 0; i < 3; i++) {
		printf("%s\n", animal[i]);
	}
}