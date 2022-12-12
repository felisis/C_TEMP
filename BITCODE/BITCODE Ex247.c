//BITCODE Ex247
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>


int main(void) {
	int m, n;
	int sum = 0;
	printf("enter n >> ");
	scanf("%d", &n);
	printf("enter m >> ");
	scanf("%d", &m);
	if (m < n) {
		int temp = m;
		m = n;
		n = temp;

		for (int i = n; i <= m; i++) {
			bool is_prime = true;
			for (int j = 2; j < i; j++) {
				if (i % j == 0)is_prime = false;
			}
			if (is_prime) sum += i;
		}
	}
	else {
		for (int i = n; i <= m; i++) {
			bool is_prime = true;
			for (int j = 2; j < i; j++) {
				if (i % j == 0)is_prime = false;
			}
			if (is_prime) sum += i;
		}
	}
	printf("%d", sum);
}
