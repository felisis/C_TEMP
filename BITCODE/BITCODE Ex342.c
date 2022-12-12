//BITCODE Ex342
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	int n, *arr;
	printf("enter>> ");
	scanf("%d", &n);

	arr = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++) {
		arr[i] = i+1;
		printf("%d ", arr[i]);
	}

}