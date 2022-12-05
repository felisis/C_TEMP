//BITCODE Ex168
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int num, n=0, m=0;
	printf("Enter number :");
	scanf("%d", &num);
	bool is_possible = false;

	for (int i = num - 1; i >= 2; i--) {
		bool i_prime = true;
		for (int j = i - 1; j >= 2; j--) {
			if (i % j == 0) {
				i_prime = false;
			}
		}
		if (i_prime & (num % i == 0)) {
			int k = num / i;
			bool k_prime = true;
			for (int j = k - 1; j >= 2; j--) {
				if (k % j == 0) {
					k_prime = false;
				}
			}
			if (k_prime) {
				n = i; m = k;
				is_possible = true;
				break;
			}
		}
	}
	if (is_possible) {
		printf("%d x %d = %d\n", n, m, num);
	}
	else {
		printf("wrong \n");
	}


}