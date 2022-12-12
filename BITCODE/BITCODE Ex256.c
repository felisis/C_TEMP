//BITCODE Ex256
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int to_septenary(int num) {
	int n = 7, digit = 1;
	while (num / n > 6) n *= 7;
	while (1) {
		if (n == 1) {
			printf("%d", num);
			break;
		}
		printf("%d", num / n);
		num = num - (num / n) * n;
		n /= 7;
	}
}

int main(void) {
	int num;
	scanf("%d", &num);
	to_septenary(num);
}