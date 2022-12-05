//BITCODE Ex143
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	
	int true=0;
	int false=0;
	for (int i = 1; i<=10000; i++) {
		if (i % 7 == 0) {
			true = true+1;
		}
		else {
			false = false + 1;
		}
	}
	printf("true : %d\nfalse : %d", true, false);
	return 0;
}
