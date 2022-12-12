//BITCODE Ex249
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>


int main(void) {
	int num;
	scanf("%d", &num);
	
	for (int i = 2; i <= num - 1; i++) {
		if (num % i == 0) {
			printf("%d ",i);
		}
	}
}