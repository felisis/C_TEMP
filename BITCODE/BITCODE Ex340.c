//BITCODE Ex340
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	int n; int len;
	printf("count>> ");
	scanf("%d", &n);

	int* arr = (int*)malloc(sizeof(int)*n);
	printf("%d", strlen(arr));
	free(arr);
}