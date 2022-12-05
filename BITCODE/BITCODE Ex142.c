//BITCODE Ex142
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	int sum = 0;

	for (int i = 100; i<1000; i++) {
		if (i % 7 == 0) {
			sum = sum + i;
		}
	}
	printf("%d", sum);
	return 0;
}
