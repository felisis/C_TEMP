//BITCODE Ex151
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int n = 1;
	int i = 1;
	int sum = 0;
	while (true) {
		if (i % 2 == 0 && sum <= 100) {
			sum = sum - i * (i + 1);
			printf("- %d*%d ", i, i + 1);
			
		}
		else if (i % 2 != 0 && sum <= 100) {
			sum = sum + i * (i + 1);
			printf("+ %d*%d ", i, i + 1);
			
		}
		if (sum >= 100) {

			printf(" : %d, %d",sum, i);
			break;
		}
		i++;
			
	}
}