//BITCODE Ex167
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int count = 0;
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			for (int k = 1; k <= 3; k++) {
				count++;
				if (count == 10) {
					printf("%d", 100 * i + 10 * j + k);
				}
			}
		}
	}
	return 0;

}