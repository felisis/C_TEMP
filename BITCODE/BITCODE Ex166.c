//BITCODE Ex166
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int count = 0;
	for (int i = 1; i <= 100; i++) {
		for (int j = i; i <= 100 - i; j++) {
			for (int k = j; k <= 100 - i - j; k++) {
				if (i + j + k == 100) {
					printf("(%d,%d,%d)\n", i, j, k);
					count++;
				}
			}
		}
	}
	printf("Total %d", count);
	return 0;

}