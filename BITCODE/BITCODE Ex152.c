//BITCODE Ex152
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int i;
	int sum = 0;
	for (i = 1; i <= 10000; i++) {
		if (i % 7 == 0 || i % 11 == 0) {
			sum -= i;
			printf("- %d ", i);
		}
		else if (i % 3 == 0 || i % 4 == 0) {
			sum += i;
			printf("+ %d ", i);
		}

	}
	printf("sum = %d", sum);
}
