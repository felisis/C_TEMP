//BITCODE Ex225
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>
#define PI 3.141592

int main(void) {
	int radius;
	printf("enter radius >> ");
	scanf("%d", &radius);
	double r2 = radius * radius * PI;
	printf("%0.3lf", r2);
}