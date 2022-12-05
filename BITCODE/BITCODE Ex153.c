//BITCODE Ex153
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int n;
	int i = 1;
	printf("입력:");
	scanf("%d", &n);
	printf("%d", n);
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
			printf(" -> %d ",n);
			i++;
			
		}
		else if (n % 2 != 0 ) {
			n = (2 * n) + 2;
			printf(" -> %d ", n);
			i++;
		}
	}
	printf("%d", i);
	




}
