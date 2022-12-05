//BITCODE Ex165
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int count = 0;
	for (int i = 0; i <= 23; i++) {
		for (int j = 0; j <= 60; j++) {
			if (i % 10 == 0) {
				count++;
			}
			else if (j % 10 == 3 | j / 10 == 3) {
				count++;
			}
		}
	}
	printf("total %d minutes", count);
}