//BITCODE Ex156
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int sum = 0; int num;
	while (sum <= 20) {
		sum = 0;
		printf("enter the num : ");
		scanf("%d", &num);
		while (num >= 1) {
			sum += num % 10;
			num /= 10;
		}
	}
	printf("sum = %d, finish", sum);
}