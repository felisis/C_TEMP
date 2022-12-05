//BITCODE Ex148
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int num, sum = 0;
	printf("enter num :");
	scanf("%d", &num);
	int temp = num;
	while (temp / 10 >= 1) {
		sum += temp % 10;
		temp = (temp - temp % 10) / 10;
	}
	sum += temp;
	printf("%d 각자리 합 %d", num, sum);

	
	


}
