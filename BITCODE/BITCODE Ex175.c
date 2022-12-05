//BITCODE Ex175
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		bool break_i = false;
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				sum += i * j * k;
				if (sum > 10000) {
					break_i = true;
					break;
				}
			}
			if (break_i)break;
		}
		if (break_i) break;
	}
	printf("FINISH, sum = %d", sum);
}