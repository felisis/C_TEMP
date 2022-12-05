//BITCODE Ex149
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int num, sum = 0, n = 1;
	printf("e t num  \n");
	scanf("%d", &num);
	printf(">>");
	while (true) {
		int up = (num / (n * 10) * n);
		int down = (num % n);
		printf("%d", up + down);
		sum += (up + down);
		n *= 10;
		if (num < n) {
			printf(" = ");
			break;
		}
		else {
			printf("+");
		}
	}
	printf("%d", sum);


}
