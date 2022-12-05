//BITCODE Ex155
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int N;
	double M;
	printf("원금 : ");
	scanf("%lf", &M);
	printf("일수 : ");
	scanf("%d", &N);
	for (int i = 1; i <= N * 2; i++) {
		printf("%d회차 %f\n", i, M);
		M *= 1.0005f;
	}
	printf("After %d days : %f", N, M);
}
