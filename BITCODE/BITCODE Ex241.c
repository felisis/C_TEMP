//BITCODE Ex241
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>


int main(void) {
	for (int i = 1; ; i++) {
		for (int j = i; j <= i + 6; j++) {
			printf("%d", j % 10);
		}
		printf("\n");
	}
}
