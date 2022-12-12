//BITCODE Ex246
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>


int main(void) {
	int num, max = 0;
	int temp = 1;
	printf("Num >> ");
	scanf("%d", &num);
	while (num > 0) {
		if (num % 10 > max) max = num % 10;
		num /= 10;
	}
	printf(">>%d\n", max);
}
