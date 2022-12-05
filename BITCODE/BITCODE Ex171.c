//BITCODE Ex171
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int sum=0;
	int i;
	for (i = 0; i <= 999; i++) {
		sum += i;
		if (sum >= 10000) {
			goto FINISH;
		}
		
	}
FINISH: printf("%d", i);
}