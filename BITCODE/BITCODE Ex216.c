//BITCODE Ex216
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int swap(int num1, int num2) {
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("%d %d\n", num1, num2);
}


int main(void) {
	int num1;
	int num2;
	scanf("%d %d", &num1, &num2);
	swap(&num1, &num2);
	printf("%d %d\n", &num1,&num2);
}