//BITCODE Ex251
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>


int main(void) {
	int sum1=0, sum2=0;
	for (int i = 1; i <= 10; i++) {
		sum1 += i * i;
		printf("+ %dx%d", i, i);
	}
	printf(" = %d\n", sum1);

	for (int i = 1; i <= 10; i++) {
		sum2 += i;
	}
	printf("%d", sum2*sum2);

}