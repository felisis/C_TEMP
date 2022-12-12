//BITCODE Ex243
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>


int main(void) {
	int num;
	int count = 0;
	printf("num >>");
	scanf("%d", &num);
	while (num > 0) {
		num = num / 10;
		count++;
	}
	printf("%d자리", count);
}
