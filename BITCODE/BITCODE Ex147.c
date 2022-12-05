//BITCODE Ex147
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	bool isPrime = true;
	int num;
	printf("enter num");
	scanf("%d", &num);
	for (int i = num - 1; i > 1; i--) {
		if (num % i == 0) {
			isPrime = false;
			break;
		}
	}
	printf("%d is %s number", num, isPrime ? "prime" : "notprime");


}
