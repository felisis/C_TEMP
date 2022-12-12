//BITCODE Ex346
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

double* arr_num(int n) {
	double* arr = (double*)malloc(sizeof(double) * n);
	printf("Enter >> ");
	for (int i = 0; i < n; i++) {
		scanf("%lf", arr + i);
	}
	return arr;

}

int main(void) {
	//int n;
	//scanf("%d", &n);
	//for (int i = 0; i < n; i++)
	
}